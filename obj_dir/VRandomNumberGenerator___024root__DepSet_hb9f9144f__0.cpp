// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRandomNumberGenerator.h for the primary calling header

#include "VRandomNumberGenerator__pch.h"
#include "VRandomNumberGenerator___024root.h"

void VRandomNumberGenerator___024root___eval_act(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_act\n"); );
}

void VRandomNumberGenerator___024root___nba_sequent__TOP__0(VRandomNumberGenerator___024root* vlSelf);

void VRandomNumberGenerator___024root___eval_nba(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRandomNumberGenerator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VRandomNumberGenerator___024root____Vdpiimwrap_RandomNumberGenerator__DOT__generate_random_number_TOP(IData/*31:0*/ min_value, IData/*31:0*/ max_value, IData/*31:0*/ &generate_random_number__Vfuncrtn);

VL_INLINE_OPT void VRandomNumberGenerator___024root___nba_sequent__TOP__0(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_RandomNumberGenerator__DOT__generate_random_number__0__Vfuncout;
    __Vfunc_RandomNumberGenerator__DOT__generate_random_number__0__Vfuncout = 0;
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VRandomNumberGenerator___024root____Vdpiimwrap_RandomNumberGenerator__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_RandomNumberGenerator__DOT__generate_random_number__0__Vfuncout);
            vlSelf->random_number = __Vfunc_RandomNumberGenerator__DOT__generate_random_number__0__Vfuncout;
        }
    } else {
        vlSelf->random_number = 0U;
    }
}

void VRandomNumberGenerator___024root___eval_triggers__act(VRandomNumberGenerator___024root* vlSelf);

bool VRandomNumberGenerator___024root___eval_phase__act(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRandomNumberGenerator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRandomNumberGenerator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRandomNumberGenerator___024root___eval_phase__nba(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRandomNumberGenerator___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRandomNumberGenerator___024root___dump_triggers__nba(VRandomNumberGenerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRandomNumberGenerator___024root___dump_triggers__act(VRandomNumberGenerator___024root* vlSelf);
#endif  // VL_DEBUG

void VRandomNumberGenerator___024root___eval(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRandomNumberGenerator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RandomNumberGenerator.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRandomNumberGenerator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RandomNumberGenerator.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRandomNumberGenerator___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRandomNumberGenerator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRandomNumberGenerator___024root___eval_debug_assertions(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
