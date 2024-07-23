#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VDecimalToBitConverter.h"

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VDecimalToBitConverter* dut = new VDecimalToBitConverter;
    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); 
    m_trace->open("decimaltobits.vcd");

    dut->eval();
    m_trace->dump(sim_time++);

    uint32_t test_value = 69;

    dut->input_value = test_value;

    for (int j = 0; j < 10; j++) { 
        dut->eval();
        m_trace->dump(sim_time++);

        std::cout << "Time: " << sim_time << " | ";
        std::cout << "Input Value: " << dut->input_value << " | ";
        std::cout << "Output Coefficients: {";
        for (int k = 0; k < 4; k++) {
            std::cout << ((dut->coefficients >> k) & 0x1);
            if (k < 3) std::cout << ", ";
        }
        std::cout << "}" << std::endl;
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
