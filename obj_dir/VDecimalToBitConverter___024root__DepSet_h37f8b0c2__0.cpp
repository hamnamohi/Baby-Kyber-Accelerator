// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecimalToBitConverter.h for the primary calling header

#include "VDecimalToBitConverter__pch.h"
#include "VDecimalToBitConverter___024root.h"

void VDecimalToBitConverter___024root___ico_sequent__TOP__0(VDecimalToBitConverter___024root* vlSelf);

void VDecimalToBitConverter___024root___eval_ico(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VDecimalToBitConverter___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VDecimalToBitConverter___024root___ico_sequent__TOP__0(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->DecimalToBitConverter__DOT__bit_list = 
        (0xffU & vlSelf->input_value);
    vlSelf->coefficients = (0xeU & (IData)(vlSelf->coefficients));
    vlSelf->coefficients = ((0xeU & (IData)(vlSelf->coefficients)) 
                            | (1U & ((IData)(vlSelf->coefficients) 
                                     + (IData)(vlSelf->DecimalToBitConverter__DOT__bit_list))));
    vlSelf->coefficients = ((0xeU & (IData)(vlSelf->coefficients)) 
                            | (1U & (IData)(vlSelf->coefficients)));
    vlSelf->coefficients = (0xdU & (IData)(vlSelf->coefficients));
    vlSelf->coefficients = ((0xdU & (IData)(vlSelf->coefficients)) 
                            | (2U & ((((IData)(vlSelf->coefficients) 
                                       >> 1U) + ((IData)(vlSelf->DecimalToBitConverter__DOT__bit_list) 
                                                 >> 2U)) 
                                     << 1U)));
    vlSelf->coefficients = ((0xdU & (IData)(vlSelf->coefficients)) 
                            | (2U & (IData)(vlSelf->coefficients)));
    vlSelf->coefficients = (0xbU & (IData)(vlSelf->coefficients));
    vlSelf->coefficients = ((0xbU & (IData)(vlSelf->coefficients)) 
                            | (4U & ((((IData)(vlSelf->coefficients) 
                                       >> 2U) + ((IData)(vlSelf->DecimalToBitConverter__DOT__bit_list) 
                                                 >> 4U)) 
                                     << 2U)));
    vlSelf->coefficients = ((0xbU & (IData)(vlSelf->coefficients)) 
                            | (4U & (IData)(vlSelf->coefficients)));
    vlSelf->coefficients = (7U & (IData)(vlSelf->coefficients));
    vlSelf->coefficients = ((7U & (IData)(vlSelf->coefficients)) 
                            | (8U & ((((IData)(vlSelf->coefficients) 
                                       >> 3U) + ((IData)(vlSelf->DecimalToBitConverter__DOT__bit_list) 
                                                 >> 6U)) 
                                     << 3U)));
    vlSelf->coefficients = ((7U & (IData)(vlSelf->coefficients)) 
                            | (8U & (IData)(vlSelf->coefficients)));
}

void VDecimalToBitConverter___024root___eval_triggers__ico(VDecimalToBitConverter___024root* vlSelf);

bool VDecimalToBitConverter___024root___eval_phase__ico(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VDecimalToBitConverter___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VDecimalToBitConverter___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VDecimalToBitConverter___024root___eval_act(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_act\n"); );
}

void VDecimalToBitConverter___024root___eval_nba(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_nba\n"); );
}

void VDecimalToBitConverter___024root___eval_triggers__act(VDecimalToBitConverter___024root* vlSelf);

bool VDecimalToBitConverter___024root___eval_phase__act(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDecimalToBitConverter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDecimalToBitConverter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDecimalToBitConverter___024root___eval_phase__nba(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDecimalToBitConverter___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecimalToBitConverter___024root___dump_triggers__ico(VDecimalToBitConverter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecimalToBitConverter___024root___dump_triggers__nba(VDecimalToBitConverter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecimalToBitConverter___024root___dump_triggers__act(VDecimalToBitConverter___024root* vlSelf);
#endif  // VL_DEBUG

void VDecimalToBitConverter___024root___eval(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VDecimalToBitConverter___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("DecimalToBitConverter.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VDecimalToBitConverter___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDecimalToBitConverter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("DecimalToBitConverter.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDecimalToBitConverter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("DecimalToBitConverter.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDecimalToBitConverter___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDecimalToBitConverter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDecimalToBitConverter___024root___eval_debug_assertions(VDecimalToBitConverter___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
