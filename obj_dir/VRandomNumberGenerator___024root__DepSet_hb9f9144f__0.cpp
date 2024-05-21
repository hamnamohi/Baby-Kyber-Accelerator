// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRandomNumberGenerator.h for the primary calling header

#include "verilated.h"

#include "VRandomNumberGenerator___024root.h"

VL_INLINE_OPT void VRandomNumberGenerator___024root___sequent__TOP__0(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            vlSelf->rng__DOT__rand_value = (0x3fU & 
                                            VL_URANDOM_RANGE_I(0xffffffefU, 0x11U));
        }
    } else {
        vlSelf->rng__DOT__rand_value = 0U;
    }
    vlSelf->random_number = vlSelf->rng__DOT__rand_value;
}

void VRandomNumberGenerator___024root___eval(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        VRandomNumberGenerator___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

#ifdef VL_DEBUG
void VRandomNumberGenerator___024root___eval_debug_assertions(VRandomNumberGenerator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
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
