#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VPolynomialMatrixMultiplication.h"

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    // Instantiate the Verilated model
    VPolynomialMatrixMultiplication* dut = new VPolynomialMatrixMultiplication;

    // Enable tracing with VCD file
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); // Trace 99 levels of hierarchy
    m_trace->open("pmm.vcd");

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

    // Set polynomial inputs
    dut->polynomial1[0] = 11;
    dut->polynomial1[1] = 16;
    dut->polynomial1[2] = 16;
    dut->polynomial1[3] = 6;

    dut->polynomial2[0] = 0;
    dut->polynomial2[1] = 0;
    dut->polynomial2[2] = 1;
    dut->polynomial2[3] = -1;

    for (int i = 0; i < 2; i++) {
        dut->clk = !dut->clk; // Toggle clock
        dut->eval();
        m_trace->dump(sim_time++); // Dump each clock cycle

        // Print polynomial output on positive clock edge
        if (dut->clk) {
            std::cout << "Time: " << sim_time << std::endl;
            for (int k = 0; k < 4; k++) {
                std::cout << "polynomial_out[" << k << "]: " << dut->polynomial_out[k] << std::endl;
            }
        }
    }

    // Final evaluation and close VCD trace file
    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
