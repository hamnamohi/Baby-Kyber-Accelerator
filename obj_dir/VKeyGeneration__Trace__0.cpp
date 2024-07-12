// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VKeyGeneration__Syms.h"


void VKeyGeneration___024root__trace_chg_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VKeyGeneration___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_chg_0\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VKeyGeneration___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VKeyGeneration___024root__trace_chg_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->KeyGeneration__DOT__rand_num0),32);
        bufp->chgIData(oldp+1,(vlSelf->KeyGeneration__DOT__rand_num1),32);
        bufp->chgIData(oldp+2,(vlSelf->KeyGeneration__DOT__rand_num2),32);
        bufp->chgIData(oldp+3,(vlSelf->KeyGeneration__DOT__rand_num3),32);
        bufp->chgIData(oldp+4,(vlSelf->KeyGeneration__DOT__rand_num4),32);
        bufp->chgIData(oldp+5,(vlSelf->KeyGeneration__DOT__rand_num5),32);
        bufp->chgIData(oldp+6,(vlSelf->KeyGeneration__DOT__rand_num6),32);
        bufp->chgIData(oldp+7,(vlSelf->KeyGeneration__DOT__rand_num7),32);
        bufp->chgIData(oldp+8,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    }
    bufp->chgBit(oldp+10,(vlSelf->clk));
    bufp->chgBit(oldp+11,(vlSelf->rst_n));
    bufp->chgBit(oldp+12,(vlSelf->enable));
    bufp->chgIData(oldp+13,(vlSelf->keys[0U][0U]),32);
    bufp->chgIData(oldp+14,(vlSelf->keys[0U][1U]),32);
    bufp->chgIData(oldp+15,(vlSelf->keys[0U][2U]),32);
    bufp->chgIData(oldp+16,(vlSelf->keys[0U][3U]),32);
    bufp->chgIData(oldp+17,(vlSelf->keys[1U][0U]),32);
    bufp->chgIData(oldp+18,(vlSelf->keys[1U][1U]),32);
    bufp->chgIData(oldp+19,(vlSelf->keys[1U][2U]),32);
    bufp->chgIData(oldp+20,(vlSelf->keys[1U][3U]),32);
}

void VKeyGeneration___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_cleanup\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
