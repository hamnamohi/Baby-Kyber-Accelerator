// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecrypt__Syms.h"


void VDecrypt___024root__trace_chg_0_sub_0(VDecrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDecrypt___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root__trace_chg_0\n"); );
    // Init
    VDecrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecrypt___024root*>(voidSelf);
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDecrypt___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VDecrypt___024root__trace_chg_0_sub_0(VDecrypt___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+13,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+14,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+15,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+16,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+21,(vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+22,(vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+23,(vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+24,(vlSelf->Decrypt__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->Decrypt__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->Decrypt__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+27,(vlSelf->Decrypt__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+28,(vlSelf->Decrypt__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+29,(vlSelf->Decrypt__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+30,(vlSelf->Decrypt__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+31,(vlSelf->Decrypt__DOT__poly_out1[3]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->rst_n));
    bufp->chgBit(oldp+34,(vlSelf->enable));
    bufp->chgIData(oldp+35,(vlSelf->secret_key[0U][0U]),32);
    bufp->chgIData(oldp+36,(vlSelf->secret_key[0U][1U]),32);
    bufp->chgIData(oldp+37,(vlSelf->secret_key[0U][2U]),32);
    bufp->chgIData(oldp+38,(vlSelf->secret_key[0U][3U]),32);
    bufp->chgIData(oldp+39,(vlSelf->secret_key[1U][0U]),32);
    bufp->chgIData(oldp+40,(vlSelf->secret_key[1U][1U]),32);
    bufp->chgIData(oldp+41,(vlSelf->secret_key[1U][2U]),32);
    bufp->chgIData(oldp+42,(vlSelf->secret_key[1U][3U]),32);
    bufp->chgIData(oldp+43,(vlSelf->ciphertext[0U][0U]
                            [0U]),32);
    bufp->chgIData(oldp+44,(vlSelf->ciphertext[0U][0U]
                            [1U]),32);
    bufp->chgIData(oldp+45,(vlSelf->ciphertext[0U][0U]
                            [2U]),32);
    bufp->chgIData(oldp+46,(vlSelf->ciphertext[0U][0U]
                            [3U]),32);
    bufp->chgIData(oldp+47,(vlSelf->ciphertext[0U][1U]
                            [0U]),32);
    bufp->chgIData(oldp+48,(vlSelf->ciphertext[0U][1U]
                            [1U]),32);
    bufp->chgIData(oldp+49,(vlSelf->ciphertext[0U][1U]
                            [2U]),32);
    bufp->chgIData(oldp+50,(vlSelf->ciphertext[0U][1U]
                            [3U]),32);
    bufp->chgIData(oldp+51,(vlSelf->ciphertext[1U][0U]
                            [0U]),32);
    bufp->chgIData(oldp+52,(vlSelf->ciphertext[1U][0U]
                            [1U]),32);
    bufp->chgIData(oldp+53,(vlSelf->ciphertext[1U][0U]
                            [2U]),32);
    bufp->chgIData(oldp+54,(vlSelf->ciphertext[1U][0U]
                            [3U]),32);
    bufp->chgIData(oldp+55,(vlSelf->ciphertext[1U][1U]
                            [0U]),32);
    bufp->chgIData(oldp+56,(vlSelf->ciphertext[1U][1U]
                            [1U]),32);
    bufp->chgIData(oldp+57,(vlSelf->ciphertext[1U][1U]
                            [2U]),32);
    bufp->chgIData(oldp+58,(vlSelf->ciphertext[1U][1U]
                            [3U]),32);
    bufp->chgCData(oldp+59,(vlSelf->m_b),4);
    bufp->chgCData(oldp+60,(vlSelf->decimal_value),4);
    bufp->chgIData(oldp+61,(vlSelf->Decrypt__DOT__temp_m_n[0]),32);
    bufp->chgIData(oldp+62,(vlSelf->Decrypt__DOT__temp_m_n[1]),32);
    bufp->chgIData(oldp+63,(vlSelf->Decrypt__DOT__temp_m_n[2]),32);
    bufp->chgIData(oldp+64,(vlSelf->Decrypt__DOT__temp_m_n[3]),32);
}

void VDecrypt___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root__trace_cleanup\n"); );
    // Init
    VDecrypt___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecrypt___024root*>(voidSelf);
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
