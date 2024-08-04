#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VEncrypt.h"

vluint64_t sim_time = 0;

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

    // Set combined_output values
    // Combined Output 0
    dut->combined_output[0][0][0] = -7;
    dut->combined_output[0][0][1] = -15;
    dut->combined_output[0][0][2] = -3;
    dut->combined_output[0][0][3] = 13;

    dut->combined_output[0][1][0] = 1;
    dut->combined_output[0][1][1] = -5;
    dut->combined_output[0][1][2] = 9;
    dut->combined_output[0][1][3] = -1;

    dut->combined_output[0][2][0] = -2;
    dut->combined_output[0][2][1] = 14;
    dut->combined_output[0][2][2] = 3;
    dut->combined_output[0][2][3] = 3;

    dut->combined_output[0][3][0] = -16;
    dut->combined_output[0][3][1] = 15;
    dut->combined_output[0][3][2] = 7;
    dut->combined_output[0][3][3] = -4;

    // Combined Output 1
    dut->combined_output[1][0][0] = 5;
    dut->combined_output[1][0][1] = 12;
    dut->combined_output[1][0][2] = 11;
    dut->combined_output[1][0][3] = 5;

    dut->combined_output[1][1][0] = 11;
    dut->combined_output[1][1][1] = 11;
    dut->combined_output[1][1][2] = 15;
    dut->combined_output[1][1][3] = 6;

    // Reset the module
    dut->rst_n = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++);

    // Apply test vectors
    dut->message = 72; // Example test message value
    dut->enable = 1;

    // Clock cycle simulation
    for (int j = 0; j < 10; j++) {
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
            std::cout << "ciphertext[0][" << i << "][" << j << "]: " << dut->ciphertext[0][i][j] << std::endl;
        }
    }

    std::cout << "Ciphertext [1]:" << std::endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "ciphertext[1][" << i << "][" << j << "]: " << dut->ciphertext[1][i][j] << std::endl;
        }
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
