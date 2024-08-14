#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VKeyGeneration.h"

vluint64_t sim_time = 0;

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

    for (int i = 0; i < 15; i++) { 
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

            std::cout << "Result 0: {";
            for (int j = 0; j < 4; j++) {
                std::cout << (int32_t)dut->result[0][j];
                if (j < 3) std::cout << ", ";
            }
            std::cout << "}" << std::endl;

            std::cout << "Result 1: {";
            for (int j = 0; j < 4; j++) {
                std::cout << (int32_t)dut->result[1][j];
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
