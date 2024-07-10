#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VRandomNumberGenerator.h"

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the Verilated model
    VRandomNumberGenerator* dut = new VRandomNumberGenerator;

    // Enable tracing with VCD file
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); // Trace 99 levels of hierarchy
    m_trace->open("rng.vcd");

    // Initialize signals
    dut->clk = 0;
    dut->rst_n = 0;
    dut->enable = 0;

    // Reset and initial evaluation
    dut->eval();
    m_trace->dump(sim_time++); // Dump initial state

    // Release reset
    dut->rst_n = 1;
    dut->eval();
    m_trace->dump(sim_time++); // Dump after releasing reset

    // Enable and run for several cycles
    dut->enable = 1;
    for (int i = 0; i < 2; ++i) {
        dut->clk = !dut->clk; // Toggle clock
        dut->eval();
        m_trace->dump(sim_time++); // Dump each clock cycle

        // Print random number on positive clock edge
        if (dut->clk) {
            std::cout << "Time: " << sim_time << std::endl;
            int signed_number = dut->random_number;
            std::cout << "Random Number: " << signed_number << std::endl;
        }
    }

    // Final evaluation and close VCD trace file
    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
