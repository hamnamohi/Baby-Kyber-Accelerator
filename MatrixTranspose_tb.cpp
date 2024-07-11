#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VMatrixTranspose.h"

vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VMatrixTranspose* dut = new VMatrixTranspose;

    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99);
    m_trace->open("matrix_transpose.vcd");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            dut->matrix_in[i][j] = 0;
        }
    }

    dut->matrix_in[0][0] = 6; dut->matrix_in[0][1] = 16; dut->matrix_in[0][2] = 16; dut->matrix_in[0][3] = 11;
    dut->matrix_in[1][0] = 9; dut->matrix_in[1][1] = 4; dut->matrix_in[1][2] = 6; dut->matrix_in[1][3] = 3;
    dut->matrix_in[2][0] = 5; dut->matrix_in[2][1] = 3; dut->matrix_in[2][2] = 10; dut->matrix_in[2][3] = 1;
    dut->matrix_in[3][0] = 6; dut->matrix_in[3][1] = 1; dut->matrix_in[3][2] = 9; dut->matrix_in[3][3] = 15;

    dut->eval();
    m_trace->dump(sim_time++);

    std::cout << "Matrix Out:" << std::endl;
    for (int i = 0; i < 4; i++) {
        std::cout << "[ ";
        for (int j = 0; j < 4; j++) {
            std::cout << dut->matrix_out[i][j];
            if (j < 3) std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }

    dut->final();
    m_trace->close();
    delete dut;
    return 0;
}
