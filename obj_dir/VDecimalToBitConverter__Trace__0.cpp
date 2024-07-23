// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecimalToBitConverter__Syms.h"


void VDecimalToBitConverter___024root__trace_chg_0_sub_0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDecimalToBitConverter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_chg_0\n"); );
    // Init
    VDecimalToBitConverter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecimalToBitConverter___024root*>(voidSelf);
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDecimalToBitConverter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VDecimalToBitConverter___024root__trace_chg_0_sub_0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->input_value),32);
    bufp->chgCData(oldp+1,(vlSelf->coefficients),4);
    bufp->chgCData(oldp+2,(vlSelf->DecimalToBitConverter__DOT__bit_list),8);
}

void VDecimalToBitConverter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_cleanup\n"); );
    // Init
    VDecimalToBitConverter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecimalToBitConverter___024root*>(voidSelf);
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
