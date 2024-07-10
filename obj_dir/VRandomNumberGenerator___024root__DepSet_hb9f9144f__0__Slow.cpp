// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRandomNumberGenerator.h for the primary calling header

#include "VRandomNumberGenerator__pch.h"
#include "VRandomNumberGenerator___024root.h"

VL_ATTR_COLD void VRandomNumberGenerator___024root___eval_static(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___eval_initial(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___eval_final(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_final\n"); );
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___eval_settle(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRandomNumberGenerator___024root___dump_triggers__act(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRandomNumberGenerator___024root___dump_triggers__nba(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRandomNumberGenerator___024root___ctor_var_reset(VRandomNumberGenerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->random_number = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
