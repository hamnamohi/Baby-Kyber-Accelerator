// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPolynomialMatrixMultiplication__Syms.h"


VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_init_sub__TOP__0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PolynomialMatrixMultiplication", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+21,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+20,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_init_top(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_init_top\n"); );
    // Body
    VPolynomialMatrixMultiplication___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPolynomialMatrixMultiplication___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPolynomialMatrixMultiplication___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_register(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VPolynomialMatrixMultiplication___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VPolynomialMatrixMultiplication___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VPolynomialMatrixMultiplication___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VPolynomialMatrixMultiplication___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_const_0_sub_0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_const_0\n"); );
    // Init
    VPolynomialMatrixMultiplication___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPolynomialMatrixMultiplication___024root*>(voidSelf);
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPolynomialMatrixMultiplication___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_const_0_sub_0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+20,(4U),32);
    bufp->fullIData(oldp+21,(1U),32);
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_full_0_sub_0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_full_0\n"); );
    // Init
    VPolynomialMatrixMultiplication___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPolynomialMatrixMultiplication___024root*>(voidSelf);
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPolynomialMatrixMultiplication___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root__trace_full_0_sub_0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3]),32);
    bufp->fullBit(oldp+5,(vlSelf->clk));
    bufp->fullBit(oldp+6,(vlSelf->rst_n));
    bufp->fullBit(oldp+7,(vlSelf->enable));
    bufp->fullIData(oldp+8,(vlSelf->polynomial1[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->polynomial1[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->polynomial1[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->polynomial1[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->polynomial2[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->polynomial2[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->polynomial2[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->polynomial2[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->polynomial_out[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->polynomial_out[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->polynomial_out[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->polynomial_out[3]),32);
}
