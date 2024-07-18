// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VKeyGeneration__Syms.h"


VL_ATTR_COLD void VKeyGeneration___024root__trace_init_sub__TOP__0(VKeyGeneration___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("secretkey", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+193,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+197,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+201,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+205,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("KeyGeneration", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("secretkey", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+193,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+196,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+197,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+201,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+205,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rand_num", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+42,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+46,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+50,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+54,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+58,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+62,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_out0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+66+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+70+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+78+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+82,0,"stop_random_generation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("poly_mult0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+83+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+87+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+95+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+99+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+103+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+107+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+119+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+123+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+139+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+212,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+156,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+213,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+176,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rng_loop2[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("rng", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+215,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+214,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+190,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+179,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+180,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+181,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+182,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+183,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+184,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+185,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+186,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+211,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+209,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+210,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+187,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+188,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+189,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_init_top(VKeyGeneration___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_init_top\n"); );
    // Body
    VKeyGeneration___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VKeyGeneration___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VKeyGeneration___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VKeyGeneration___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VKeyGeneration___024root__trace_register(VKeyGeneration___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VKeyGeneration___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VKeyGeneration___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VKeyGeneration___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VKeyGeneration___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_const_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VKeyGeneration___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_const_0\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VKeyGeneration___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_const_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+211,(4U),32);
    bufp->fullIData(oldp+212,(1U),32);
    bufp->fullIData(oldp+213,(0xffffffefU),32);
    bufp->fullIData(oldp+214,(0x11U),32);
    bufp->fullIData(oldp+215,(0U),32);
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_full_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VKeyGeneration___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_full_0\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VKeyGeneration___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VKeyGeneration___024root__trace_full_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->KeyGeneration__DOT__added[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->KeyGeneration__DOT__added[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->KeyGeneration__DOT__added[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->KeyGeneration__DOT__added[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->KeyGeneration__DOT__added1[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->KeyGeneration__DOT__added1[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->KeyGeneration__DOT__added1[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->KeyGeneration__DOT__added1[3]),32);
    bufp->fullBit(oldp+9,(vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop1__BRA__0__KET____DOT__rng__enable));
    bufp->fullIData(oldp+10,(vlSelf->KeyGeneration__DOT__rand_num[0]),32);
    bufp->fullIData(oldp+11,(vlSelf->KeyGeneration__DOT__rand_num[1]),32);
    bufp->fullIData(oldp+12,(vlSelf->KeyGeneration__DOT__rand_num[2]),32);
    bufp->fullIData(oldp+13,(vlSelf->KeyGeneration__DOT__rand_num[3]),32);
    bufp->fullIData(oldp+14,(vlSelf->KeyGeneration__DOT__rand_num[4]),32);
    bufp->fullIData(oldp+15,(vlSelf->KeyGeneration__DOT__rand_num[5]),32);
    bufp->fullIData(oldp+16,(vlSelf->KeyGeneration__DOT__rand_num[6]),32);
    bufp->fullIData(oldp+17,(vlSelf->KeyGeneration__DOT__rand_num[7]),32);
    bufp->fullIData(oldp+18,(vlSelf->KeyGeneration__DOT__rand_num[8]),32);
    bufp->fullIData(oldp+19,(vlSelf->KeyGeneration__DOT__rand_num[9]),32);
    bufp->fullIData(oldp+20,(vlSelf->KeyGeneration__DOT__rand_num[10]),32);
    bufp->fullIData(oldp+21,(vlSelf->KeyGeneration__DOT__rand_num[11]),32);
    bufp->fullIData(oldp+22,(vlSelf->KeyGeneration__DOT__rand_num[12]),32);
    bufp->fullIData(oldp+23,(vlSelf->KeyGeneration__DOT__rand_num[13]),32);
    bufp->fullIData(oldp+24,(vlSelf->KeyGeneration__DOT__rand_num[14]),32);
    bufp->fullIData(oldp+25,(vlSelf->KeyGeneration__DOT__rand_num[15]),32);
    bufp->fullIData(oldp+26,(vlSelf->KeyGeneration__DOT__rand_num[16]),32);
    bufp->fullIData(oldp+27,(vlSelf->KeyGeneration__DOT__rand_num[17]),32);
    bufp->fullIData(oldp+28,(vlSelf->KeyGeneration__DOT__rand_num[18]),32);
    bufp->fullIData(oldp+29,(vlSelf->KeyGeneration__DOT__rand_num[19]),32);
    bufp->fullIData(oldp+30,(vlSelf->KeyGeneration__DOT__rand_num[20]),32);
    bufp->fullIData(oldp+31,(vlSelf->KeyGeneration__DOT__rand_num[21]),32);
    bufp->fullIData(oldp+32,(vlSelf->KeyGeneration__DOT__rand_num[22]),32);
    bufp->fullIData(oldp+33,(vlSelf->KeyGeneration__DOT__rand_num[23]),32);
    bufp->fullIData(oldp+34,(vlSelf->KeyGeneration__DOT__rand_num[24]),32);
    bufp->fullIData(oldp+35,(vlSelf->KeyGeneration__DOT__rand_num[25]),32);
    bufp->fullIData(oldp+36,(vlSelf->KeyGeneration__DOT__rand_num[26]),32);
    bufp->fullIData(oldp+37,(vlSelf->KeyGeneration__DOT__rand_num[27]),32);
    bufp->fullIData(oldp+38,(vlSelf->KeyGeneration__DOT__rand_num[28]),32);
    bufp->fullIData(oldp+39,(vlSelf->KeyGeneration__DOT__rand_num[29]),32);
    bufp->fullIData(oldp+40,(vlSelf->KeyGeneration__DOT__rand_num[30]),32);
    bufp->fullIData(oldp+41,(vlSelf->KeyGeneration__DOT__rand_num[31]),32);
    bufp->fullIData(oldp+42,(vlSelf->KeyGeneration__DOT__A
                             [0U][0U]),32);
    bufp->fullIData(oldp+43,(vlSelf->KeyGeneration__DOT__A
                             [0U][1U]),32);
    bufp->fullIData(oldp+44,(vlSelf->KeyGeneration__DOT__A
                             [0U][2U]),32);
    bufp->fullIData(oldp+45,(vlSelf->KeyGeneration__DOT__A
                             [0U][3U]),32);
    bufp->fullIData(oldp+46,(vlSelf->KeyGeneration__DOT__A
                             [1U][0U]),32);
    bufp->fullIData(oldp+47,(vlSelf->KeyGeneration__DOT__A
                             [1U][1U]),32);
    bufp->fullIData(oldp+48,(vlSelf->KeyGeneration__DOT__A
                             [1U][2U]),32);
    bufp->fullIData(oldp+49,(vlSelf->KeyGeneration__DOT__A
                             [1U][3U]),32);
    bufp->fullIData(oldp+50,(vlSelf->KeyGeneration__DOT__A
                             [2U][0U]),32);
    bufp->fullIData(oldp+51,(vlSelf->KeyGeneration__DOT__A
                             [2U][1U]),32);
    bufp->fullIData(oldp+52,(vlSelf->KeyGeneration__DOT__A
                             [2U][2U]),32);
    bufp->fullIData(oldp+53,(vlSelf->KeyGeneration__DOT__A
                             [2U][3U]),32);
    bufp->fullIData(oldp+54,(vlSelf->KeyGeneration__DOT__A
                             [3U][0U]),32);
    bufp->fullIData(oldp+55,(vlSelf->KeyGeneration__DOT__A
                             [3U][1U]),32);
    bufp->fullIData(oldp+56,(vlSelf->KeyGeneration__DOT__A
                             [3U][2U]),32);
    bufp->fullIData(oldp+57,(vlSelf->KeyGeneration__DOT__A
                             [3U][3U]),32);
    bufp->fullIData(oldp+58,(vlSelf->KeyGeneration__DOT__e
                             [0U][0U]),32);
    bufp->fullIData(oldp+59,(vlSelf->KeyGeneration__DOT__e
                             [0U][1U]),32);
    bufp->fullIData(oldp+60,(vlSelf->KeyGeneration__DOT__e
                             [0U][2U]),32);
    bufp->fullIData(oldp+61,(vlSelf->KeyGeneration__DOT__e
                             [0U][3U]),32);
    bufp->fullIData(oldp+62,(vlSelf->KeyGeneration__DOT__e
                             [1U][0U]),32);
    bufp->fullIData(oldp+63,(vlSelf->KeyGeneration__DOT__e
                             [1U][1U]),32);
    bufp->fullIData(oldp+64,(vlSelf->KeyGeneration__DOT__e
                             [1U][2U]),32);
    bufp->fullIData(oldp+65,(vlSelf->KeyGeneration__DOT__e
                             [1U][3U]),32);
    bufp->fullIData(oldp+66,(vlSelf->KeyGeneration__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+67,(vlSelf->KeyGeneration__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+68,(vlSelf->KeyGeneration__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+69,(vlSelf->KeyGeneration__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+70,(vlSelf->KeyGeneration__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+71,(vlSelf->KeyGeneration__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+72,(vlSelf->KeyGeneration__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+73,(vlSelf->KeyGeneration__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+74,(vlSelf->KeyGeneration__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->KeyGeneration__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+76,(vlSelf->KeyGeneration__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+77,(vlSelf->KeyGeneration__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+78,(vlSelf->KeyGeneration__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+79,(vlSelf->KeyGeneration__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+80,(vlSelf->KeyGeneration__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+81,(vlSelf->KeyGeneration__DOT__poly_out3[3]),32);
    bufp->fullBit(oldp+82,(vlSelf->KeyGeneration__DOT__stop_random_generation));
    bufp->fullIData(oldp+83,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
    bufp->fullIData(oldp+84,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
    bufp->fullIData(oldp+85,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
    bufp->fullIData(oldp+86,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
    bufp->fullIData(oldp+87,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
    bufp->fullIData(oldp+88,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
    bufp->fullIData(oldp+89,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
    bufp->fullIData(oldp+90,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
    bufp->fullIData(oldp+91,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[3]),32);
    bufp->fullIData(oldp+95,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+96,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+97,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+98,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+99,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+100,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+101,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+102,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+103,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+106,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+107,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+108,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+109,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+110,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+111,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+116,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+117,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+118,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+119,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+120,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+121,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+122,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+123,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+124,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+125,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+126,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+127,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+128,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+129,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+130,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+131,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
    bufp->fullIData(oldp+132,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
    bufp->fullIData(oldp+133,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
    bufp->fullIData(oldp+134,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
    bufp->fullIData(oldp+135,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
    bufp->fullIData(oldp+136,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
    bufp->fullIData(oldp+137,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
    bufp->fullIData(oldp+138,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
    bufp->fullIData(oldp+139,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[0]),32);
    bufp->fullIData(oldp+140,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[1]),32);
    bufp->fullIData(oldp+141,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[2]),32);
    bufp->fullIData(oldp+142,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[3]),32);
    bufp->fullIData(oldp+143,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+144,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+145,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+146,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+147,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__0__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+148,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__10__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+149,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__11__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+150,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__12__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+151,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__13__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+152,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__14__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+153,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__15__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+154,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__16__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+155,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__17__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+156,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__18__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+157,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__19__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+158,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__1__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+159,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__20__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+160,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__21__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+161,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__22__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+162,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__23__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+163,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__2__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+164,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__3__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+165,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__4__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+166,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__5__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+167,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__6__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+168,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__7__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+169,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__8__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+170,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop1__BRA__9__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+171,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__24__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+172,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__25__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+173,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__26__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+174,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__27__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+175,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__28__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+176,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__29__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+177,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__30__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+178,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop2__BRA__31__KET____DOT__rng__random_number),32);
    bufp->fullIData(oldp+179,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+180,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+181,(vlSelf->KeyGeneration__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+182,(vlSelf->KeyGeneration__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+183,(vlSelf->KeyGeneration__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+184,(vlSelf->KeyGeneration__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j),32);
    bufp->fullIData(oldp+185,(vlSelf->KeyGeneration__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+186,(vlSelf->KeyGeneration__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+187,(vlSelf->KeyGeneration__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+188,(vlSelf->KeyGeneration__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
    bufp->fullIData(oldp+189,(vlSelf->KeyGeneration__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k),32);
    bufp->fullBit(oldp+190,(vlSelf->clk));
    bufp->fullBit(oldp+191,(vlSelf->rst_n));
    bufp->fullBit(oldp+192,(vlSelf->enable));
    bufp->fullIData(oldp+193,(vlSelf->secretkey[0U]
                              [0U]),32);
    bufp->fullIData(oldp+194,(vlSelf->secretkey[0U]
                              [1U]),32);
    bufp->fullIData(oldp+195,(vlSelf->secretkey[0U]
                              [2U]),32);
    bufp->fullIData(oldp+196,(vlSelf->secretkey[0U]
                              [3U]),32);
    bufp->fullIData(oldp+197,(vlSelf->secretkey[1U]
                              [0U]),32);
    bufp->fullIData(oldp+198,(vlSelf->secretkey[1U]
                              [1U]),32);
    bufp->fullIData(oldp+199,(vlSelf->secretkey[1U]
                              [2U]),32);
    bufp->fullIData(oldp+200,(vlSelf->secretkey[1U]
                              [3U]),32);
    bufp->fullIData(oldp+201,(vlSelf->result[0U][0U]),32);
    bufp->fullIData(oldp+202,(vlSelf->result[0U][1U]),32);
    bufp->fullIData(oldp+203,(vlSelf->result[0U][2U]),32);
    bufp->fullIData(oldp+204,(vlSelf->result[0U][3U]),32);
    bufp->fullIData(oldp+205,(vlSelf->result[1U][0U]),32);
    bufp->fullIData(oldp+206,(vlSelf->result[1U][1U]),32);
    bufp->fullIData(oldp+207,(vlSelf->result[1U][2U]),32);
    bufp->fullIData(oldp+208,(vlSelf->result[1U][3U]),32);
    bufp->fullIData(oldp+209,(vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+210,(vlSelf->KeyGeneration__DOT__unnamedblk7__DOT__i),32);
}
