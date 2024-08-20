#include <iostream>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VKeyGeneration.h"

vluint64_t sim_time = 0;

void readValuesFromFile(VKeyGeneration* dut) {
    std::ifstream infile("/home/hamna/Baby-Kyber-Accelerator/A1_values.txt");
    if (!infile) {
        std::cerr << "Error opening A1_values.txt. Please check the file path and permissions." << std::endl;
        exit(1);
    }

    std::ifstream infile1("/home/hamna/Baby-Kyber-Accelerator/s_values.txt");
    if (!infile1) {
        std::cerr << "Error opening s_values.txt. Please check the file path and permissions." << std::endl;
        exit(1);
    }

    std::ifstream infile2("/home/hamna/Baby-Kyber-Accelerator/e_values.txt");
    if (!infile2) {
        std::cerr << "Error opening e_values.txt. Please check the file path and permissions." << std::endl;
        exit(1);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (!(infile >> dut->A[i][j])) {
                std::cerr << "Error reading A1_values.txt at index [" << i << "][" << j << "]." << std::endl;
                exit(1);
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (!(infile1 >> dut->secret_key[i][j])) {
                std::cerr << "Error reading s_values.txt at index [" << i << "][" << j << "]." << std::endl;
                exit(1);
            }
            if (!(infile2 >> dut->e[i][j])) {
                std::cerr << "Error reading e_values.txt at index [" << i << "][" << j << "]." << std::endl;
                exit(1);
            }
        }
    }
}


int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VKeyGeneration* dut = new VKeyGeneration;
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); 
    m_trace->open("keygen.vcd");

    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;

    dut->eval();
    m_trace->dump(sim_time++);

    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->enable = 1;

    // Read values from file and set them
    readValuesFromFile(dut);

    for (int i = 0; i < 7; i++) { 
        dut->clk = !dut->clk; 
        dut->eval();
        m_trace->dump(sim_time++);
        if (dut->clk) {
            std::cout << "Time: " << sim_time << std::endl;

            std::cout << "Secret Key 0: {";
            for (int j = 0; j < 4; j++) {
                std::cout << (int32_t)dut->secretkey[0][j];
                if (j < 3) std::cout << ", ";
            }
            std::cout << "}" << std::endl;

            std::cout << "Secret Key 1: {";
            for (int j = 0; j < 4; j++) {
                std::cout << (int32_t)dut->secretkey[1][j];
                if (j < 3) std::cout << ", ";
            }
            std::cout << "}" << std::endl;

            

            std::cout << "Combined Output 0: {" << std::endl;
            for (int j = 0; j < 4; j++) {
                std::cout << "  {";
                for (int k = 0; k < 4; k++) {
                    std::cout << (int32_t)dut->combined_output[0][j][k];
                    if (k < 3) std::cout << ", ";
                }
                std::cout << "}";
                if (j < 3) std::cout << "," << std::endl;
            }
            std::cout << "}" << std::endl;

            std::cout << "Combined Output 1: {" << std::endl;
            for (int j = 0; j < 2; j++) {
                std::cout << "  {";
                for (int k = 0; k < 4; k++) {
                    std::cout << (int32_t)dut->combined_output[1][j][k];
                    if (k < 3) std::cout << ", ";
                }
                std::cout << "}";
                if (j < 1) std::cout << "," << std::endl;
            }
            std::cout << "}" << std::endl;
        }
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
