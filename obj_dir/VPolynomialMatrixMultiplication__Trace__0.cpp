// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPolynomialMatrixMultiplication__Syms.h"


void VPolynomialMatrixMultiplication___024root__trace_chg_0_sub_0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPolynomialMatrixMultiplication___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_chg_0\n"); );
    // Init
    VPolynomialMatrixMultiplication___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPolynomialMatrixMultiplication___024root*>(voidSelf);
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPolynomialMatrixMultiplication___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VPolynomialMatrixMultiplication___024root__trace_chg_0_sub_0(VPolynomialMatrixMultiplication___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3]),32);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk));
    bufp->chgBit(oldp+5,(vlSelf->rst_n));
    bufp->chgBit(oldp+6,(vlSelf->enable));
    bufp->chgIData(oldp+7,(vlSelf->polynomial1[0]),32);
    bufp->chgIData(oldp+8,(vlSelf->polynomial1[1]),32);
    bufp->chgIData(oldp+9,(vlSelf->polynomial1[2]),32);
    bufp->chgIData(oldp+10,(vlSelf->polynomial1[3]),32);
    bufp->chgIData(oldp+11,(vlSelf->polynomial2[0]),32);
    bufp->chgIData(oldp+12,(vlSelf->polynomial2[1]),32);
    bufp->chgIData(oldp+13,(vlSelf->polynomial2[2]),32);
    bufp->chgIData(oldp+14,(vlSelf->polynomial2[3]),32);
    bufp->chgIData(oldp+15,(vlSelf->polynomial_out[0]),32);
    bufp->chgIData(oldp+16,(vlSelf->polynomial_out[1]),32);
    bufp->chgIData(oldp+17,(vlSelf->polynomial_out[2]),32);
    bufp->chgIData(oldp+18,(vlSelf->polynomial_out[3]),32);
}

void VPolynomialMatrixMultiplication___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root__trace_cleanup\n"); );
    // Init
    VPolynomialMatrixMultiplication___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPolynomialMatrixMultiplication___024root*>(voidSelf);
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
