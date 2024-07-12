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
    dut->trace(m_trace, 99); // Trace 99 levels of hierarchy
    m_trace->open("key_generation.vcd");

    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;

    dut->eval();
    m_trace->dump(sim_time++); 

    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++); 

    dut->enable = 1;

    for (int i = 0; i < 3; i++) {
        dut->clk = !dut->clk; // Toggle clock
        dut->eval();
        m_trace->dump(sim_time++); 

        if (dut->clk) {
            std::cout << "Time: " << sim_time << std::endl;
            std::cout << "keys[0]: {";
            for (int j = 0; j < 4; j++) {
                std::cout << dut->keys[0][j];
                if (j < 3) std::cout << ", ";
            }
            std::cout << "}" << std::endl;

            std::cout << "keys[1]: {";
            for (int j = 0; j < 4; j++) {
                std::cout << dut->keys[1][j];
                if (j < 3) std::cout << ", ";
            }
            std::cout << "}" << std::endl;
        }
    }
    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
