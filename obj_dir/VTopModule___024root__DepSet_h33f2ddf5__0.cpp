// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopModule.h for the primary calling header

#include "VTopModule__pch.h"
#include "VTopModule___024root.h"

void VTopModule___024root___eval_act(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_act\n"); );
}

void VTopModule___024root___nba_sequent__TOP__0(VTopModule___024root* vlSelf);

void VTopModule___024root___eval_nba(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTopModule___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(IData/*31:0*/ min_value, IData/*31:0*/ max_value, IData/*31:0*/ &generate_random_number__Vfuncrtn);

VL_INLINE_OPT void VTopModule___024root___nba_sequent__TOP__0(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout;
    __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v0;
    __VdlyVal__temp_secretkey__v0 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v1;
    __VdlyVal__temp_secretkey__v1 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v2;
    __VdlyVal__temp_secretkey__v2 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v3;
    __VdlyVal__temp_secretkey__v3 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v4;
    __VdlyVal__temp_secretkey__v4 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v5;
    __VdlyVal__temp_secretkey__v5 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v6;
    __VdlyVal__temp_secretkey__v6 = 0;
    IData/*31:0*/ __VdlyVal__temp_secretkey__v7;
    __VdlyVal__temp_secretkey__v7 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v0;
    __VdlyVal__temp_result__v0 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v1;
    __VdlyVal__temp_result__v1 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v2;
    __VdlyVal__temp_result__v2 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v3;
    __VdlyVal__temp_result__v3 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v4;
    __VdlyVal__temp_result__v4 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v5;
    __VdlyVal__temp_result__v5 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v6;
    __VdlyVal__temp_result__v6 = 0;
    IData/*31:0*/ __VdlyVal__temp_result__v7;
    __VdlyVal__temp_result__v7 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v0;
    __VdlyVal__TopModule__DOT__result__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v1;
    __VdlyVal__TopModule__DOT__result__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v2;
    __VdlyVal__TopModule__DOT__result__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v3;
    __VdlyVal__TopModule__DOT__result__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v4;
    __VdlyVal__TopModule__DOT__result__v4 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v5;
    __VdlyVal__TopModule__DOT__result__v5 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v6;
    __VdlyVal__TopModule__DOT__result__v6 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__result__v7;
    __VdlyVal__TopModule__DOT__result__v7 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v0;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v1;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v2;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v3;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v0;
    __VdlyVal__TopModule__DOT__e_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v1;
    __VdlyVal__TopModule__DOT__e_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v2;
    __VdlyVal__TopModule__DOT__e_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v3;
    __VdlyVal__TopModule__DOT__e_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v4;
    __VdlyVal__TopModule__DOT__e_out__v4 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v5;
    __VdlyVal__TopModule__DOT__e_out__v5 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v6;
    __VdlyVal__TopModule__DOT__e_out__v6 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__e_out__v7;
    __VdlyVal__TopModule__DOT__e_out__v7 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v0;
    __VdlyVal__TopModule__DOT__secretkey__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v1;
    __VdlyVal__TopModule__DOT__secretkey__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v2;
    __VdlyVal__TopModule__DOT__secretkey__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v3;
    __VdlyVal__TopModule__DOT__secretkey__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v4;
    __VdlyVal__TopModule__DOT__secretkey__v4 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v5;
    __VdlyVal__TopModule__DOT__secretkey__v5 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v6;
    __VdlyVal__TopModule__DOT__secretkey__v6 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__secretkey__v7;
    __VdlyVal__TopModule__DOT__secretkey__v7 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added__v0;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added__v1;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added__v2;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT__added__v3;
    __VdlyVal__TopModule__DOT__key_gen__DOT__added__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v0;
    __VdlyVal__TopModule__DOT__A_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v1;
    __VdlyVal__TopModule__DOT__A_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v2;
    __VdlyVal__TopModule__DOT__A_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v3;
    __VdlyVal__TopModule__DOT__A_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v4;
    __VdlyVal__TopModule__DOT__A_out__v4 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v5;
    __VdlyVal__TopModule__DOT__A_out__v5 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v6;
    __VdlyVal__TopModule__DOT__A_out__v6 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v7;
    __VdlyVal__TopModule__DOT__A_out__v7 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v8;
    __VdlyVal__TopModule__DOT__A_out__v8 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v9;
    __VdlyVal__TopModule__DOT__A_out__v9 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v10;
    __VdlyVal__TopModule__DOT__A_out__v10 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v11;
    __VdlyVal__TopModule__DOT__A_out__v11 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v12;
    __VdlyVal__TopModule__DOT__A_out__v12 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v13;
    __VdlyVal__TopModule__DOT__A_out__v13 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v14;
    __VdlyVal__TopModule__DOT__A_out__v14 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__A_out__v15;
    __VdlyVal__TopModule__DOT__A_out__v15 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v1;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v2;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v3;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v1;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v2;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v1;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v2;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v1;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v2;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v3;
    __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v3 = 0;
    CData/*0:0*/ __VdlySet__temp_secretkey__v0;
    __VdlySet__temp_secretkey__v0 = 0;
    CData/*0:0*/ __VdlySet__temp_secretkey__v8;
    __VdlySet__temp_secretkey__v8 = 0;
    CData/*0:0*/ __VdlySet__temp_result__v0;
    __VdlySet__temp_result__v0 = 0;
    CData/*0:0*/ __VdlySet__temp_result__v8;
    __VdlySet__temp_result__v8 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__result__v0;
    __VdlySet__TopModule__DOT__result__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__result__v8;
    __VdlySet__TopModule__DOT__result__v8 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT__added1__v0;
    __VdlySet__TopModule__DOT__key_gen__DOT__added1__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT__added1__v4;
    __VdlySet__TopModule__DOT__key_gen__DOT__added1__v4 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__e_out__v0;
    __VdlySet__TopModule__DOT__e_out__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__e_out__v8;
    __VdlySet__TopModule__DOT__e_out__v8 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__secretkey__v0;
    __VdlySet__TopModule__DOT__secretkey__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__secretkey__v8;
    __VdlySet__TopModule__DOT__secretkey__v8 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT__added__v0;
    __VdlySet__TopModule__DOT__key_gen__DOT__added__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT__added__v4;
    __VdlySet__TopModule__DOT__key_gen__DOT__added__v4 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__A_out__v0;
    __VdlySet__TopModule__DOT__A_out__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__A_out__v16;
    __VdlySet__TopModule__DOT__A_out__v16 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v4;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v4;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v4;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v4;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 0;
    // Body
    __VdlySet__TopModule__DOT__key_gen__DOT__added__v0 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT__added__v4 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT__added1__v0 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT__added1__v4 = 0U;
    __VdlySet__temp_result__v0 = 0U;
    __VdlySet__temp_result__v8 = 0U;
    __VdlySet__TopModule__DOT__result__v0 = 0U;
    __VdlySet__TopModule__DOT__result__v8 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0U;
    __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 0U;
    __VdlySet__temp_secretkey__v0 = 0U;
    __VdlySet__temp_secretkey__v8 = 0U;
    __VdlySet__TopModule__DOT__e_out__v0 = 0U;
    __VdlySet__TopModule__DOT__e_out__v8 = 0U;
    __VdlySet__TopModule__DOT__secretkey__v0 = 0U;
    __VdlySet__TopModule__DOT__secretkey__v8 = 0U;
    __VdlySet__TopModule__DOT__A_out__v0 = 0U;
    __VdlySet__TopModule__DOT__A_out__v16 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->TopModule__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->TopModule__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk3__DOT__i = 4U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            vlSelf->TopModule__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
            vlSelf->TopModule__DOT__unnamedblk3__DOT__i = 2U;
            vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk7__DOT__i = 4U;
            vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk6__DOT__i = 4U;
            __VdlyVal__TopModule__DOT__key_gen__DOT__added__v0 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out0
                   [0U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out1
                   [0U]);
            __VdlySet__TopModule__DOT__key_gen__DOT__added__v0 = 1U;
            __VdlyVal__TopModule__DOT__key_gen__DOT__added__v1 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out0
                   [1U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out1
                   [1U]);
            __VdlyVal__TopModule__DOT__key_gen__DOT__added__v2 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out0
                   [2U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out1
                   [2U]);
            __VdlyVal__TopModule__DOT__key_gen__DOT__added__v3 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out0
                   [3U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out1
                   [3U]);
            __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v0 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out2
                   [0U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out3
                   [0U]);
            __VdlySet__TopModule__DOT__key_gen__DOT__added1__v0 = 1U;
            __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v1 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out2
                   [1U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out3
                   [1U]);
            __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v2 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out2
                   [2U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out3
                   [2U]);
            __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v3 
                = (vlSelf->TopModule__DOT__key_gen__DOT__poly_out2
                   [3U] + vlSelf->TopModule__DOT__key_gen__DOT__poly_out3
                   [3U]);
            __VdlyVal__temp_result__v0 = vlSelf->TopModule__DOT__result
                [0U][0U];
            __VdlySet__temp_result__v0 = 1U;
            __VdlyVal__temp_result__v1 = vlSelf->TopModule__DOT__result
                [0U][1U];
            __VdlyVal__temp_result__v2 = vlSelf->TopModule__DOT__result
                [0U][2U];
            __VdlyVal__temp_result__v3 = vlSelf->TopModule__DOT__result
                [0U][3U];
            __VdlyVal__temp_result__v4 = vlSelf->TopModule__DOT__result
                [1U][0U];
            __VdlyVal__temp_result__v5 = vlSelf->TopModule__DOT__result
                [1U][1U];
            __VdlyVal__temp_result__v6 = vlSelf->TopModule__DOT__result
                [1U][2U];
            __VdlyVal__temp_result__v7 = vlSelf->TopModule__DOT__result
                [1U][3U];
            __VdlyVal__TopModule__DOT__result__v0 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added
                 [0U] + vlSelf->TopModule__DOT__e_out
                 [0U][0U]);
            __VdlySet__TopModule__DOT__result__v0 = 1U;
            __VdlyVal__TopModule__DOT__result__v1 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added1
                 [0U] + vlSelf->TopModule__DOT__e_out
                 [1U][0U]);
            __VdlyVal__TopModule__DOT__result__v2 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added
                 [1U] + vlSelf->TopModule__DOT__e_out
                 [0U][1U]);
            __VdlyVal__TopModule__DOT__result__v3 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added1
                 [1U] + vlSelf->TopModule__DOT__e_out
                 [1U][1U]);
            __VdlyVal__TopModule__DOT__result__v4 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added
                 [2U] + vlSelf->TopModule__DOT__e_out
                 [0U][2U]);
            __VdlyVal__TopModule__DOT__result__v5 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added1
                 [2U] + vlSelf->TopModule__DOT__e_out
                 [1U][2U]);
            __VdlyVal__TopModule__DOT__result__v6 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added
                 [3U] + vlSelf->TopModule__DOT__e_out
                 [0U][3U]);
            __VdlyVal__TopModule__DOT__result__v7 = 
                (vlSelf->TopModule__DOT__key_gen__DOT__added1
                 [3U] + vlSelf->TopModule__DOT__e_out
                 [1U][3U]);
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                [0U];
            __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 1U;
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v1 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                [1U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v2 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                [2U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v3 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result
                [3U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                [0U];
            __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 1U;
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v1 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                [1U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v2 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                [2U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v3 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result
                [3U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                [0U];
            __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 1U;
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v1 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                [1U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v2 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                [2U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v3 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result
                [3U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                [0U];
            __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 1U;
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v1 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                [1U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v2 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                [2U];
            __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v3 
                = vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result
                [3U];
            __VdlyVal__temp_secretkey__v0 = vlSelf->TopModule__DOT__secretkey
                [0U][0U];
            __VdlySet__temp_secretkey__v0 = 1U;
            __VdlyVal__temp_secretkey__v1 = vlSelf->TopModule__DOT__secretkey
                [0U][1U];
            __VdlyVal__temp_secretkey__v2 = vlSelf->TopModule__DOT__secretkey
                [0U][2U];
            __VdlyVal__temp_secretkey__v3 = vlSelf->TopModule__DOT__secretkey
                [0U][3U];
            __VdlyVal__temp_secretkey__v4 = vlSelf->TopModule__DOT__secretkey
                [1U][0U];
            __VdlyVal__temp_secretkey__v5 = vlSelf->TopModule__DOT__secretkey
                [1U][1U];
            __VdlyVal__temp_secretkey__v6 = vlSelf->TopModule__DOT__secretkey
                [1U][2U];
            __VdlyVal__temp_secretkey__v7 = vlSelf->TopModule__DOT__secretkey
                [1U][3U];
            __VdlyVal__TopModule__DOT__e_out__v0 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x18U];
            __VdlySet__TopModule__DOT__e_out__v0 = 1U;
            __VdlyVal__TopModule__DOT__e_out__v1 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x19U];
            __VdlyVal__TopModule__DOT__e_out__v2 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x1aU];
            __VdlyVal__TopModule__DOT__e_out__v3 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x1bU];
            __VdlyVal__TopModule__DOT__e_out__v4 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x1cU];
            __VdlyVal__TopModule__DOT__e_out__v5 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x1dU];
            __VdlyVal__TopModule__DOT__e_out__v6 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x1eU];
            __VdlyVal__TopModule__DOT__e_out__v7 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x1fU];
            __VdlyVal__TopModule__DOT__secretkey__v0 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0U];
            __VdlySet__TopModule__DOT__secretkey__v0 = 1U;
            __VdlyVal__TopModule__DOT__secretkey__v1 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [1U];
            __VdlyVal__TopModule__DOT__secretkey__v2 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [2U];
            __VdlyVal__TopModule__DOT__secretkey__v3 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [3U];
            __VdlyVal__TopModule__DOT__secretkey__v4 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [4U];
            __VdlyVal__TopModule__DOT__secretkey__v5 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [5U];
            __VdlyVal__TopModule__DOT__secretkey__v6 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [6U];
            __VdlyVal__TopModule__DOT__secretkey__v7 
                = vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [7U];
            __VdlyVal__TopModule__DOT__A_out__v0 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [8U];
            __VdlySet__TopModule__DOT__A_out__v0 = 1U;
            __VdlyVal__TopModule__DOT__A_out__v1 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [9U];
            __VdlyVal__TopModule__DOT__A_out__v2 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0xaU];
            __VdlyVal__TopModule__DOT__A_out__v3 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0xbU];
            __VdlyVal__TopModule__DOT__A_out__v4 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0xcU];
            __VdlyVal__TopModule__DOT__A_out__v5 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0xdU];
            __VdlyVal__TopModule__DOT__A_out__v6 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0xeU];
            __VdlyVal__TopModule__DOT__A_out__v7 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0xfU];
            __VdlyVal__TopModule__DOT__A_out__v8 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x10U];
            __VdlyVal__TopModule__DOT__A_out__v9 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x11U];
            __VdlyVal__TopModule__DOT__A_out__v10 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x12U];
            __VdlyVal__TopModule__DOT__A_out__v11 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x13U];
            __VdlyVal__TopModule__DOT__A_out__v12 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x14U];
            __VdlyVal__TopModule__DOT__A_out__v13 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x15U];
            __VdlyVal__TopModule__DOT__A_out__v14 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x16U];
            __VdlyVal__TopModule__DOT__A_out__v15 = 
                vlSelf->TopModule__DOT__key_gen__DOT__rand_num
                [0x17U];
        }
    } else {
        __VdlySet__TopModule__DOT__key_gen__DOT__added__v4 = 1U;
        __VdlySet__TopModule__DOT__key_gen__DOT__added1__v4 = 1U;
        __VdlySet__temp_result__v8 = 1U;
        __VdlySet__TopModule__DOT__result__v8 = 1U;
        __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 1U;
        __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 1U;
        __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 1U;
        __VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 1U;
        __VdlySet__temp_secretkey__v8 = 1U;
        __VdlySet__TopModule__DOT__e_out__v8 = 1U;
        __VdlySet__TopModule__DOT__secretkey__v8 = 1U;
        __VdlySet__TopModule__DOT__A_out__v16 = 1U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VTopModule___024root____Vdpiimwrap_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout);
            vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number 
                = __Vfunc_TopModule__DOT__key_gen__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout;
        }
    } else {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number = 0U;
    }
    if (__VdlySet__temp_result__v0) {
        vlSelf->temp_result[0U][0U] = __VdlyVal__temp_result__v0;
        vlSelf->temp_result[0U][1U] = __VdlyVal__temp_result__v1;
        vlSelf->temp_result[0U][2U] = __VdlyVal__temp_result__v2;
        vlSelf->temp_result[0U][3U] = __VdlyVal__temp_result__v3;
        vlSelf->temp_result[1U][0U] = __VdlyVal__temp_result__v4;
        vlSelf->temp_result[1U][1U] = __VdlyVal__temp_result__v5;
        vlSelf->temp_result[1U][2U] = __VdlyVal__temp_result__v6;
        vlSelf->temp_result[1U][3U] = __VdlyVal__temp_result__v7;
    }
    if (__VdlySet__temp_result__v8) {
        vlSelf->temp_result[0U][0U] = 0U;
        vlSelf->temp_result[0U][1U] = 0U;
        vlSelf->temp_result[0U][2U] = 0U;
        vlSelf->temp_result[0U][3U] = 0U;
        vlSelf->temp_result[1U][0U] = 0U;
        vlSelf->temp_result[1U][1U] = 0U;
        vlSelf->temp_result[1U][2U] = 0U;
        vlSelf->temp_result[1U][3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT__added__v0) {
        vlSelf->TopModule__DOT__key_gen__DOT__added[0U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added__v0;
        vlSelf->TopModule__DOT__key_gen__DOT__added[1U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added__v1;
        vlSelf->TopModule__DOT__key_gen__DOT__added[2U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added__v2;
        vlSelf->TopModule__DOT__key_gen__DOT__added[3U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added__v3;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT__added__v4) {
        vlSelf->TopModule__DOT__key_gen__DOT__added[0U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT__added[1U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT__added[2U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT__added[3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT__added1__v0) {
        vlSelf->TopModule__DOT__key_gen__DOT__added1[0U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v0;
        vlSelf->TopModule__DOT__key_gen__DOT__added1[1U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v1;
        vlSelf->TopModule__DOT__key_gen__DOT__added1[2U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v2;
        vlSelf->TopModule__DOT__key_gen__DOT__added1[3U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT__added1__v3;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT__added1__v4) {
        vlSelf->TopModule__DOT__key_gen__DOT__added1[0U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT__added1[1U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT__added1[2U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT__added1[3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__result__v0) {
        vlSelf->TopModule__DOT__result[0U][0U] = __VdlyVal__TopModule__DOT__result__v0;
        vlSelf->TopModule__DOT__result[1U][0U] = __VdlyVal__TopModule__DOT__result__v1;
        vlSelf->TopModule__DOT__result[0U][1U] = __VdlyVal__TopModule__DOT__result__v2;
        vlSelf->TopModule__DOT__result[1U][1U] = __VdlyVal__TopModule__DOT__result__v3;
        vlSelf->TopModule__DOT__result[0U][2U] = __VdlyVal__TopModule__DOT__result__v4;
        vlSelf->TopModule__DOT__result[1U][2U] = __VdlyVal__TopModule__DOT__result__v5;
        vlSelf->TopModule__DOT__result[0U][3U] = __VdlyVal__TopModule__DOT__result__v6;
        vlSelf->TopModule__DOT__result[1U][3U] = __VdlyVal__TopModule__DOT__result__v7;
    }
    if (__VdlySet__TopModule__DOT__result__v8) {
        vlSelf->TopModule__DOT__result[0U][0U] = 0U;
        vlSelf->TopModule__DOT__result[1U][0U] = 0U;
        vlSelf->TopModule__DOT__result[0U][1U] = 0U;
        vlSelf->TopModule__DOT__result[1U][1U] = 0U;
        vlSelf->TopModule__DOT__result[0U][2U] = 0U;
        vlSelf->TopModule__DOT__result[1U][2U] = 0U;
        vlSelf->TopModule__DOT__result[0U][3U] = 0U;
        vlSelf->TopModule__DOT__result[1U][3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[0U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v0;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[1U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v1;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[2U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v2;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[3U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v3;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out__v4) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[0U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[1U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[2U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[0U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v0;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[1U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v1;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[2U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v2;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[3U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out__v4) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[0U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[1U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[2U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[0U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v0;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[1U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v1;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[2U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v2;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[3U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out__v4) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[0U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[1U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[2U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[0U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v0;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[1U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v1;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[2U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v2;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[3U] 
            = __VdlyVal__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v3;
    }
    if (__VdlySet__TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out__v4) {
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[0U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[1U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[2U] = 0U;
        vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__temp_secretkey__v0) {
        vlSelf->temp_secretkey[0U][0U] = __VdlyVal__temp_secretkey__v0;
        vlSelf->temp_secretkey[0U][1U] = __VdlyVal__temp_secretkey__v1;
        vlSelf->temp_secretkey[0U][2U] = __VdlyVal__temp_secretkey__v2;
        vlSelf->temp_secretkey[0U][3U] = __VdlyVal__temp_secretkey__v3;
        vlSelf->temp_secretkey[1U][0U] = __VdlyVal__temp_secretkey__v4;
        vlSelf->temp_secretkey[1U][1U] = __VdlyVal__temp_secretkey__v5;
        vlSelf->temp_secretkey[1U][2U] = __VdlyVal__temp_secretkey__v6;
        vlSelf->temp_secretkey[1U][3U] = __VdlyVal__temp_secretkey__v7;
    }
    if (__VdlySet__temp_secretkey__v8) {
        vlSelf->temp_secretkey[0U][0U] = 0U;
        vlSelf->temp_secretkey[0U][1U] = 0U;
        vlSelf->temp_secretkey[0U][2U] = 0U;
        vlSelf->temp_secretkey[0U][3U] = 0U;
        vlSelf->temp_secretkey[1U][0U] = 0U;
        vlSelf->temp_secretkey[1U][1U] = 0U;
        vlSelf->temp_secretkey[1U][2U] = 0U;
        vlSelf->temp_secretkey[1U][3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__e_out__v0) {
        vlSelf->TopModule__DOT__e_out[0U][0U] = __VdlyVal__TopModule__DOT__e_out__v0;
        vlSelf->TopModule__DOT__e_out[0U][1U] = __VdlyVal__TopModule__DOT__e_out__v1;
        vlSelf->TopModule__DOT__e_out[0U][2U] = __VdlyVal__TopModule__DOT__e_out__v2;
        vlSelf->TopModule__DOT__e_out[0U][3U] = __VdlyVal__TopModule__DOT__e_out__v3;
        vlSelf->TopModule__DOT__e_out[1U][0U] = __VdlyVal__TopModule__DOT__e_out__v4;
        vlSelf->TopModule__DOT__e_out[1U][1U] = __VdlyVal__TopModule__DOT__e_out__v5;
        vlSelf->TopModule__DOT__e_out[1U][2U] = __VdlyVal__TopModule__DOT__e_out__v6;
        vlSelf->TopModule__DOT__e_out[1U][3U] = __VdlyVal__TopModule__DOT__e_out__v7;
    }
    if (__VdlySet__TopModule__DOT__e_out__v8) {
        vlSelf->TopModule__DOT__e_out[0U][0U] = 0U;
        vlSelf->TopModule__DOT__e_out[0U][1U] = 0U;
        vlSelf->TopModule__DOT__e_out[0U][2U] = 0U;
        vlSelf->TopModule__DOT__e_out[0U][3U] = 0U;
        vlSelf->TopModule__DOT__e_out[1U][0U] = 0U;
        vlSelf->TopModule__DOT__e_out[1U][1U] = 0U;
        vlSelf->TopModule__DOT__e_out[1U][2U] = 0U;
        vlSelf->TopModule__DOT__e_out[1U][3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__secretkey__v0) {
        vlSelf->TopModule__DOT__secretkey[0U][0U] = __VdlyVal__TopModule__DOT__secretkey__v0;
        vlSelf->TopModule__DOT__secretkey[0U][1U] = __VdlyVal__TopModule__DOT__secretkey__v1;
        vlSelf->TopModule__DOT__secretkey[0U][2U] = __VdlyVal__TopModule__DOT__secretkey__v2;
        vlSelf->TopModule__DOT__secretkey[0U][3U] = __VdlyVal__TopModule__DOT__secretkey__v3;
        vlSelf->TopModule__DOT__secretkey[1U][0U] = __VdlyVal__TopModule__DOT__secretkey__v4;
        vlSelf->TopModule__DOT__secretkey[1U][1U] = __VdlyVal__TopModule__DOT__secretkey__v5;
        vlSelf->TopModule__DOT__secretkey[1U][2U] = __VdlyVal__TopModule__DOT__secretkey__v6;
        vlSelf->TopModule__DOT__secretkey[1U][3U] = __VdlyVal__TopModule__DOT__secretkey__v7;
    }
    if (__VdlySet__TopModule__DOT__secretkey__v8) {
        vlSelf->TopModule__DOT__secretkey[0U][0U] = 0U;
        vlSelf->TopModule__DOT__secretkey[0U][1U] = 0U;
        vlSelf->TopModule__DOT__secretkey[0U][2U] = 0U;
        vlSelf->TopModule__DOT__secretkey[0U][3U] = 0U;
        vlSelf->TopModule__DOT__secretkey[1U][0U] = 0U;
        vlSelf->TopModule__DOT__secretkey[1U][1U] = 0U;
        vlSelf->TopModule__DOT__secretkey[1U][2U] = 0U;
        vlSelf->TopModule__DOT__secretkey[1U][3U] = 0U;
    }
    if (__VdlySet__TopModule__DOT__A_out__v0) {
        vlSelf->TopModule__DOT__A_out[0U][0U] = __VdlyVal__TopModule__DOT__A_out__v0;
        vlSelf->TopModule__DOT__A_out[0U][1U] = __VdlyVal__TopModule__DOT__A_out__v1;
        vlSelf->TopModule__DOT__A_out[0U][2U] = __VdlyVal__TopModule__DOT__A_out__v2;
        vlSelf->TopModule__DOT__A_out[0U][3U] = __VdlyVal__TopModule__DOT__A_out__v3;
        vlSelf->TopModule__DOT__A_out[1U][0U] = __VdlyVal__TopModule__DOT__A_out__v4;
        vlSelf->TopModule__DOT__A_out[1U][1U] = __VdlyVal__TopModule__DOT__A_out__v5;
        vlSelf->TopModule__DOT__A_out[1U][2U] = __VdlyVal__TopModule__DOT__A_out__v6;
        vlSelf->TopModule__DOT__A_out[1U][3U] = __VdlyVal__TopModule__DOT__A_out__v7;
        vlSelf->TopModule__DOT__A_out[2U][0U] = __VdlyVal__TopModule__DOT__A_out__v8;
        vlSelf->TopModule__DOT__A_out[2U][1U] = __VdlyVal__TopModule__DOT__A_out__v9;
        vlSelf->TopModule__DOT__A_out[2U][2U] = __VdlyVal__TopModule__DOT__A_out__v10;
        vlSelf->TopModule__DOT__A_out[2U][3U] = __VdlyVal__TopModule__DOT__A_out__v11;
        vlSelf->TopModule__DOT__A_out[3U][0U] = __VdlyVal__TopModule__DOT__A_out__v12;
        vlSelf->TopModule__DOT__A_out[3U][1U] = __VdlyVal__TopModule__DOT__A_out__v13;
        vlSelf->TopModule__DOT__A_out[3U][2U] = __VdlyVal__TopModule__DOT__A_out__v14;
        vlSelf->TopModule__DOT__A_out[3U][3U] = __VdlyVal__TopModule__DOT__A_out__v15;
    }
    if (__VdlySet__TopModule__DOT__A_out__v16) {
        vlSelf->TopModule__DOT__A_out[0U][0U] = 0U;
        vlSelf->TopModule__DOT__A_out[0U][1U] = 0U;
        vlSelf->TopModule__DOT__A_out[0U][2U] = 0U;
        vlSelf->TopModule__DOT__A_out[0U][3U] = 0U;
        vlSelf->TopModule__DOT__A_out[1U][0U] = 0U;
        vlSelf->TopModule__DOT__A_out[1U][1U] = 0U;
        vlSelf->TopModule__DOT__A_out[1U][2U] = 0U;
        vlSelf->TopModule__DOT__A_out[1U][3U] = 0U;
        vlSelf->TopModule__DOT__A_out[2U][0U] = 0U;
        vlSelf->TopModule__DOT__A_out[2U][1U] = 0U;
        vlSelf->TopModule__DOT__A_out[2U][2U] = 0U;
        vlSelf->TopModule__DOT__A_out[2U][3U] = 0U;
        vlSelf->TopModule__DOT__A_out[3U][0U] = 0U;
        vlSelf->TopModule__DOT__A_out[3U][1U] = 0U;
        vlSelf->TopModule__DOT__A_out[3U][2U] = 0U;
        vlSelf->TopModule__DOT__A_out[3U][3U] = 0U;
    }
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
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[0U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[0U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[0U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[0U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[1U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[1U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[1U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[1U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[0U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[0U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[0U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[0U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->TopModule__DOT__secretkey[1U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->TopModule__DOT__secretkey[1U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->TopModule__DOT__secretkey[1U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->TopModule__DOT__secretkey[1U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[0U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[0U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[0U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[0U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[1U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[1U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[1U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[1U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[2U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[2U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[2U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[2U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->TopModule__DOT__A_out[3U][3U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->TopModule__DOT__A_out[3U][2U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->TopModule__DOT__A_out[3U][1U];
    vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->TopModule__DOT__A_out[3U][0U];
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1fU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1eU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1dU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1cU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1bU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x1aU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x19U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x18U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x17U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x16U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x15U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x14U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x13U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x12U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x11U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0x10U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xfU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xeU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xdU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xcU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xbU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0xaU] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[9U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[8U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[7U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[6U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[5U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[4U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[3U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[2U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[1U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
    vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0U] 
        = vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
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

void VTopModule___024root___eval_triggers__act(VTopModule___024root* vlSelf);

bool VTopModule___024root___eval_phase__act(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTopModule___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTopModule___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTopModule___024root___eval_phase__nba(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTopModule___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__nba(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTopModule___024root___dump_triggers__act(VTopModule___024root* vlSelf);
#endif  // VL_DEBUG

void VTopModule___024root___eval(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTopModule___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TopModule.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTopModule___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TopModule.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTopModule___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTopModule___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTopModule___024root___eval_debug_assertions(VTopModule___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
