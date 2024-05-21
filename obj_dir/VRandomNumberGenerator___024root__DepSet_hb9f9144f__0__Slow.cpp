// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRandomNumberGenerator.h for the primary calling header

#include "verilated.h"

#include "VRandomNumberGenerator___024root.h"

VL_ATTR_COLD void VRandomNumberGenerator___024root___settle__TOP__0(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->random_number = vlSelf->rng__DOT__rand_value;
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___eval_initial(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___eval_settle(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval_settle\n"); );
    // Body
    VRandomNumberGenerator___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___final(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___final\n"); );
}

VL_ATTR_COLD void VRandomNumberGenerator___024root___ctor_var_reset(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    vlSelf->random_number = VL_RAND_RESET_I(6);
    vlSelf->rng__DOT__rand_value = VL_RAND_RESET_I(6);
}
