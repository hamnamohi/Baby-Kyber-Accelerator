/* Created by Hamna Mohiuddin @hamnamohi as a part of the Google Summer of Code 2024 Project. */

#include <iostream>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VEncrypt.h"

vluint64_t sim_time = 0;

void readValuesFromFile(VEncrypt* dut) {
    std::ifstream r_file("/home/hamna/Baby-Kyber-Accelerator/r_values.txt");
    std::ifstream e1_file("/home/hamna/Baby-Kyber-Accelerator/e1_values.txt");
    std::ifstream e2_file("/home/hamna/Baby-Kyber-Accelerator/e2_values.txt");
    std::ifstream combined_file("/home/hamna/Baby-Kyber-Accelerator/publickey_values.txt");
    std::ifstream message("/home/hamna/Baby-Kyber-Accelerator/message.txt");

    if (!r_file || !e1_file || !e2_file || !combined_file || !message) {
        std::cerr << "Error opening one or more files. Please check the file paths and permissions." << std::endl;
        exit(1);
    }

    // Read r values
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (!(r_file >> dut->r[i][j])) {
                std::cerr << "Error reading r_values.txt at index [" << i << "][" << j << "]." << std::endl;
                exit(1);
            }
        }
    }

    // Read e1 values
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (!(e1_file >> dut->e1[i][j])) {
                std::cerr << "Error reading e1_values.txt at index [" << i << "][" << j << "]." << std::endl;
                exit(1);
            }
        }
    }

    // Read e2 values
    
        for (int j = 0; j < 4; j++) {
            if (!(e2_file >> dut->e2[j])) {
                std::cerr << "Error reading e2_values.txt at index." << std::endl;
                exit(1);
            }
        }
    

    // Read combined_output values
   combined_file >> dut->combined_output[0][0][0] >> dut->combined_output[0][0][1] >> dut->combined_output[0][0][2] >> dut->combined_output[0][0][3];
    combined_file >> dut->combined_output[0][1][0] >> dut->combined_output[0][1][1] >> dut->combined_output[0][1][2] >> dut->combined_output[0][1][3];
    combined_file >> dut->combined_output[0][2][0] >> dut->combined_output[0][2][1] >> dut->combined_output[0][2][2] >> dut->combined_output[0][2][3];
    combined_file >> dut->combined_output[0][3][0] >> dut->combined_output[0][3][1] >> dut->combined_output[0][3][2] >> dut->combined_output[0][3][3];

    // Combined Output 1
    combined_file >> dut->combined_output[1][0][0] >> dut->combined_output[1][0][1] >> dut->combined_output[1][0][2] >> dut->combined_output[1][0][3];
    combined_file >> dut->combined_output[1][1][0] >> dut->combined_output[1][1][1] >> dut->combined_output[1][1][2] >> dut->combined_output[1][1][3];

    message >> dut -> message;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VEncrypt* dut = new VEncrypt;
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); 
    m_trace->open("encrypt.vcd");

    // Initialize inputs
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;
    dut->message = 0;

    dut->eval();
    m_trace->dump(sim_time++);

    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++);

    // Read values from file and set them
    readValuesFromFile(dut);

    // Apply test vectors
    // dut->message = 72; // Example test message value
    dut->enable = 1;

    // Clock cycle simulation
    for (int j = 0; j < 16; j++) {
        dut->clk = !dut->clk;
        dut->eval();
        m_trace->dump(sim_time++);
    }

    // Output the results with indexes
    std::cout << "Time: " << sim_time << " | ";
    std::cout << "Message: " << dut->message << " | " << std::endl;

    std::cout << "Ciphertext [0]:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "ciphertext[0][" << i << "][" << j << "]: " << (int32_t)dut->ciphertext[0][i][j] << std::endl;
        }
    }

    std::cout << "Ciphertext [1]:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "ciphertext[1][" << i << "][" << j << "]: " << (int32_t)dut->ciphertext[1][i][j] << std::endl;
        }
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
