// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPolynomialMatrixMultiplication.h for the primary calling header

#include "VPolynomialMatrixMultiplication__pch.h"
#include "VPolynomialMatrixMultiplication___024root.h"

void VPolynomialMatrixMultiplication___024root___ico_sequent__TOP__0(VPolynomialMatrixMultiplication___024root* vlSelf);

void VPolynomialMatrixMultiplication___024root___eval_ico(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VPolynomialMatrixMultiplication___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VPolynomialMatrixMultiplication___024root___ico_sequent__TOP__0(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0U] = 0U;
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1U] = 0U;
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2U] = 0U;
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3U] = 0U;
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->polynomial1
                              [0U], vlSelf->polynomial2
                              [0U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->polynomial1
                              [0U], vlSelf->polynomial2
                              [1U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->polynomial1
                              [0U], vlSelf->polynomial2
                              [2U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->polynomial1
                              [0U], vlSelf->polynomial2
                              [3U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->polynomial1
                              [1U], vlSelf->polynomial2
                              [0U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->polynomial1
                              [1U], vlSelf->polynomial2
                              [1U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->polynomial1
                              [1U], vlSelf->polynomial2
                              [2U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->polynomial1
                              [2U], vlSelf->polynomial2
                              [0U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->polynomial1
                              [2U], vlSelf->polynomial2
                              [1U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->polynomial1
                              [3U], vlSelf->polynomial2
                              [0U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->polynomial1
                              [3U], vlSelf->polynomial2
                              [1U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->polynomial1
                              [2U], vlSelf->polynomial2
                              [2U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->polynomial1
                              [3U], vlSelf->polynomial2
                              [2U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->polynomial1
                              [1U], vlSelf->polynomial2
                              [3U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->polynomial1
                              [2U], vlSelf->polynomial2
                              [3U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2U] 
        = (vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->polynomial1
                              [3U], vlSelf->polynomial2
                              [3U]));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->PolynomialMatrixMultiplication__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

void VPolynomialMatrixMultiplication___024root___eval_triggers__ico(VPolynomialMatrixMultiplication___024root* vlSelf);

bool VPolynomialMatrixMultiplication___024root___eval_phase__ico(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VPolynomialMatrixMultiplication___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VPolynomialMatrixMultiplication___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VPolynomialMatrixMultiplication___024root___eval_act(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_act\n"); );
}

void VPolynomialMatrixMultiplication___024root___nba_sequent__TOP__0(VPolynomialMatrixMultiplication___024root* vlSelf);

void VPolynomialMatrixMultiplication___024root___eval_nba(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPolynomialMatrixMultiplication___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VPolynomialMatrixMultiplication___024root___nba_sequent__TOP__0(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__polynomial_out__v0;
    __VdlyVal__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__polynomial_out__v1;
    __VdlyVal__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__polynomial_out__v2;
    __VdlyVal__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__polynomial_out__v3;
    __VdlyVal__polynomial_out__v3 = 0;
    CData/*0:0*/ __VdlySet__polynomial_out__v0;
    __VdlySet__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__polynomial_out__v4;
    __VdlySet__polynomial_out__v4 = 0;
    // Body
    __VdlySet__polynomial_out__v0 = 0U;
    __VdlySet__polynomial_out__v4 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __VdlyVal__polynomial_out__v0 = vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                [0U];
            __VdlySet__polynomial_out__v0 = 1U;
            __VdlyVal__polynomial_out__v1 = vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                [1U];
            __VdlyVal__polynomial_out__v2 = vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                [2U];
            __VdlyVal__polynomial_out__v3 = vlSelf->PolynomialMatrixMultiplication__DOT__temp_result
                [3U];
        }
    } else {
        __VdlySet__polynomial_out__v4 = 1U;
    }
    if (__VdlySet__polynomial_out__v0) {
        vlSelf->polynomial_out[0U] = __VdlyVal__polynomial_out__v0;
        vlSelf->polynomial_out[1U] = __VdlyVal__polynomial_out__v1;
        vlSelf->polynomial_out[2U] = __VdlyVal__polynomial_out__v2;
        vlSelf->polynomial_out[3U] = __VdlyVal__polynomial_out__v3;
    }
    if (__VdlySet__polynomial_out__v4) {
        vlSelf->polynomial_out[0U] = 0U;
        vlSelf->polynomial_out[1U] = 0U;
        vlSelf->polynomial_out[2U] = 0U;
        vlSelf->polynomial_out[3U] = 0U;
    }
}

void VPolynomialMatrixMultiplication___024root___eval_triggers__act(VPolynomialMatrixMultiplication___024root* vlSelf);

bool VPolynomialMatrixMultiplication___024root___eval_phase__act(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VPolynomialMatrixMultiplication___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VPolynomialMatrixMultiplication___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VPolynomialMatrixMultiplication___024root___eval_phase__nba(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VPolynomialMatrixMultiplication___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root___dump_triggers__ico(VPolynomialMatrixMultiplication___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root___dump_triggers__nba(VPolynomialMatrixMultiplication___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root___dump_triggers__act(VPolynomialMatrixMultiplication___024root* vlSelf);
#endif  // VL_DEBUG

void VPolynomialMatrixMultiplication___024root___eval(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval\n"); );
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
            VPolynomialMatrixMultiplication___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("PolynomialMatrixMultiplication.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VPolynomialMatrixMultiplication___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VPolynomialMatrixMultiplication___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("PolynomialMatrixMultiplication.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VPolynomialMatrixMultiplication___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("PolynomialMatrixMultiplication.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VPolynomialMatrixMultiplication___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VPolynomialMatrixMultiplication___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VPolynomialMatrixMultiplication___024root___eval_debug_assertions(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
