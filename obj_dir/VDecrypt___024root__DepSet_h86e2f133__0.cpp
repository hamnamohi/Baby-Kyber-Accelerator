// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecrypt.h for the primary calling header

#include "VDecrypt__pch.h"
#include "VDecrypt___024root.h"

void VDecrypt___024root___ico_sequent__TOP__0(VDecrypt___024root* vlSelf);

void VDecrypt___024root___eval_ico(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VDecrypt___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VDecrypt___024root___ico_sequent__TOP__0(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Decrypt__DOT__temp_m_n[0U] = (vlSelf->ciphertext
                                          [1U][0U][0U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [0U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [0U]));
    vlSelf->Decrypt__DOT__temp_m_n[0U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [0U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [0U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [0U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__temp_m_n[1U] = (vlSelf->ciphertext
                                          [1U][0U][1U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [1U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [1U]));
    vlSelf->Decrypt__DOT__temp_m_n[1U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [1U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [1U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [1U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__temp_m_n[2U] = (vlSelf->ciphertext
                                          [1U][0U][2U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [2U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [2U]));
    vlSelf->Decrypt__DOT__temp_m_n[2U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [2U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [2U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [2U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__temp_m_n[3U] = (vlSelf->ciphertext
                                          [1U][0U][3U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [3U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [3U]));
    vlSelf->Decrypt__DOT__temp_m_n[3U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [3U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [3U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [3U], (IData)(0x11U)));
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [0U])) {
        vlSelf->Decrypt__DOT__temp_m_n[0U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [0U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [0U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[0U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [0U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [0U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[0U] = 0U;
    }
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [1U])) {
        vlSelf->Decrypt__DOT__temp_m_n[1U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [1U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [1U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[1U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [1U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [1U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[1U] = 0U;
    }
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [2U])) {
        vlSelf->Decrypt__DOT__temp_m_n[2U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [2U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [2U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[2U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [2U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [2U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[2U] = 0U;
    }
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [3U])) {
        vlSelf->Decrypt__DOT__temp_m_n[3U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [3U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [3U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[3U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [3U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [3U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[3U] = 0U;
    }
    vlSelf->m_b = ((0xcU & (IData)(vlSelf->m_b)) | 
                   (((9U == vlSelf->Decrypt__DOT__temp_m_n
                      [1U]) << 1U) | (9U == vlSelf->Decrypt__DOT__temp_m_n
                                      [0U])));
    vlSelf->m_b = ((3U & (IData)(vlSelf->m_b)) | ((
                                                   (9U 
                                                    == 
                                                    vlSelf->Decrypt__DOT__temp_m_n
                                                    [3U]) 
                                                   << 3U) 
                                                  | ((9U 
                                                      == 
                                                      vlSelf->Decrypt__DOT__temp_m_n
                                                      [2U]) 
                                                     << 2U)));
    vlSelf->decimal_value = (0xfU & (((((8U & (IData)(vlSelf->m_b))
                                         ? 8U : 0U) 
                                       | ((4U & (IData)(vlSelf->m_b))
                                           ? 4U : 0U)) 
                                      | ((2U & (IData)(vlSelf->m_b))
                                          ? 2U : 0U)) 
                                     | ((1U & (IData)(vlSelf->m_b))
                                         ? 1U : 0U)));
    VL_WRITEF_NX("m_b = %b\ndecimal_value = %0#\n",0,
                 4,vlSelf->m_b,4,(IData)(vlSelf->decimal_value));
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->secret_key[0U][3U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->secret_key[0U][2U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->secret_key[0U][1U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->secret_key[0U][0U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->ciphertext[0U][0U][3U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->ciphertext[0U][0U][2U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->ciphertext[0U][0U][1U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->ciphertext[0U][0U][0U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->secret_key[1U][3U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->secret_key[1U][2U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->secret_key[1U][1U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->secret_key[1U][0U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->ciphertext[0U][1U][3U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->ciphertext[0U][1U][2U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->ciphertext[0U][1U][1U];
    vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->ciphertext[0U][1U][0U];
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->Decrypt__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

void VDecrypt___024root___eval_triggers__ico(VDecrypt___024root* vlSelf);

bool VDecrypt___024root___eval_phase__ico(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VDecrypt___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VDecrypt___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VDecrypt___024root___eval_act(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_act\n"); );
}

void VDecrypt___024root___nba_sequent__TOP__0(VDecrypt___024root* vlSelf);

void VDecrypt___024root___eval_nba(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDecrypt___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void VDecrypt___024root___nba_sequent__TOP__0(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out0__v0;
    __VdlyVal__Decrypt__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out0__v1;
    __VdlyVal__Decrypt__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out0__v2;
    __VdlyVal__Decrypt__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out0__v3;
    __VdlyVal__Decrypt__DOT__poly_out0__v3 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out1__v0;
    __VdlyVal__Decrypt__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out1__v1;
    __VdlyVal__Decrypt__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out1__v2;
    __VdlyVal__Decrypt__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__Decrypt__DOT__poly_out1__v3;
    __VdlyVal__Decrypt__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __VdlySet__Decrypt__DOT__poly_out0__v0;
    __VdlySet__Decrypt__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__Decrypt__DOT__poly_out0__v4;
    __VdlySet__Decrypt__DOT__poly_out0__v4 = 0;
    CData/*0:0*/ __VdlySet__Decrypt__DOT__poly_out1__v0;
    __VdlySet__Decrypt__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__Decrypt__DOT__poly_out1__v4;
    __VdlySet__Decrypt__DOT__poly_out1__v4 = 0;
    // Body
    __VdlySet__Decrypt__DOT__poly_out1__v0 = 0U;
    __VdlySet__Decrypt__DOT__poly_out1__v4 = 0U;
    __VdlySet__Decrypt__DOT__poly_out0__v0 = 0U;
    __VdlySet__Decrypt__DOT__poly_out0__v4 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __VdlyVal__Decrypt__DOT__poly_out1__v0 
                = vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                [0U];
            __VdlySet__Decrypt__DOT__poly_out1__v0 = 1U;
            __VdlyVal__Decrypt__DOT__poly_out1__v1 
                = vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                [1U];
            __VdlyVal__Decrypt__DOT__poly_out1__v2 
                = vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                [2U];
            __VdlyVal__Decrypt__DOT__poly_out1__v3 
                = vlSelf->Decrypt__DOT__poly_mult2__DOT__temp_result
                [3U];
            __VdlyVal__Decrypt__DOT__poly_out0__v0 
                = vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                [0U];
            __VdlySet__Decrypt__DOT__poly_out0__v0 = 1U;
            __VdlyVal__Decrypt__DOT__poly_out0__v1 
                = vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                [1U];
            __VdlyVal__Decrypt__DOT__poly_out0__v2 
                = vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                [2U];
            __VdlyVal__Decrypt__DOT__poly_out0__v3 
                = vlSelf->Decrypt__DOT__poly_mult1__DOT__temp_result
                [3U];
        }
    } else {
        __VdlySet__Decrypt__DOT__poly_out1__v4 = 1U;
        __VdlySet__Decrypt__DOT__poly_out0__v4 = 1U;
    }
    if (__VdlySet__Decrypt__DOT__poly_out1__v0) {
        vlSelf->Decrypt__DOT__poly_out1[0U] = __VdlyVal__Decrypt__DOT__poly_out1__v0;
        vlSelf->Decrypt__DOT__poly_out1[1U] = __VdlyVal__Decrypt__DOT__poly_out1__v1;
        vlSelf->Decrypt__DOT__poly_out1[2U] = __VdlyVal__Decrypt__DOT__poly_out1__v2;
        vlSelf->Decrypt__DOT__poly_out1[3U] = __VdlyVal__Decrypt__DOT__poly_out1__v3;
    }
    if (__VdlySet__Decrypt__DOT__poly_out1__v4) {
        vlSelf->Decrypt__DOT__poly_out1[0U] = 0U;
        vlSelf->Decrypt__DOT__poly_out1[1U] = 0U;
        vlSelf->Decrypt__DOT__poly_out1[2U] = 0U;
        vlSelf->Decrypt__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__Decrypt__DOT__poly_out0__v0) {
        vlSelf->Decrypt__DOT__poly_out0[0U] = __VdlyVal__Decrypt__DOT__poly_out0__v0;
        vlSelf->Decrypt__DOT__poly_out0[1U] = __VdlyVal__Decrypt__DOT__poly_out0__v1;
        vlSelf->Decrypt__DOT__poly_out0[2U] = __VdlyVal__Decrypt__DOT__poly_out0__v2;
        vlSelf->Decrypt__DOT__poly_out0[3U] = __VdlyVal__Decrypt__DOT__poly_out0__v3;
    }
    if (__VdlySet__Decrypt__DOT__poly_out0__v4) {
        vlSelf->Decrypt__DOT__poly_out0[0U] = 0U;
        vlSelf->Decrypt__DOT__poly_out0[1U] = 0U;
        vlSelf->Decrypt__DOT__poly_out0[2U] = 0U;
        vlSelf->Decrypt__DOT__poly_out0[3U] = 0U;
    }
    vlSelf->Decrypt__DOT__temp_m_n[0U] = (vlSelf->ciphertext
                                          [1U][0U][0U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [0U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [0U]));
    vlSelf->Decrypt__DOT__temp_m_n[0U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [0U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [0U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [0U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__temp_m_n[1U] = (vlSelf->ciphertext
                                          [1U][0U][1U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [1U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [1U]));
    vlSelf->Decrypt__DOT__temp_m_n[1U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [1U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [1U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [1U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__temp_m_n[2U] = (vlSelf->ciphertext
                                          [1U][0U][2U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [2U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [2U]));
    vlSelf->Decrypt__DOT__temp_m_n[2U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [2U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [2U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [2U], (IData)(0x11U)));
    vlSelf->Decrypt__DOT__temp_m_n[3U] = (vlSelf->ciphertext
                                          [1U][0U][3U] 
                                          - (vlSelf->Decrypt__DOT__poly_out0
                                             [3U] + 
                                             vlSelf->Decrypt__DOT__poly_out1
                                             [3U]));
    vlSelf->Decrypt__DOT__temp_m_n[3U] = (VL_GTS_III(32, 0U, 
                                                     vlSelf->Decrypt__DOT__temp_m_n
                                                     [3U])
                                           ? VL_MODDIVS_III(32, 
                                                            ((IData)(0x11U) 
                                                             + 
                                                             VL_MODDIVS_III(32, 
                                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                                            [3U], (IData)(0x11U))), (IData)(0x11U))
                                           : VL_MODDIVS_III(32, 
                                                            vlSelf->Decrypt__DOT__temp_m_n
                                                            [3U], (IData)(0x11U)));
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [0U])) {
        vlSelf->Decrypt__DOT__temp_m_n[0U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [0U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [0U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[0U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [0U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [0U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[0U] = 0U;
    }
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [1U])) {
        vlSelf->Decrypt__DOT__temp_m_n[1U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [1U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [1U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[1U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [1U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [1U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[1U] = 0U;
    }
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [2U])) {
        vlSelf->Decrypt__DOT__temp_m_n[2U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [2U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [2U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[2U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [2U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [2U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[2U] = 0U;
    }
    if (VL_GTS_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                   [3U])) {
        vlSelf->Decrypt__DOT__temp_m_n[3U] = 0U;
    } else if ((VL_LTES_III(32, 5U, vlSelf->Decrypt__DOT__temp_m_n
                            [3U]) & VL_GTES_III(32, 0xdU, 
                                                vlSelf->Decrypt__DOT__temp_m_n
                                                [3U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[3U] = 9U;
    } else if ((VL_LTS_III(32, 0xdU, vlSelf->Decrypt__DOT__temp_m_n
                           [3U]) & VL_GTES_III(32, 0x11U, 
                                               vlSelf->Decrypt__DOT__temp_m_n
                                               [3U]))) {
        vlSelf->Decrypt__DOT__temp_m_n[3U] = 0U;
    }
    vlSelf->m_b = ((0xcU & (IData)(vlSelf->m_b)) | 
                   (((9U == vlSelf->Decrypt__DOT__temp_m_n
                      [1U]) << 1U) | (9U == vlSelf->Decrypt__DOT__temp_m_n
                                      [0U])));
    vlSelf->m_b = ((3U & (IData)(vlSelf->m_b)) | ((
                                                   (9U 
                                                    == 
                                                    vlSelf->Decrypt__DOT__temp_m_n
                                                    [3U]) 
                                                   << 3U) 
                                                  | ((9U 
                                                      == 
                                                      vlSelf->Decrypt__DOT__temp_m_n
                                                      [2U]) 
                                                     << 2U)));
    vlSelf->decimal_value = (0xfU & (((((8U & (IData)(vlSelf->m_b))
                                         ? 8U : 0U) 
                                       | ((4U & (IData)(vlSelf->m_b))
                                           ? 4U : 0U)) 
                                      | ((2U & (IData)(vlSelf->m_b))
                                          ? 2U : 0U)) 
                                     | ((1U & (IData)(vlSelf->m_b))
                                         ? 1U : 0U)));
    VL_WRITEF_NX("m_b = %b\ndecimal_value = %0#\n",0,
                 4,vlSelf->m_b,4,(IData)(vlSelf->decimal_value));
}

void VDecrypt___024root___eval_triggers__act(VDecrypt___024root* vlSelf);

bool VDecrypt___024root___eval_phase__act(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VDecrypt___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VDecrypt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VDecrypt___024root___eval_phase__nba(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VDecrypt___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecrypt___024root___dump_triggers__ico(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecrypt___024root___dump_triggers__nba(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDecrypt___024root___dump_triggers__act(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG

void VDecrypt___024root___eval(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval\n"); );
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
            VDecrypt___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Decrypt.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VDecrypt___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VDecrypt___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Decrypt.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VDecrypt___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Decrypt.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VDecrypt___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VDecrypt___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VDecrypt___024root___eval_debug_assertions(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
