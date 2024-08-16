// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->KeyGeneration1__DOT__e_[1U][3U] = vlSelf->e_
        [1U][3U];
    vlSelf->KeyGeneration1__DOT__e_[1U][2U] = vlSelf->e_
        [1U][2U];
    vlSelf->KeyGeneration1__DOT__e_[1U][1U] = vlSelf->e_
        [1U][1U];
    vlSelf->KeyGeneration1__DOT__e_[1U][0U] = vlSelf->e_
        [1U][0U];
    vlSelf->KeyGeneration1__DOT__e_[0U][3U] = vlSelf->e_
        [0U][3U];
    vlSelf->KeyGeneration1__DOT__e_[0U][2U] = vlSelf->e_
        [0U][2U];
    vlSelf->KeyGeneration1__DOT__e_[0U][1U] = vlSelf->e_
        [0U][1U];
    vlSelf->KeyGeneration1__DOT__e_[0U][0U] = vlSelf->e_
        [0U][0U];
    vlSelf->KeyGeneration1__DOT__secret_key[1U][3U] 
        = vlSelf->secret_key[1U][3U];
    vlSelf->KeyGeneration1__DOT__secret_key[1U][2U] 
        = vlSelf->secret_key[1U][2U];
    vlSelf->KeyGeneration1__DOT__secret_key[1U][1U] 
        = vlSelf->secret_key[1U][1U];
    vlSelf->KeyGeneration1__DOT__secret_key[1U][0U] 
        = vlSelf->secret_key[1U][0U];
    vlSelf->KeyGeneration1__DOT__secret_key[0U][3U] 
        = vlSelf->secret_key[0U][3U];
    vlSelf->KeyGeneration1__DOT__secret_key[0U][2U] 
        = vlSelf->secret_key[0U][2U];
    vlSelf->KeyGeneration1__DOT__secret_key[0U][1U] 
        = vlSelf->secret_key[0U][1U];
    vlSelf->KeyGeneration1__DOT__secret_key[0U][0U] 
        = vlSelf->secret_key[0U][0U];
    vlSelf->secretkey[1U][3U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][3U];
    vlSelf->secretkey[1U][2U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][2U];
    vlSelf->secretkey[1U][1U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][1U];
    vlSelf->secretkey[1U][0U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][0U];
    vlSelf->secretkey[0U][3U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][3U];
    vlSelf->secretkey[0U][2U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][2U];
    vlSelf->secretkey[0U][1U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][1U];
    vlSelf->secretkey[0U][0U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][0U];
    vlSelf->KeyGeneration1__DOT__clk = vlSelf->clk;
    vlSelf->KeyGeneration1__DOT__rst_n = vlSelf->rst_n;
    vlSelf->KeyGeneration1__DOT__enable = vlSelf->enable;
    vlSelf->KeyGeneration1__DOT__A1[3U][3U] = vlSelf->A1
        [3U][3U];
    vlSelf->KeyGeneration1__DOT__A1[3U][2U] = vlSelf->A1
        [3U][2U];
    vlSelf->KeyGeneration1__DOT__A1[3U][1U] = vlSelf->A1
        [3U][1U];
    vlSelf->KeyGeneration1__DOT__A1[3U][0U] = vlSelf->A1
        [3U][0U];
    vlSelf->KeyGeneration1__DOT__A1[2U][3U] = vlSelf->A1
        [2U][3U];
    vlSelf->KeyGeneration1__DOT__A1[2U][2U] = vlSelf->A1
        [2U][2U];
    vlSelf->KeyGeneration1__DOT__A1[2U][1U] = vlSelf->A1
        [2U][1U];
    vlSelf->KeyGeneration1__DOT__A1[2U][0U] = vlSelf->A1
        [2U][0U];
    vlSelf->KeyGeneration1__DOT__A1[1U][3U] = vlSelf->A1
        [1U][3U];
    vlSelf->KeyGeneration1__DOT__A1[1U][2U] = vlSelf->A1
        [1U][2U];
    vlSelf->KeyGeneration1__DOT__A1[1U][1U] = vlSelf->A1
        [1U][1U];
    vlSelf->KeyGeneration1__DOT__A1[1U][0U] = vlSelf->A1
        [1U][0U];
    vlSelf->KeyGeneration1__DOT__A1[0U][3U] = vlSelf->A1
        [0U][3U];
    vlSelf->KeyGeneration1__DOT__A1[0U][2U] = vlSelf->A1
        [0U][2U];
    vlSelf->KeyGeneration1__DOT__A1[0U][1U] = vlSelf->A1
        [0U][1U];
    vlSelf->KeyGeneration1__DOT__A1[0U][0U] = vlSelf->A1
        [0U][0U];
    vlSelf->combined_output[1U][3U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][3U];
    vlSelf->combined_output[1U][3U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][2U];
    vlSelf->combined_output[1U][3U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][1U];
    vlSelf->combined_output[1U][3U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][0U];
    vlSelf->combined_output[1U][2U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][3U];
    vlSelf->combined_output[1U][2U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][2U];
    vlSelf->combined_output[1U][2U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][1U];
    vlSelf->combined_output[1U][2U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][0U];
    vlSelf->combined_output[1U][1U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][3U];
    vlSelf->combined_output[1U][1U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][2U];
    vlSelf->combined_output[1U][1U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][1U];
    vlSelf->combined_output[1U][1U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][0U];
    vlSelf->combined_output[1U][0U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][3U];
    vlSelf->combined_output[1U][0U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][2U];
    vlSelf->combined_output[1U][0U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][1U];
    vlSelf->combined_output[1U][0U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][0U];
    vlSelf->combined_output[0U][3U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][3U];
    vlSelf->combined_output[0U][3U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][2U];
    vlSelf->combined_output[0U][3U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][1U];
    vlSelf->combined_output[0U][3U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][0U];
    vlSelf->combined_output[0U][2U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][3U];
    vlSelf->combined_output[0U][2U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][2U];
    vlSelf->combined_output[0U][2U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][1U];
    vlSelf->combined_output[0U][2U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][0U];
    vlSelf->combined_output[0U][1U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][3U];
    vlSelf->combined_output[0U][1U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][2U];
    vlSelf->combined_output[0U][1U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][1U];
    vlSelf->combined_output[0U][1U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][0U];
    vlSelf->combined_output[0U][0U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][3U];
    vlSelf->combined_output[0U][0U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][2U];
    vlSelf->combined_output[0U][0U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][1U];
    vlSelf->combined_output[0U][0U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][0U];
    vlSelf->KeyGeneration1__DOT__poly_out0[3U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out0[2U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out0[1U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out0[0U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_out1[3U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out1[2U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out1[1U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out1[0U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_out2[3U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out2[2U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out2[1U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out2[0U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_out3[3U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out3[2U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out3[1U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out3[0U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__clk 
        = vlSelf->KeyGeneration1__DOT__clk;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__clk 
        = vlSelf->KeyGeneration1__DOT__clk;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__clk 
        = vlSelf->KeyGeneration1__DOT__clk;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__clk 
        = vlSelf->KeyGeneration1__DOT__clk;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__rst_n 
        = vlSelf->KeyGeneration1__DOT__rst_n;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__rst_n 
        = vlSelf->KeyGeneration1__DOT__rst_n;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__rst_n 
        = vlSelf->KeyGeneration1__DOT__rst_n;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__rst_n 
        = vlSelf->KeyGeneration1__DOT__rst_n;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__enable 
        = vlSelf->KeyGeneration1__DOT__enable;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__enable 
        = vlSelf->KeyGeneration1__DOT__enable;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__enable 
        = vlSelf->KeyGeneration1__DOT__enable;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__enable 
        = vlSelf->KeyGeneration1__DOT__enable;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__added[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][0U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][0U] = 0U;
    vlSelf->KeyGeneration1__DOT__added[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][1U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][1U] = 0U;
    vlSelf->KeyGeneration1__DOT__added[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][2U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][2U] = 0U;
    vlSelf->KeyGeneration1__DOT__added[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][3U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][3U] = 0U;
    if (vlSelf->enable) {
        vlSelf->KeyGeneration1__DOT__unnamedblk6__DOT__i = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk6__DOT__i = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk6__DOT__i = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk6__DOT__i = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk7__DOT__i = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk7__DOT__i = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk7__DOT__i = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk7__DOT__i = 4U;
        vlSelf->KeyGeneration1__DOT__added[0U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [0U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [0U]);
        vlSelf->KeyGeneration1__DOT__added1[0U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [0U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [0U]);
        vlSelf->KeyGeneration1__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [0U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[0U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [0U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added[1U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [1U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [1U]);
        vlSelf->KeyGeneration1__DOT__added1[1U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [1U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [1U]);
        vlSelf->KeyGeneration1__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [1U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[1U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [1U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added[2U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [2U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [2U]);
        vlSelf->KeyGeneration1__DOT__added1[2U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [2U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [2U]);
        vlSelf->KeyGeneration1__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [2U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[2U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [2U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added[3U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [3U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [3U]);
        vlSelf->KeyGeneration1__DOT__added1[3U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [3U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [3U]);
        vlSelf->KeyGeneration1__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [3U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[3U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [3U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__result[0U][0U] 
            = (vlSelf->KeyGeneration1__DOT__added[0U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [0U]);
        vlSelf->KeyGeneration1__DOT__result[1U][0U] 
            = (vlSelf->KeyGeneration1__DOT__added1[0U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [0U]);
        vlSelf->KeyGeneration1__DOT__result[0U][1U] 
            = (vlSelf->KeyGeneration1__DOT__added[1U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [1U]);
        vlSelf->KeyGeneration1__DOT__result[1U][1U] 
            = (vlSelf->KeyGeneration1__DOT__added1[1U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [1U]);
        vlSelf->KeyGeneration1__DOT__result[0U][2U] 
            = (vlSelf->KeyGeneration1__DOT__added[2U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [2U]);
        vlSelf->KeyGeneration1__DOT__result[1U][2U] 
            = (vlSelf->KeyGeneration1__DOT__added1[2U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [2U]);
        vlSelf->KeyGeneration1__DOT__result[0U][3U] 
            = (vlSelf->KeyGeneration1__DOT__added[3U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [3U]);
        vlSelf->KeyGeneration1__DOT__result[1U][3U] 
            = (vlSelf->KeyGeneration1__DOT__added1[3U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [3U]);
    }
    vlSelf->result[1U][3U] = vlSelf->KeyGeneration1__DOT__result
        [1U][3U];
    vlSelf->result[1U][2U] = vlSelf->KeyGeneration1__DOT__result
        [1U][2U];
    vlSelf->result[1U][1U] = vlSelf->KeyGeneration1__DOT__result
        [1U][1U];
    vlSelf->result[1U][0U] = vlSelf->KeyGeneration1__DOT__result
        [1U][0U];
    vlSelf->result[0U][3U] = vlSelf->KeyGeneration1__DOT__result
        [0U][3U];
    vlSelf->result[0U][2U] = vlSelf->KeyGeneration1__DOT__result
        [0U][2U];
    vlSelf->result[0U][1U] = vlSelf->KeyGeneration1__DOT__result
        [0U][1U];
    vlSelf->result[0U][0U] = vlSelf->KeyGeneration1__DOT__result
        [0U][0U];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v0;
    __VdlyVal__KeyGeneration1__DOT__A__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v1;
    __VdlyVal__KeyGeneration1__DOT__A__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v2;
    __VdlyVal__KeyGeneration1__DOT__A__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v3;
    __VdlyVal__KeyGeneration1__DOT__A__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v4;
    __VdlyVal__KeyGeneration1__DOT__A__v4 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v5;
    __VdlyVal__KeyGeneration1__DOT__A__v5 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v6;
    __VdlyVal__KeyGeneration1__DOT__A__v6 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v7;
    __VdlyVal__KeyGeneration1__DOT__A__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v8;
    __VdlyVal__KeyGeneration1__DOT__A__v8 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v9;
    __VdlyVal__KeyGeneration1__DOT__A__v9 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v10;
    __VdlyVal__KeyGeneration1__DOT__A__v10 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v11;
    __VdlyVal__KeyGeneration1__DOT__A__v11 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v12;
    __VdlyVal__KeyGeneration1__DOT__A__v12 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v13;
    __VdlyVal__KeyGeneration1__DOT__A__v13 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v14;
    __VdlyVal__KeyGeneration1__DOT__A__v14 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__A__v15;
    __VdlyVal__KeyGeneration1__DOT__A__v15 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v0;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v1;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v2;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v3;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v4;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v4 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v5;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v5 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v6;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v6 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__secretkey__v7;
    __VdlyVal__KeyGeneration1__DOT__secretkey__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v0;
    __VdlyVal__KeyGeneration1__DOT__e__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v1;
    __VdlyVal__KeyGeneration1__DOT__e__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v2;
    __VdlyVal__KeyGeneration1__DOT__e__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v3;
    __VdlyVal__KeyGeneration1__DOT__e__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v4;
    __VdlyVal__KeyGeneration1__DOT__e__v4 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v5;
    __VdlyVal__KeyGeneration1__DOT__e__v5 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v6;
    __VdlyVal__KeyGeneration1__DOT__e__v6 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__e__v7;
    __VdlyVal__KeyGeneration1__DOT__e__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v0;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v1;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v2;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v3;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v4;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v4 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v5;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v5 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v6;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v6 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v7;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v8;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v8 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v9;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v9 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v10;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v10 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v11;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v11 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v12;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v12 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v13;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v13 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v14;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v14 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v15;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v15 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v16;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v16 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v17;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v17 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v18;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v18 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v19;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v19 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v20;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v20 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v21;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v21 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v22;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v22 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__combined_output__v23;
    __VdlyVal__KeyGeneration1__DOT__combined_output__v23 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0;
    __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v1;
    __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v2;
    __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v3;
    __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0;
    __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v1;
    __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v2;
    __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v3;
    __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0;
    __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v1;
    __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v2;
    __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v3;
    __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0;
    __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v1;
    __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v2;
    __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v3;
    __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v3 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__A__v0;
    __VdlySet__KeyGeneration1__DOT__A__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__A__v16;
    __VdlySet__KeyGeneration1__DOT__A__v16 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__secretkey__v0;
    __VdlySet__KeyGeneration1__DOT__secretkey__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__secretkey__v8;
    __VdlySet__KeyGeneration1__DOT__secretkey__v8 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__e__v0;
    __VdlySet__KeyGeneration1__DOT__e__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__e__v8;
    __VdlySet__KeyGeneration1__DOT__e__v8 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__combined_output__v0;
    __VdlySet__KeyGeneration1__DOT__combined_output__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__combined_output__v24;
    __VdlySet__KeyGeneration1__DOT__combined_output__v24 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0;
    __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v4;
    __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0;
    __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v4;
    __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0;
    __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v4;
    __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0;
    __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v4;
    __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v4 = 0;
    // Body
    __VdlySet__KeyGeneration1__DOT__e__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__e__v8 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration1__DOT__secretkey__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__secretkey__v8 = 0U;
    __VdlySet__KeyGeneration1__DOT__A__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__A__v16 = 0U;
    __VdlySet__KeyGeneration1__DOT__combined_output__v0 = 0U;
    __VdlySet__KeyGeneration1__DOT__combined_output__v24 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__i = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__i = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__i = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk3__DOT__i = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__i = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__i = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 4U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 1U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 2U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 3U;
        vlSelf->KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 4U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__i = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__i = 2U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__i = 3U;
            vlSelf->KeyGeneration1__DOT__unnamedblk11__DOT__i = 4U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__i = 1U;
            vlSelf->KeyGeneration1__DOT__unnamedblk13__DOT__i = 2U;
            __VdlyVal__KeyGeneration1__DOT__e__v0 = 
                vlSelf->e_[0U][0U];
            __VdlySet__KeyGeneration1__DOT__e__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__e__v1 = 
                vlSelf->e_[0U][1U];
            __VdlyVal__KeyGeneration1__DOT__e__v2 = 
                vlSelf->e_[0U][2U];
            __VdlyVal__KeyGeneration1__DOT__e__v3 = 
                vlSelf->e_[0U][3U];
            __VdlyVal__KeyGeneration1__DOT__e__v4 = 
                vlSelf->e_[1U][0U];
            __VdlyVal__KeyGeneration1__DOT__e__v5 = 
                vlSelf->e_[1U][1U];
            __VdlyVal__KeyGeneration1__DOT__e__v6 = 
                vlSelf->e_[1U][2U];
            __VdlyVal__KeyGeneration1__DOT__e__v7 = 
                vlSelf->e_[1U][3U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0 
                = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v1 
                = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v2 
                = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v3 
                = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0 
                = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v1 
                = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v2 
                = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v3 
                = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0 
                = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v1 
                = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v2 
                = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v3 
                = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0 
                = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v1 
                = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v2 
                = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v3 
                = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v0 
                = vlSelf->secret_key[0U][0U];
            __VdlySet__KeyGeneration1__DOT__secretkey__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__secretkey__v1 
                = vlSelf->secret_key[0U][1U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v2 
                = vlSelf->secret_key[0U][2U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v3 
                = vlSelf->secret_key[0U][3U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v4 
                = vlSelf->secret_key[1U][0U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v5 
                = vlSelf->secret_key[1U][1U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v6 
                = vlSelf->secret_key[1U][2U];
            __VdlyVal__KeyGeneration1__DOT__secretkey__v7 
                = vlSelf->secret_key[1U][3U];
            __VdlyVal__KeyGeneration1__DOT__A__v0 = 
                vlSelf->A1[0U][0U];
            __VdlySet__KeyGeneration1__DOT__A__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__A__v1 = 
                vlSelf->A1[0U][1U];
            __VdlyVal__KeyGeneration1__DOT__A__v2 = 
                vlSelf->A1[0U][2U];
            __VdlyVal__KeyGeneration1__DOT__A__v3 = 
                vlSelf->A1[0U][3U];
            __VdlyVal__KeyGeneration1__DOT__A__v4 = 
                vlSelf->A1[1U][0U];
            __VdlyVal__KeyGeneration1__DOT__A__v5 = 
                vlSelf->A1[1U][1U];
            __VdlyVal__KeyGeneration1__DOT__A__v6 = 
                vlSelf->A1[1U][2U];
            __VdlyVal__KeyGeneration1__DOT__A__v7 = 
                vlSelf->A1[1U][3U];
            __VdlyVal__KeyGeneration1__DOT__A__v8 = 
                vlSelf->A1[2U][0U];
            __VdlyVal__KeyGeneration1__DOT__A__v9 = 
                vlSelf->A1[2U][1U];
            __VdlyVal__KeyGeneration1__DOT__A__v10 
                = vlSelf->A1[2U][2U];
            __VdlyVal__KeyGeneration1__DOT__A__v11 
                = vlSelf->A1[2U][3U];
            __VdlyVal__KeyGeneration1__DOT__A__v12 
                = vlSelf->A1[3U][0U];
            __VdlyVal__KeyGeneration1__DOT__A__v13 
                = vlSelf->A1[3U][1U];
            __VdlyVal__KeyGeneration1__DOT__A__v14 
                = vlSelf->A1[3U][2U];
            __VdlyVal__KeyGeneration1__DOT__A__v15 
                = vlSelf->A1[3U][3U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v0 
                = vlSelf->KeyGeneration1__DOT__A[0U]
                [0U];
            __VdlySet__KeyGeneration1__DOT__combined_output__v0 = 1U;
            __VdlyVal__KeyGeneration1__DOT__combined_output__v1 
                = vlSelf->KeyGeneration1__DOT__A[0U]
                [1U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v2 
                = vlSelf->KeyGeneration1__DOT__A[0U]
                [2U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v3 
                = vlSelf->KeyGeneration1__DOT__A[0U]
                [3U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v4 
                = vlSelf->KeyGeneration1__DOT__A[1U]
                [0U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v5 
                = vlSelf->KeyGeneration1__DOT__A[1U]
                [1U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v6 
                = vlSelf->KeyGeneration1__DOT__A[1U]
                [2U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v7 
                = vlSelf->KeyGeneration1__DOT__A[1U]
                [3U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v8 
                = vlSelf->KeyGeneration1__DOT__A[2U]
                [0U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v9 
                = vlSelf->KeyGeneration1__DOT__A[2U]
                [1U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v10 
                = vlSelf->KeyGeneration1__DOT__A[2U]
                [2U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v11 
                = vlSelf->KeyGeneration1__DOT__A[2U]
                [3U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v12 
                = vlSelf->KeyGeneration1__DOT__A[3U]
                [0U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v13 
                = vlSelf->KeyGeneration1__DOT__A[3U]
                [1U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v14 
                = vlSelf->KeyGeneration1__DOT__A[3U]
                [2U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v15 
                = vlSelf->KeyGeneration1__DOT__A[3U]
                [3U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v16 
                = vlSelf->KeyGeneration1__DOT__result
                [0U][0U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v17 
                = vlSelf->KeyGeneration1__DOT__result
                [0U][1U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v18 
                = vlSelf->KeyGeneration1__DOT__result
                [0U][2U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v19 
                = vlSelf->KeyGeneration1__DOT__result
                [0U][3U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v20 
                = vlSelf->KeyGeneration1__DOT__result
                [1U][0U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v21 
                = vlSelf->KeyGeneration1__DOT__result
                [1U][1U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v22 
                = vlSelf->KeyGeneration1__DOT__result
                [1U][2U];
            __VdlyVal__KeyGeneration1__DOT__combined_output__v23 
                = vlSelf->KeyGeneration1__DOT__result
                [1U][3U];
            vlSelf->KeyGeneration1__DOT__stop_random_generation = 1U;
        }
    } else {
        __VdlySet__KeyGeneration1__DOT__e__v8 = 1U;
        __VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration1__DOT__secretkey__v8 = 1U;
        __VdlySet__KeyGeneration1__DOT__A__v16 = 1U;
        __VdlySet__KeyGeneration1__DOT__combined_output__v24 = 1U;
        vlSelf->KeyGeneration1__DOT__stop_random_generation = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__e__v0) {
        vlSelf->KeyGeneration1__DOT__e[0U][0U] = __VdlyVal__KeyGeneration1__DOT__e__v0;
        vlSelf->KeyGeneration1__DOT__e[0U][1U] = __VdlyVal__KeyGeneration1__DOT__e__v1;
        vlSelf->KeyGeneration1__DOT__e[0U][2U] = __VdlyVal__KeyGeneration1__DOT__e__v2;
        vlSelf->KeyGeneration1__DOT__e[0U][3U] = __VdlyVal__KeyGeneration1__DOT__e__v3;
        vlSelf->KeyGeneration1__DOT__e[1U][0U] = __VdlyVal__KeyGeneration1__DOT__e__v4;
        vlSelf->KeyGeneration1__DOT__e[1U][1U] = __VdlyVal__KeyGeneration1__DOT__e__v5;
        vlSelf->KeyGeneration1__DOT__e[1U][2U] = __VdlyVal__KeyGeneration1__DOT__e__v6;
        vlSelf->KeyGeneration1__DOT__e[1U][3U] = __VdlyVal__KeyGeneration1__DOT__e__v7;
    }
    if (__VdlySet__KeyGeneration1__DOT__e__v8) {
        vlSelf->KeyGeneration1__DOT__e[0U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[0U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[0U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[0U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[1U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[1U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[1U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__e[1U][3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0) {
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v0;
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v1;
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v2;
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out__v4) {
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0) {
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v0;
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v1;
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v2;
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out__v4) {
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0) {
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v0;
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v1;
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v2;
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out__v4) {
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0) {
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v0;
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v1;
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v2;
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out__v4) {
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__secretkey__v0) {
        vlSelf->KeyGeneration1__DOT__secretkey[0U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v0;
        vlSelf->KeyGeneration1__DOT__secretkey[0U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v1;
        vlSelf->KeyGeneration1__DOT__secretkey[0U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v2;
        vlSelf->KeyGeneration1__DOT__secretkey[0U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v3;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v4;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v5;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v6;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__secretkey__v7;
    }
    if (__VdlySet__KeyGeneration1__DOT__secretkey__v8) {
        vlSelf->KeyGeneration1__DOT__secretkey[0U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[0U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[0U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[0U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__secretkey[1U][3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__A__v0) {
        vlSelf->KeyGeneration1__DOT__A[0U][0U] = __VdlyVal__KeyGeneration1__DOT__A__v0;
        vlSelf->KeyGeneration1__DOT__A[0U][1U] = __VdlyVal__KeyGeneration1__DOT__A__v1;
        vlSelf->KeyGeneration1__DOT__A[0U][2U] = __VdlyVal__KeyGeneration1__DOT__A__v2;
        vlSelf->KeyGeneration1__DOT__A[0U][3U] = __VdlyVal__KeyGeneration1__DOT__A__v3;
        vlSelf->KeyGeneration1__DOT__A[1U][0U] = __VdlyVal__KeyGeneration1__DOT__A__v4;
        vlSelf->KeyGeneration1__DOT__A[1U][1U] = __VdlyVal__KeyGeneration1__DOT__A__v5;
        vlSelf->KeyGeneration1__DOT__A[1U][2U] = __VdlyVal__KeyGeneration1__DOT__A__v6;
        vlSelf->KeyGeneration1__DOT__A[1U][3U] = __VdlyVal__KeyGeneration1__DOT__A__v7;
        vlSelf->KeyGeneration1__DOT__A[2U][0U] = __VdlyVal__KeyGeneration1__DOT__A__v8;
        vlSelf->KeyGeneration1__DOT__A[2U][1U] = __VdlyVal__KeyGeneration1__DOT__A__v9;
        vlSelf->KeyGeneration1__DOT__A[2U][2U] = __VdlyVal__KeyGeneration1__DOT__A__v10;
        vlSelf->KeyGeneration1__DOT__A[2U][3U] = __VdlyVal__KeyGeneration1__DOT__A__v11;
        vlSelf->KeyGeneration1__DOT__A[3U][0U] = __VdlyVal__KeyGeneration1__DOT__A__v12;
        vlSelf->KeyGeneration1__DOT__A[3U][1U] = __VdlyVal__KeyGeneration1__DOT__A__v13;
        vlSelf->KeyGeneration1__DOT__A[3U][2U] = __VdlyVal__KeyGeneration1__DOT__A__v14;
        vlSelf->KeyGeneration1__DOT__A[3U][3U] = __VdlyVal__KeyGeneration1__DOT__A__v15;
    }
    if (__VdlySet__KeyGeneration1__DOT__A__v16) {
        vlSelf->KeyGeneration1__DOT__A[0U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[0U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[0U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[0U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[1U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[1U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[1U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[1U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[2U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[2U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[2U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[2U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[3U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[3U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[3U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__A[3U][3U] = 0U;
    }
    if (__VdlySet__KeyGeneration1__DOT__combined_output__v0) {
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v0;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v1;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v2;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v3;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v4;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v5;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v6;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v7;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v8;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v9;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v10;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v11;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v12;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v13;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v14;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v15;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v16;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v17;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v18;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v19;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][0U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v20;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][1U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v21;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][2U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v22;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][3U] 
            = __VdlyVal__KeyGeneration1__DOT__combined_output__v23;
    }
    if (__VdlySet__KeyGeneration1__DOT__combined_output__v24) {
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][0U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][1U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][2U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[0U][3U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][0U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][1U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][2U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][2U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][2U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][2U][3U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][3U][0U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][3U][1U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][3U][2U] = 0U;
        vlSelf->KeyGeneration1__DOT__combined_output[1U][3U][3U] = 0U;
    }
    vlSelf->KeyGeneration1__DOT__poly_out3[3U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out3[2U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out3[1U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out3[0U] = vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_out2[3U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out2[2U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out2[1U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out2[0U] = vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_out1[3U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out1[2U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out1[1U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out1[0U] = vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_out0[3U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_out0[2U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_out0[1U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_out0[0U] = vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out
        [0U];
    vlSelf->secretkey[1U][3U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][3U];
    vlSelf->secretkey[1U][2U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][2U];
    vlSelf->secretkey[1U][1U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][1U];
    vlSelf->secretkey[1U][0U] = vlSelf->KeyGeneration1__DOT__secretkey
        [1U][0U];
    vlSelf->secretkey[0U][3U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][3U];
    vlSelf->secretkey[0U][2U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][2U];
    vlSelf->secretkey[0U][1U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][1U];
    vlSelf->secretkey[0U][0U] = vlSelf->KeyGeneration1__DOT__secretkey
        [0U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[0U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT__secretkey[1U]
        [0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[0U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[1U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[2U][0U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][3U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][2U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][1U];
    vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT__A[3U][0U];
    vlSelf->combined_output[1U][3U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][3U];
    vlSelf->combined_output[1U][3U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][2U];
    vlSelf->combined_output[1U][3U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][1U];
    vlSelf->combined_output[1U][3U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][3U][0U];
    vlSelf->combined_output[1U][2U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][3U];
    vlSelf->combined_output[1U][2U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][2U];
    vlSelf->combined_output[1U][2U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][1U];
    vlSelf->combined_output[1U][2U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][2U][0U];
    vlSelf->combined_output[1U][1U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][3U];
    vlSelf->combined_output[1U][1U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][2U];
    vlSelf->combined_output[1U][1U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][1U];
    vlSelf->combined_output[1U][1U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][1U][0U];
    vlSelf->combined_output[1U][0U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][3U];
    vlSelf->combined_output[1U][0U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][2U];
    vlSelf->combined_output[1U][0U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][1U];
    vlSelf->combined_output[1U][0U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [1U][0U][0U];
    vlSelf->combined_output[0U][3U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][3U];
    vlSelf->combined_output[0U][3U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][2U];
    vlSelf->combined_output[0U][3U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][1U];
    vlSelf->combined_output[0U][3U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][3U][0U];
    vlSelf->combined_output[0U][2U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][3U];
    vlSelf->combined_output[0U][2U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][2U];
    vlSelf->combined_output[0U][2U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][1U];
    vlSelf->combined_output[0U][2U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][2U][0U];
    vlSelf->combined_output[0U][1U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][3U];
    vlSelf->combined_output[0U][1U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][2U];
    vlSelf->combined_output[0U][1U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][1U];
    vlSelf->combined_output[0U][1U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][1U][0U];
    vlSelf->combined_output[0U][0U][3U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][3U];
    vlSelf->combined_output[0U][0U][2U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][2U];
    vlSelf->combined_output[0U][0U][1U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][1U];
    vlSelf->combined_output[0U][0U][0U] = vlSelf->KeyGeneration1__DOT__combined_output
        [0U][0U][0U];
    vlSelf->KeyGeneration1__DOT__added[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][0U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][0U] = 0U;
    vlSelf->KeyGeneration1__DOT__added[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][1U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][1U] = 0U;
    vlSelf->KeyGeneration1__DOT__added[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][2U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][2U] = 0U;
    vlSelf->KeyGeneration1__DOT__added[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__added1[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[0U][3U] = 0U;
    vlSelf->KeyGeneration1__DOT__result[1U][3U] = 0U;
    if (vlSelf->enable) {
        vlSelf->KeyGeneration1__DOT__added[0U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [0U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [0U]);
        vlSelf->KeyGeneration1__DOT__added1[0U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [0U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [0U]);
        vlSelf->KeyGeneration1__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [0U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[0U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [0U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added[1U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [1U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [1U]);
        vlSelf->KeyGeneration1__DOT__added1[1U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [1U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [1U]);
        vlSelf->KeyGeneration1__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [1U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[1U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [1U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added[2U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [2U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [2U]);
        vlSelf->KeyGeneration1__DOT__added1[2U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [2U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [2U]);
        vlSelf->KeyGeneration1__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [2U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[2U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [2U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added[3U] = (vlSelf->KeyGeneration1__DOT__poly_out0
                                                  [3U] 
                                                  + 
                                                  vlSelf->KeyGeneration1__DOT__poly_out1
                                                  [3U]);
        vlSelf->KeyGeneration1__DOT__added1[3U] = (
                                                   vlSelf->KeyGeneration1__DOT__poly_out2
                                                   [3U] 
                                                   + 
                                                   vlSelf->KeyGeneration1__DOT__poly_out3
                                                   [3U]);
        vlSelf->KeyGeneration1__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration1__DOT__added
                                                             [3U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__added
                                                                 [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__added1[3U] = (
                                                   VL_GTS_III(32, 0U, 
                                                              vlSelf->KeyGeneration1__DOT__added1
                                                              [3U])
                                                    ? 
                                                   VL_MODDIVS_III(32, 
                                                                  ((IData)(0x11U) 
                                                                   + 
                                                                   VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration1__DOT__added1
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                    : 
                                                   VL_MODDIVS_III(32, 
                                                                  vlSelf->KeyGeneration1__DOT__added1
                                                                  [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration1__DOT__result[0U][0U] 
            = (vlSelf->KeyGeneration1__DOT__added[0U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [0U]);
        vlSelf->KeyGeneration1__DOT__result[1U][0U] 
            = (vlSelf->KeyGeneration1__DOT__added1[0U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [0U]);
        vlSelf->KeyGeneration1__DOT__result[0U][1U] 
            = (vlSelf->KeyGeneration1__DOT__added[1U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [1U]);
        vlSelf->KeyGeneration1__DOT__result[1U][1U] 
            = (vlSelf->KeyGeneration1__DOT__added1[1U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [1U]);
        vlSelf->KeyGeneration1__DOT__result[0U][2U] 
            = (vlSelf->KeyGeneration1__DOT__added[2U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [2U]);
        vlSelf->KeyGeneration1__DOT__result[1U][2U] 
            = (vlSelf->KeyGeneration1__DOT__added1[2U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [2U]);
        vlSelf->KeyGeneration1__DOT__result[0U][3U] 
            = (vlSelf->KeyGeneration1__DOT__added[3U] 
               + vlSelf->KeyGeneration1__DOT__e[0U]
               [3U]);
        vlSelf->KeyGeneration1__DOT__result[1U][3U] 
            = (vlSelf->KeyGeneration1__DOT__added1[3U] 
               + vlSelf->KeyGeneration1__DOT__e[1U]
               [3U]);
    }
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial2[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult0__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult1__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult2__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1
        [0U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[3U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [3U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[2U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [2U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[1U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [1U];
    vlSelf->KeyGeneration1__DOT__poly_mult3__DOT__polynomial1[0U] 
        = vlSelf->KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1
        [0U];
    vlSelf->result[1U][3U] = vlSelf->KeyGeneration1__DOT__result
        [1U][3U];
    vlSelf->result[1U][2U] = vlSelf->KeyGeneration1__DOT__result
        [1U][2U];
    vlSelf->result[1U][1U] = vlSelf->KeyGeneration1__DOT__result
        [1U][1U];
    vlSelf->result[1U][0U] = vlSelf->KeyGeneration1__DOT__result
        [1U][0U];
    vlSelf->result[0U][3U] = vlSelf->KeyGeneration1__DOT__result
        [0U][3U];
    vlSelf->result[0U][2U] = vlSelf->KeyGeneration1__DOT__result
        [0U][2U];
    vlSelf->result[0U][1U] = vlSelf->KeyGeneration1__DOT__result
        [0U][1U];
    vlSelf->result[0U][0U] = vlSelf->KeyGeneration1__DOT__result
        [0U][0U];
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
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
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/hamna/cocotb_test/Baby-Kyber-Accelerator/KeyGeneration.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/hamna/cocotb_test/Baby-Kyber-Accelerator/KeyGeneration.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/hamna/cocotb_test/Baby-Kyber-Accelerator/KeyGeneration.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
