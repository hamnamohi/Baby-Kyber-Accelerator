#include <iostream>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VDecrypt.h"

vluint64_t sim_time = 0;

void readValuesFromFile(VDecrypt* dut) {
    std::ifstream ciphertext_file("/home/hamna/test/ciphertext_values.txt");
    std::ifstream secret_key_file("/home/hamna/test/privatekey.txt");

    if (!ciphertext_file || !secret_key_file) {
        std::cerr << "Error opening one or more files. Please check the file paths and permissions." << std::endl;
        exit(1);
    }

    // Read secret_key values
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (!(secret_key_file >> dut->secret_key[i][j])) {
                std::cerr << "Error reading s.txt at index [" << i << "][" << j << "]." << std::endl;
                exit(1);
            }
        }
    }

    // Read ciphertext values
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 4; k++) {
                if (!(ciphertext_file >> dut->ciphertext[i][j][k])) {
                    std::cerr << "Error reading ciphertext.txt at index [" << i << "][" << j << "][" << k << "]." << std::endl;
                    exit(1);
                }
            }
        }
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VDecrypt* dut = new VDecrypt;
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("decrypt.vcd");

    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 4; k++) {
                dut->ciphertext[i][j][k] = 0;
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            dut->secret_key[i][j] = 0;
        }
    }
    // Read values from file and set them
    readValuesFromFile(dut);

    // Reset and evaluate
    dut->rst_n = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++);

    // Apply test vectors
    dut->enable = 1;

    // Clock cycle simulation
    for (int j = 0; j < 10; j++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
        if (j > 1) {  
            std::cout << "Time: " << sim_time << " | " << std::endl;
            std::cout << "Decrypted Values (m_b): " << std::bitset<4>(dut->m_b) << std::endl; 
            std::cout << "Decimal Value: " << dut->decimal_value << std::endl;
        }
    }
    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
