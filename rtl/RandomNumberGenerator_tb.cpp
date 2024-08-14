#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VRandomNumberGenerator.h"

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    VRandomNumberGenerator* dut = new VRandomNumberGenerator;

    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); 
    m_trace->open("rng.vcd");

    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;

    dut->eval();
    m_trace->dump(sim_time++); 

    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++);

    dut->enable = 1;
    for (int i = 0; i < 2; ++i) {
        dut->clk = !dut->clk; 
        dut->eval();
        m_trace->dump(sim_time++); 

        if (dut->clk) {
            std::cout << "Time: " << sim_time << std::endl;
            int signed_number = dut->random_number;
            std::cout << "Random Number: " << signed_number << std::endl;
        }
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
