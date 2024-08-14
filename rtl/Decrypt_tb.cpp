#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VDecrypt.h"

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VDecrypt* dut = new VDecrypt;
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("decrypt.vcd");

    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;

    dut->secret_key[0][0] = -1;
    dut->secret_key[0][1] = 0;
    dut->secret_key[0][2] = 1;
    dut->secret_key[0][3] = -1;

    dut->secret_key[1][0] = 0;
    dut->secret_key[1][1] = 1;
    dut->secret_key[1][2] = 1;
    dut->secret_key[1][3] = 1;

    dut->ciphertext[0][0][0] = 0;
    dut->ciphertext[0][0][1] = 12;
    dut->ciphertext[0][0][2] = 9;
    dut->ciphertext[0][0][3] = 1;

    dut->ciphertext[0][1][0] = 11;
    dut->ciphertext[0][1][1] = 15;
    dut->ciphertext[0][1][2] = 16;
    dut->ciphertext[0][1][3] = 11;

    dut->ciphertext[1][0][0] = 12;
    dut->ciphertext[1][0][1] = 3;
    dut->ciphertext[1][0][2] = 9;
    dut->ciphertext[1][0][3] = 5;

    dut->ciphertext[1][1][0] = 0;
    dut->ciphertext[1][1][1] = 0;
    dut->ciphertext[1][1][2] = 0;
    dut->ciphertext[1][1][3] = 0;

    dut->rst_n = 0;
    dut->eval();
    m_trace->dump(sim_time++);
    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++);

    dut->enable = 1;
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
