// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMatrixTranspose__Syms.h"


void VMatrixTranspose___024root__trace_chg_0_sub_0(VMatrixTranspose___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMatrixTranspose___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root__trace_chg_0\n"); );
    // Init
    VMatrixTranspose___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatrixTranspose___024root*>(voidSelf);
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMatrixTranspose___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMatrixTranspose___024root__trace_chg_0_sub_0(VMatrixTranspose___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->matrix_in[0U][0U]),32);
    bufp->chgIData(oldp+1,(vlSelf->matrix_in[0U][1U]),32);
    bufp->chgIData(oldp+2,(vlSelf->matrix_in[0U][2U]),32);
    bufp->chgIData(oldp+3,(vlSelf->matrix_in[0U][3U]),32);
    bufp->chgIData(oldp+4,(vlSelf->matrix_in[1U][0U]),32);
    bufp->chgIData(oldp+5,(vlSelf->matrix_in[1U][1U]),32);
    bufp->chgIData(oldp+6,(vlSelf->matrix_in[1U][2U]),32);
    bufp->chgIData(oldp+7,(vlSelf->matrix_in[1U][3U]),32);
    bufp->chgIData(oldp+8,(vlSelf->matrix_in[2U][0U]),32);
    bufp->chgIData(oldp+9,(vlSelf->matrix_in[2U][1U]),32);
    bufp->chgIData(oldp+10,(vlSelf->matrix_in[2U][2U]),32);
    bufp->chgIData(oldp+11,(vlSelf->matrix_in[2U][3U]),32);
    bufp->chgIData(oldp+12,(vlSelf->matrix_in[3U][0U]),32);
    bufp->chgIData(oldp+13,(vlSelf->matrix_in[3U][1U]),32);
    bufp->chgIData(oldp+14,(vlSelf->matrix_in[3U][2U]),32);
    bufp->chgIData(oldp+15,(vlSelf->matrix_in[3U][3U]),32);
    bufp->chgIData(oldp+16,(vlSelf->matrix_out[0U][0U]),32);
    bufp->chgIData(oldp+17,(vlSelf->matrix_out[0U][1U]),32);
    bufp->chgIData(oldp+18,(vlSelf->matrix_out[0U][2U]),32);
    bufp->chgIData(oldp+19,(vlSelf->matrix_out[0U][3U]),32);
    bufp->chgIData(oldp+20,(vlSelf->matrix_out[1U][0U]),32);
    bufp->chgIData(oldp+21,(vlSelf->matrix_out[1U][1U]),32);
    bufp->chgIData(oldp+22,(vlSelf->matrix_out[1U][2U]),32);
    bufp->chgIData(oldp+23,(vlSelf->matrix_out[1U][3U]),32);
    bufp->chgIData(oldp+24,(vlSelf->matrix_out[2U][0U]),32);
    bufp->chgIData(oldp+25,(vlSelf->matrix_out[2U][1U]),32);
    bufp->chgIData(oldp+26,(vlSelf->matrix_out[2U][2U]),32);
    bufp->chgIData(oldp+27,(vlSelf->matrix_out[2U][3U]),32);
    bufp->chgIData(oldp+28,(vlSelf->matrix_out[3U][0U]),32);
    bufp->chgIData(oldp+29,(vlSelf->matrix_out[3U][1U]),32);
    bufp->chgIData(oldp+30,(vlSelf->matrix_out[3U][2U]),32);
    bufp->chgIData(oldp+31,(vlSelf->matrix_out[3U][3U]),32);
}

void VMatrixTranspose___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root__trace_cleanup\n"); );
    // Init
    VMatrixTranspose___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMatrixTranspose___024root*>(voidSelf);
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
