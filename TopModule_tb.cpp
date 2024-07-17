// #include <iostream>
// #include <verilated.h>
// #include <verilated_vcd_c.h>
// #include "VTopModule.h"

// vluint64_t sim_time = 0;

// int main(int argc, char** argv) {
//     Verilated::commandArgs(argc, argv);

//     VTopModule* dut = new VTopModule;
//     Verilated::traceEverOn(true);
//     VerilatedVcdC* m_trace = new VerilatedVcdC;
//     dut->trace(m_trace, 99); // Trace 99 levels of hierarchy
//     m_trace->open("topmodule.vcd");

//     dut->clk = 0;
//     dut->rst_n = 0;
//     dut->enable = 0;

//     dut->eval();
//     m_trace->dump(sim_time++);

//     // Release reset
//     dut->rst_n = 1;
//     dut->eval();
//     m_trace->dump(sim_time++);

//     dut->enable = 1;

//     for (int i = 0; i <= 10; i++) { // simulation
//         dut->clk = !dut->clk;
//         dut->eval();
//         m_trace->dump(sim_time++);

//         // Print temporary secret key and result values on positive clock edge
//         if (dut->clk) {
//             std::cout << "Time: " << sim_time << std::endl;
//             std::cout << "Temp Secret Key 0: {";
//             for (int j = 0; j < 4; j++) {
//                 std::cout << dut->temp_secretkey[0][j];
//                 if (j < 3) std::cout << ", ";
//             }
//             std::cout << "}" << std::endl;

//             std::cout << "Temp Secret Key 1: {";
//             for (int j = 0; j < 4; j++) {
//                 std::cout << dut->temp_secretkey[1][j];
//                 if (j < 3) std::cout << ", ";
//             }
//             std::cout << "}" << std::endl;

//             std::cout << "Temp Result 0: {";
//             for (int j = 0; j < 4; j++) {
//                 std::cout << dut->temp_result[0][j];
//                 if (j < 3) std::cout << ", ";
//             }
//             std::cout << "}" << std::endl;

//             std::cout << "Temp Result 1: {";
//             for (int j = 0; j < 4; j++) {
//                 std::cout << dut->temp_result[1][j];
//                 if (j < 3) std::cout << ", ";
//             }
//             std::cout << "}" << std::endl;
//         }
//     }

//     m_trace->close();
//     delete dut;
//     delete m_trace;

//     return 0;
// }
