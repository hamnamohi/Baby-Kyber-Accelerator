// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopModule.h for the primary calling header

#include "VTopModule__pch.h"
#include "VTopModule___024root.h"

VL_ATTR_COLD void VTopModule___024root___eval_static(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTopModule___024root___eval_initial(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void VTopModule___024root___eval_final(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__stl(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTopModule___024root___eval_phase__stl(VTopModule___024root* vlSelf);

VL_ATTR_COLD void VTopModule___024root___eval_settle(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTopModule___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TopModule.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTopModule___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__stl(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTopModule___024root___stl_sequent__TOP__0(VTopModule___024root* vlSelf);

VL_ATTR_COLD void VTopModule___024root___eval_stl(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTopModule___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTopModule___024root___stl_sequent__TOP__0(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[3U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out
        [3U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[2U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out
        [2U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[1U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out
        [1U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[0U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out
        [0U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[3U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out
        [3U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[2U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out
        [2U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[1U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out
        [1U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[0U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out
        [0U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[3U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out
        [3U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[2U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out
        [2U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[1U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out
        [1U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[0U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out
        [0U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[3U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out
        [3U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[2U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out
        [2U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[1U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out
        [1U];
    vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[0U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out
        [0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[0U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[0U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[0U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[0U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[0U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[0U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[0U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[0U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[1U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[1U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[1U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[1U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[1U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[1U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[1U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[1U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[0U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[0U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[0U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[0U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[2U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[2U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[2U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[2U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[1U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[1U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[1U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[1U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[3U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[3U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[3U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[3U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[1U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[2U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[3U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[4U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[5U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[6U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[7U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[8U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[9U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xaU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xbU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xcU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xdU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xeU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xfU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x10U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x11U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x12U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x13U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x14U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x15U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x16U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x17U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x18U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x19U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1aU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1bU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1cU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1dU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1eU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1fU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                         [0U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                         [1U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                         [2U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                         [3U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                         [0U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                         [1U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                         [2U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                         [3U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                         [0U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                         [1U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                         [2U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                         [3U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                         [0U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                         [1U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                         [2U], (IData)(0x11U));
    vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3U] 
        = VL_MODDIVS_III(32, vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                         [3U], (IData)(0x11U));
}

VL_ATTR_COLD void VTopModule___024root___eval_triggers__stl(VTopModule___024root* vlSelf);

VL_ATTR_COLD bool VTopModule___024root___eval_phase__stl(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTopModule___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTopModule___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__act(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VTopModule___024root___dump_triggers__nba(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTopModule___024root___ctor_var_reset(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->enable = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->temp_secretkey[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->temp_result[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TopModule__DOT__secretkey[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TopModule__DOT__result[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TopModule__DOT__A_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->TopModule__DOT__e_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->TopModule__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->TopModule__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->TopModule__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TopModule__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__rand_num[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number = VL_RAND_RESET_I(32);
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
