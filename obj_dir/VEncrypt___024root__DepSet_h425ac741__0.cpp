// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncrypt.h for the primary calling header

#include "VEncrypt__pch.h"
#include "VEncrypt___024root.h"

void VEncrypt___024root___ico_sequent__TOP__0(VEncrypt___024root* vlSelf);

void VEncrypt___024root___eval_ico(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VEncrypt___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VEncrypt___024root___ico_sequent__TOP__0(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable 
        = ((~ (IData)(vlSelf->Encrypt__DOT__stop_random_generation)) 
           & (IData)(vlSelf->enable));
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelf->combined_output[1U][0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelf->combined_output[1U][0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelf->combined_output[1U][0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelf->combined_output[1U][0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelf->combined_output[1U][1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelf->combined_output[1U][1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelf->combined_output[1U][1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelf->combined_output[1U][1U][0U];
    vlSelf->Encrypt__DOT__dec_to_bit__DOT__bit_list 
        = (0xffU & vlSelf->message);
    vlSelf->Encrypt__DOT__coefficients = (0xeU & (IData)(vlSelf->Encrypt__DOT__coefficients));
    vlSelf->Encrypt__DOT__coefficients = ((0xeU & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (1U & ((IData)(vlSelf->Encrypt__DOT__coefficients) 
                                                   + (IData)(vlSelf->Encrypt__DOT__dec_to_bit__DOT__bit_list))));
    vlSelf->Encrypt__DOT__coefficients = ((0xeU & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (1U & (IData)(vlSelf->Encrypt__DOT__coefficients)));
    vlSelf->Encrypt__DOT__coefficients = (0xdU & (IData)(vlSelf->Encrypt__DOT__coefficients));
    vlSelf->Encrypt__DOT__coefficients = ((0xdU & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (2U & (
                                                   (((IData)(vlSelf->Encrypt__DOT__coefficients) 
                                                     >> 1U) 
                                                    + 
                                                    ((IData)(vlSelf->Encrypt__DOT__dec_to_bit__DOT__bit_list) 
                                                     >> 2U)) 
                                                   << 1U)));
    vlSelf->Encrypt__DOT__coefficients = ((0xdU & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (2U & (IData)(vlSelf->Encrypt__DOT__coefficients)));
    vlSelf->Encrypt__DOT__coefficients = (0xbU & (IData)(vlSelf->Encrypt__DOT__coefficients));
    vlSelf->Encrypt__DOT__coefficients = ((0xbU & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (4U & (
                                                   (((IData)(vlSelf->Encrypt__DOT__coefficients) 
                                                     >> 2U) 
                                                    + 
                                                    ((IData)(vlSelf->Encrypt__DOT__dec_to_bit__DOT__bit_list) 
                                                     >> 4U)) 
                                                   << 2U)));
    vlSelf->Encrypt__DOT__coefficients = ((0xbU & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (4U & (IData)(vlSelf->Encrypt__DOT__coefficients)));
    vlSelf->Encrypt__DOT__coefficients = (7U & (IData)(vlSelf->Encrypt__DOT__coefficients));
    vlSelf->Encrypt__DOT__coefficients = ((7U & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (8U & (
                                                   (((IData)(vlSelf->Encrypt__DOT__coefficients) 
                                                     >> 3U) 
                                                    + 
                                                    ((IData)(vlSelf->Encrypt__DOT__dec_to_bit__DOT__bit_list) 
                                                     >> 6U)) 
                                                   << 3U)));
    vlSelf->Encrypt__DOT__coefficients = ((7U & (IData)(vlSelf->Encrypt__DOT__coefficients)) 
                                          | (8U & (IData)(vlSelf->Encrypt__DOT__coefficients)));
    vlSelf->Encrypt__DOT__added[0U] = 0U;
    vlSelf->Encrypt__DOT__added1[0U] = 0U;
    vlSelf->Encrypt__DOT__added2[0U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][0U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][0U] = 0U;
    vlSelf->Encrypt__DOT__added[1U] = 0U;
    vlSelf->Encrypt__DOT__added1[1U] = 0U;
    vlSelf->Encrypt__DOT__added2[1U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][1U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][1U] = 0U;
    vlSelf->Encrypt__DOT__added[2U] = 0U;
    vlSelf->Encrypt__DOT__added1[2U] = 0U;
    vlSelf->Encrypt__DOT__added2[2U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][2U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][2U] = 0U;
    vlSelf->Encrypt__DOT__added[3U] = 0U;
    vlSelf->Encrypt__DOT__added1[3U] = 0U;
    vlSelf->Encrypt__DOT__added2[3U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][3U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][3U] = 0U;
    if (VL_UNLIKELY(vlSelf->enable)) {
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][0U]);
        vlSelf->Encrypt__DOT__added[0U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [0U] + vlSelf->Encrypt__DOT__poly_out1
                                           [0U]);
        vlSelf->Encrypt__DOT__added2[0U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [0U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [0U]);
        vlSelf->Encrypt__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->Encrypt__DOT__unnamedblk6__DOT__i = 4U;
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][1U]);
        vlSelf->Encrypt__DOT__added1[0U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [0U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [0U]);
        vlSelf->Encrypt__DOT__added2[0U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [0U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [0U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [0U], (IData)(0x11U)));
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][2U]);
        vlSelf->Encrypt__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [0U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [0U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[1U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [1U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [1U]);
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][3U]);
        vlSelf->Encrypt__DOT__added1[0U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [0U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [0U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[1U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [1U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [1U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [1U], (IData)(0x11U)));
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][0U]);
        vlSelf->Encrypt__DOT__added[1U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [1U] + vlSelf->Encrypt__DOT__poly_out1
                                           [1U]);
        vlSelf->Encrypt__DOT__added2[2U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [2U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [2U]);
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][1U]);
        vlSelf->Encrypt__DOT__added1[1U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [1U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [1U]);
        vlSelf->Encrypt__DOT__added2[2U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [2U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [2U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [2U], (IData)(0x11U)));
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][2U]);
        vlSelf->Encrypt__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [1U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [1U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[3U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [3U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [3U]);
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][3U]);
        vlSelf->Encrypt__DOT__added1[1U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [1U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [1U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[3U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [3U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [3U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [3U], (IData)(0x11U)));
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [0U]);
        vlSelf->Encrypt__DOT__added[2U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [2U] + vlSelf->Encrypt__DOT__poly_out1
                                           [2U]);
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [1U]);
        vlSelf->Encrypt__DOT__added1[2U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [2U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [2U]);
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [2U]);
        vlSelf->Encrypt__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [2U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [2U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[2U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [2U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [2U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [2U], (IData)(0x11U)));
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [3U]);
        vlSelf->Encrypt__DOT__added[3U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [3U] + vlSelf->Encrypt__DOT__poly_out1
                                           [3U]);
        vlSelf->Encrypt__DOT__added1[3U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [3U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [3U]);
        vlSelf->Encrypt__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [3U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [3U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[3U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [3U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [3U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[0U][0U] = (vlSelf->Encrypt__DOT__added
                                           [0U] + vlSelf->Encrypt__DOT__e1
                                           [0U][0U]);
        vlSelf->Encrypt__DOT__u[1U][0U] = (vlSelf->Encrypt__DOT__added1
                                           [0U] + vlSelf->Encrypt__DOT__e1
                                           [1U][0U]);
        vlSelf->Encrypt__DOT__u[0U][1U] = (vlSelf->Encrypt__DOT__added
                                           [1U] + vlSelf->Encrypt__DOT__e1
                                           [0U][1U]);
        vlSelf->Encrypt__DOT__u[1U][1U] = (vlSelf->Encrypt__DOT__added1
                                           [1U] + vlSelf->Encrypt__DOT__e1
                                           [1U][1U]);
        vlSelf->Encrypt__DOT__u[0U][2U] = (vlSelf->Encrypt__DOT__added
                                           [2U] + vlSelf->Encrypt__DOT__e1
                                           [0U][2U]);
        vlSelf->Encrypt__DOT__u[1U][2U] = (vlSelf->Encrypt__DOT__added1
                                           [2U] + vlSelf->Encrypt__DOT__e1
                                           [1U][2U]);
        vlSelf->Encrypt__DOT__u[0U][3U] = (vlSelf->Encrypt__DOT__added
                                           [3U] + vlSelf->Encrypt__DOT__e1
                                           [0U][3U]);
        vlSelf->Encrypt__DOT__u[1U][3U] = (vlSelf->Encrypt__DOT__added1
                                           [3U] + vlSelf->Encrypt__DOT__e1
                                           [1U][3U]);
    }
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelf->combined_output[0U][3U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelf->combined_output[0U][3U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelf->combined_output[0U][3U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelf->combined_output[0U][3U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelf->combined_output[0U][2U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelf->combined_output[0U][2U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelf->combined_output[0U][2U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelf->combined_output[0U][2U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelf->combined_output[0U][1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelf->combined_output[0U][1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelf->combined_output[0U][1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelf->combined_output[0U][1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelf->combined_output[0U][0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelf->combined_output[0U][0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelf->combined_output[0U][0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelf->combined_output[0U][0U][0U];
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__coefficients_scaled[0U] = 
        ((1U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__coefficients_scaled[1U] = 
        ((2U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__coefficients_scaled[2U] = 
        ((4U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__coefficients_scaled[3U] = 
        ((8U & (IData)(vlSelf->Encrypt__DOT__coefficients))
          ? 9U : 0U);
    vlSelf->Encrypt__DOT__transposed_matrix[0U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[0U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[1U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[2U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][3U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][2U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][1U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelf->Encrypt__DOT__transposed_matrix[3U][0U] 
        = vlSelf->Encrypt__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelf->Encrypt__DOT__v[0U] = ((vlSelf->Encrypt__DOT__added2
                                    [0U] + vlSelf->Encrypt__DOT__e2
                                    [0U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [0U]);
    vlSelf->Encrypt__DOT__v[0U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [0U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [0U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[1U] = ((vlSelf->Encrypt__DOT__added2
                                    [1U] + vlSelf->Encrypt__DOT__e2
                                    [1U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [1U]);
    vlSelf->Encrypt__DOT__v[1U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [1U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [1U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[2U] = ((vlSelf->Encrypt__DOT__added2
                                    [2U] + vlSelf->Encrypt__DOT__e2
                                    [2U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [2U]);
    vlSelf->Encrypt__DOT__v[2U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [2U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [2U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[3U] = ((vlSelf->Encrypt__DOT__added2
                                    [3U] + vlSelf->Encrypt__DOT__e2
                                    [3U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [3U]);
    vlSelf->Encrypt__DOT__v[3U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [3U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [3U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [3U], (IData)(0x11U)));
    vlSelf->ciphertext[0U][0U][0U] = vlSelf->Encrypt__DOT__u
        [0U][0U];
    vlSelf->ciphertext[1U][0U][0U] = vlSelf->Encrypt__DOT__v
        [0U];
    vlSelf->ciphertext[0U][0U][1U] = vlSelf->Encrypt__DOT__u
        [0U][1U];
    vlSelf->ciphertext[1U][0U][1U] = vlSelf->Encrypt__DOT__v
        [1U];
    vlSelf->ciphertext[0U][0U][2U] = vlSelf->Encrypt__DOT__u
        [0U][2U];
    vlSelf->ciphertext[1U][0U][2U] = vlSelf->Encrypt__DOT__v
        [2U];
    vlSelf->ciphertext[0U][0U][3U] = vlSelf->Encrypt__DOT__u
        [0U][3U];
    vlSelf->ciphertext[1U][0U][3U] = vlSelf->Encrypt__DOT__v
        [3U];
    vlSelf->ciphertext[0U][1U][0U] = vlSelf->Encrypt__DOT__u
        [1U][0U];
    vlSelf->ciphertext[1U][0U][0U] = vlSelf->Encrypt__DOT__v
        [0U];
    vlSelf->ciphertext[0U][1U][1U] = vlSelf->Encrypt__DOT__u
        [1U][1U];
    vlSelf->ciphertext[1U][0U][1U] = vlSelf->Encrypt__DOT__v
        [1U];
    vlSelf->ciphertext[0U][1U][2U] = vlSelf->Encrypt__DOT__u
        [1U][2U];
    vlSelf->ciphertext[1U][0U][2U] = vlSelf->Encrypt__DOT__v
        [2U];
    vlSelf->ciphertext[0U][1U][3U] = vlSelf->Encrypt__DOT__u
        [1U][3U];
    vlSelf->ciphertext[1U][0U][3U] = vlSelf->Encrypt__DOT__v
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[0U]
        [0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[1U]
        [0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[2U]
        [0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelf->Encrypt__DOT__transposed_matrix[3U]
        [0U];
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

void VEncrypt___024root___eval_triggers__ico(VEncrypt___024root* vlSelf);

bool VEncrypt___024root___eval_phase__ico(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VEncrypt___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VEncrypt___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VEncrypt___024root___eval_act(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_act\n"); );
}

void VEncrypt___024root___nba_sequent__TOP__0(VEncrypt___024root* vlSelf);

void VEncrypt___024root___eval_nba(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VEncrypt___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(IData/*31:0*/ min_value, IData/*31:0*/ max_value, IData/*31:0*/ &generate_random_number__Vfuncrtn);

VL_INLINE_OPT void VEncrypt___024root___nba_sequent__TOP__0(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Encrypt__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout;
    __Vfunc_Encrypt__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out0__v0;
    __VdlyVal__Encrypt__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out0__v1;
    __VdlyVal__Encrypt__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out0__v2;
    __VdlyVal__Encrypt__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out0__v3;
    __VdlyVal__Encrypt__DOT__poly_out0__v3 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out1__v0;
    __VdlyVal__Encrypt__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out1__v1;
    __VdlyVal__Encrypt__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out1__v2;
    __VdlyVal__Encrypt__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out1__v3;
    __VdlyVal__Encrypt__DOT__poly_out1__v3 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out2__v0;
    __VdlyVal__Encrypt__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out2__v1;
    __VdlyVal__Encrypt__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out2__v2;
    __VdlyVal__Encrypt__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out2__v3;
    __VdlyVal__Encrypt__DOT__poly_out2__v3 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out3__v0;
    __VdlyVal__Encrypt__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out3__v1;
    __VdlyVal__Encrypt__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out3__v2;
    __VdlyVal__Encrypt__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out3__v3;
    __VdlyVal__Encrypt__DOT__poly_out3__v3 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out4__v0;
    __VdlyVal__Encrypt__DOT__poly_out4__v0 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out4__v1;
    __VdlyVal__Encrypt__DOT__poly_out4__v1 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out4__v2;
    __VdlyVal__Encrypt__DOT__poly_out4__v2 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out4__v3;
    __VdlyVal__Encrypt__DOT__poly_out4__v3 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out5__v0;
    __VdlyVal__Encrypt__DOT__poly_out5__v0 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out5__v1;
    __VdlyVal__Encrypt__DOT__poly_out5__v1 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out5__v2;
    __VdlyVal__Encrypt__DOT__poly_out5__v2 = 0;
    IData/*31:0*/ __VdlyVal__Encrypt__DOT__poly_out5__v3;
    __VdlyVal__Encrypt__DOT__poly_out5__v3 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__r__v0;
    __VdlySet__Encrypt__DOT__r__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__r__v8;
    __VdlySet__Encrypt__DOT__r__v8 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__r__v9;
    __VdlySet__Encrypt__DOT__r__v9 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out0__v0;
    __VdlySet__Encrypt__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out0__v4;
    __VdlySet__Encrypt__DOT__poly_out0__v4 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out1__v0;
    __VdlySet__Encrypt__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out1__v4;
    __VdlySet__Encrypt__DOT__poly_out1__v4 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out2__v0;
    __VdlySet__Encrypt__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out2__v4;
    __VdlySet__Encrypt__DOT__poly_out2__v4 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out3__v0;
    __VdlySet__Encrypt__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out3__v4;
    __VdlySet__Encrypt__DOT__poly_out3__v4 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out4__v0;
    __VdlySet__Encrypt__DOT__poly_out4__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out4__v4;
    __VdlySet__Encrypt__DOT__poly_out4__v4 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out5__v0;
    __VdlySet__Encrypt__DOT__poly_out5__v0 = 0;
    CData/*0:0*/ __VdlySet__Encrypt__DOT__poly_out5__v4;
    __VdlySet__Encrypt__DOT__poly_out5__v4 = 0;
    // Body
    __VdlySet__Encrypt__DOT__poly_out5__v0 = 0U;
    __VdlySet__Encrypt__DOT__poly_out5__v4 = 0U;
    __VdlySet__Encrypt__DOT__poly_out4__v0 = 0U;
    __VdlySet__Encrypt__DOT__poly_out4__v4 = 0U;
    __VdlySet__Encrypt__DOT__poly_out3__v0 = 0U;
    __VdlySet__Encrypt__DOT__poly_out3__v4 = 0U;
    __VdlySet__Encrypt__DOT__poly_out2__v0 = 0U;
    __VdlySet__Encrypt__DOT__poly_out2__v4 = 0U;
    __VdlySet__Encrypt__DOT__poly_out1__v0 = 0U;
    __VdlySet__Encrypt__DOT__poly_out1__v4 = 0U;
    __VdlySet__Encrypt__DOT__poly_out0__v0 = 0U;
    __VdlySet__Encrypt__DOT__poly_out0__v4 = 0U;
    __VdlySet__Encrypt__DOT__r__v0 = 0U;
    __VdlySet__Encrypt__DOT__r__v8 = 0U;
    __VdlySet__Encrypt__DOT__r__v9 = 0U;
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __VdlyVal__Encrypt__DOT__poly_out5__v0 
                = vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                [0U];
            __VdlySet__Encrypt__DOT__poly_out5__v0 = 1U;
            __VdlyVal__Encrypt__DOT__poly_out5__v1 
                = vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                [1U];
            __VdlyVal__Encrypt__DOT__poly_out5__v2 
                = vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                [2U];
            __VdlyVal__Encrypt__DOT__poly_out5__v3 
                = vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                [3U];
            __VdlyVal__Encrypt__DOT__poly_out4__v0 
                = vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                [0U];
            __VdlySet__Encrypt__DOT__poly_out4__v0 = 1U;
            __VdlyVal__Encrypt__DOT__poly_out4__v1 
                = vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                [1U];
            __VdlyVal__Encrypt__DOT__poly_out4__v2 
                = vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                [2U];
            __VdlyVal__Encrypt__DOT__poly_out4__v3 
                = vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                [3U];
            __VdlyVal__Encrypt__DOT__poly_out3__v0 
                = vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                [0U];
            __VdlySet__Encrypt__DOT__poly_out3__v0 = 1U;
            __VdlyVal__Encrypt__DOT__poly_out3__v1 
                = vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                [1U];
            __VdlyVal__Encrypt__DOT__poly_out3__v2 
                = vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                [2U];
            __VdlyVal__Encrypt__DOT__poly_out3__v3 
                = vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                [3U];
            __VdlyVal__Encrypt__DOT__poly_out2__v0 
                = vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                [0U];
            __VdlySet__Encrypt__DOT__poly_out2__v0 = 1U;
            __VdlyVal__Encrypt__DOT__poly_out2__v1 
                = vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                [1U];
            __VdlyVal__Encrypt__DOT__poly_out2__v2 
                = vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                [2U];
            __VdlyVal__Encrypt__DOT__poly_out2__v3 
                = vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                [3U];
            __VdlyVal__Encrypt__DOT__poly_out1__v0 
                = vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                [0U];
            __VdlySet__Encrypt__DOT__poly_out1__v0 = 1U;
            __VdlyVal__Encrypt__DOT__poly_out1__v1 
                = vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                [1U];
            __VdlyVal__Encrypt__DOT__poly_out1__v2 
                = vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                [2U];
            __VdlyVal__Encrypt__DOT__poly_out1__v3 
                = vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                [3U];
            __VdlyVal__Encrypt__DOT__poly_out0__v0 
                = vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                [0U];
            __VdlySet__Encrypt__DOT__poly_out0__v0 = 1U;
            __VdlyVal__Encrypt__DOT__poly_out0__v1 
                = vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                [1U];
            __VdlyVal__Encrypt__DOT__poly_out0__v2 
                = vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                [2U];
            __VdlyVal__Encrypt__DOT__poly_out0__v3 
                = vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                [3U];
        }
    } else {
        __VdlySet__Encrypt__DOT__poly_out5__v4 = 1U;
        __VdlySet__Encrypt__DOT__poly_out4__v4 = 1U;
        __VdlySet__Encrypt__DOT__poly_out3__v4 = 1U;
        __VdlySet__Encrypt__DOT__poly_out2__v4 = 1U;
        __VdlySet__Encrypt__DOT__poly_out1__v4 = 1U;
        __VdlySet__Encrypt__DOT__poly_out0__v4 = 1U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VEncrypt___024root____Vdpiimwrap_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffffU, 1U, __Vfunc_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout);
            vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number 
                = __Vfunc_Encrypt__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout;
        }
    } else {
        vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (VL_UNLIKELY(vlSelf->enable)) {
            VL_WRITEF_NX("coef%2#\n",0,4,vlSelf->Encrypt__DOT__coefficients);
            __VdlySet__Encrypt__DOT__r__v0 = 1U;
        }
    } else {
        vlSelf->Encrypt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->Encrypt__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->Encrypt__DOT__unnamedblk3__DOT__i = 4U;
        __VdlySet__Encrypt__DOT__r__v8 = 1U;
        vlSelf->Encrypt__DOT__stop_random_generation = 0U;
        __VdlySet__Encrypt__DOT__r__v9 = 1U;
    }
    if (__VdlySet__Encrypt__DOT__poly_out5__v0) {
        vlSelf->Encrypt__DOT__poly_out5[0U] = __VdlyVal__Encrypt__DOT__poly_out5__v0;
        vlSelf->Encrypt__DOT__poly_out5[1U] = __VdlyVal__Encrypt__DOT__poly_out5__v1;
        vlSelf->Encrypt__DOT__poly_out5[2U] = __VdlyVal__Encrypt__DOT__poly_out5__v2;
        vlSelf->Encrypt__DOT__poly_out5[3U] = __VdlyVal__Encrypt__DOT__poly_out5__v3;
    }
    if (__VdlySet__Encrypt__DOT__poly_out5__v4) {
        vlSelf->Encrypt__DOT__poly_out5[0U] = 0U;
        vlSelf->Encrypt__DOT__poly_out5[1U] = 0U;
        vlSelf->Encrypt__DOT__poly_out5[2U] = 0U;
        vlSelf->Encrypt__DOT__poly_out5[3U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__poly_out4__v0) {
        vlSelf->Encrypt__DOT__poly_out4[0U] = __VdlyVal__Encrypt__DOT__poly_out4__v0;
        vlSelf->Encrypt__DOT__poly_out4[1U] = __VdlyVal__Encrypt__DOT__poly_out4__v1;
        vlSelf->Encrypt__DOT__poly_out4[2U] = __VdlyVal__Encrypt__DOT__poly_out4__v2;
        vlSelf->Encrypt__DOT__poly_out4[3U] = __VdlyVal__Encrypt__DOT__poly_out4__v3;
    }
    if (__VdlySet__Encrypt__DOT__poly_out4__v4) {
        vlSelf->Encrypt__DOT__poly_out4[0U] = 0U;
        vlSelf->Encrypt__DOT__poly_out4[1U] = 0U;
        vlSelf->Encrypt__DOT__poly_out4[2U] = 0U;
        vlSelf->Encrypt__DOT__poly_out4[3U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__poly_out3__v0) {
        vlSelf->Encrypt__DOT__poly_out3[0U] = __VdlyVal__Encrypt__DOT__poly_out3__v0;
        vlSelf->Encrypt__DOT__poly_out3[1U] = __VdlyVal__Encrypt__DOT__poly_out3__v1;
        vlSelf->Encrypt__DOT__poly_out3[2U] = __VdlyVal__Encrypt__DOT__poly_out3__v2;
        vlSelf->Encrypt__DOT__poly_out3[3U] = __VdlyVal__Encrypt__DOT__poly_out3__v3;
    }
    if (__VdlySet__Encrypt__DOT__poly_out3__v4) {
        vlSelf->Encrypt__DOT__poly_out3[0U] = 0U;
        vlSelf->Encrypt__DOT__poly_out3[1U] = 0U;
        vlSelf->Encrypt__DOT__poly_out3[2U] = 0U;
        vlSelf->Encrypt__DOT__poly_out3[3U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__poly_out2__v0) {
        vlSelf->Encrypt__DOT__poly_out2[0U] = __VdlyVal__Encrypt__DOT__poly_out2__v0;
        vlSelf->Encrypt__DOT__poly_out2[1U] = __VdlyVal__Encrypt__DOT__poly_out2__v1;
        vlSelf->Encrypt__DOT__poly_out2[2U] = __VdlyVal__Encrypt__DOT__poly_out2__v2;
        vlSelf->Encrypt__DOT__poly_out2[3U] = __VdlyVal__Encrypt__DOT__poly_out2__v3;
    }
    if (__VdlySet__Encrypt__DOT__poly_out2__v4) {
        vlSelf->Encrypt__DOT__poly_out2[0U] = 0U;
        vlSelf->Encrypt__DOT__poly_out2[1U] = 0U;
        vlSelf->Encrypt__DOT__poly_out2[2U] = 0U;
        vlSelf->Encrypt__DOT__poly_out2[3U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__poly_out1__v0) {
        vlSelf->Encrypt__DOT__poly_out1[0U] = __VdlyVal__Encrypt__DOT__poly_out1__v0;
        vlSelf->Encrypt__DOT__poly_out1[1U] = __VdlyVal__Encrypt__DOT__poly_out1__v1;
        vlSelf->Encrypt__DOT__poly_out1[2U] = __VdlyVal__Encrypt__DOT__poly_out1__v2;
        vlSelf->Encrypt__DOT__poly_out1[3U] = __VdlyVal__Encrypt__DOT__poly_out1__v3;
    }
    if (__VdlySet__Encrypt__DOT__poly_out1__v4) {
        vlSelf->Encrypt__DOT__poly_out1[0U] = 0U;
        vlSelf->Encrypt__DOT__poly_out1[1U] = 0U;
        vlSelf->Encrypt__DOT__poly_out1[2U] = 0U;
        vlSelf->Encrypt__DOT__poly_out1[3U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__poly_out0__v0) {
        vlSelf->Encrypt__DOT__poly_out0[0U] = __VdlyVal__Encrypt__DOT__poly_out0__v0;
        vlSelf->Encrypt__DOT__poly_out0[1U] = __VdlyVal__Encrypt__DOT__poly_out0__v1;
        vlSelf->Encrypt__DOT__poly_out0[2U] = __VdlyVal__Encrypt__DOT__poly_out0__v2;
        vlSelf->Encrypt__DOT__poly_out0[3U] = __VdlyVal__Encrypt__DOT__poly_out0__v3;
    }
    if (__VdlySet__Encrypt__DOT__poly_out0__v4) {
        vlSelf->Encrypt__DOT__poly_out0[0U] = 0U;
        vlSelf->Encrypt__DOT__poly_out0[1U] = 0U;
        vlSelf->Encrypt__DOT__poly_out0[2U] = 0U;
        vlSelf->Encrypt__DOT__poly_out0[3U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__r__v0) {
        vlSelf->Encrypt__DOT__e2[0U] = 0U;
        vlSelf->Encrypt__DOT__e2[1U] = 0U;
        vlSelf->Encrypt__DOT__e2[2U] = 0xffffffffU;
        vlSelf->Encrypt__DOT__e2[3U] = 0xffffffffU;
        vlSelf->Encrypt__DOT__e1[0U][0U] = 0U;
        vlSelf->Encrypt__DOT__e1[0U][1U] = 1U;
        vlSelf->Encrypt__DOT__e1[0U][2U] = 1U;
        vlSelf->Encrypt__DOT__e1[0U][3U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][0U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][1U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][2U] = 1U;
        vlSelf->Encrypt__DOT__e1[1U][3U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][0U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][1U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][2U] = 1U;
        vlSelf->Encrypt__DOT__r[0U][3U] = 0xffffffffU;
        vlSelf->Encrypt__DOT__r[1U][0U] = 0xffffffffU;
        vlSelf->Encrypt__DOT__r[1U][1U] = 0U;
        vlSelf->Encrypt__DOT__r[1U][2U] = 1U;
        vlSelf->Encrypt__DOT__r[1U][3U] = 1U;
    }
    if (__VdlySet__Encrypt__DOT__r__v8) {
        vlSelf->Encrypt__DOT__e2[0U] = 0U;
        vlSelf->Encrypt__DOT__e1[0U][0U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][0U] = 0U;
    }
    if (__VdlySet__Encrypt__DOT__r__v9) {
        vlSelf->Encrypt__DOT__e2[1U] = 0U;
        vlSelf->Encrypt__DOT__e2[2U] = 0U;
        vlSelf->Encrypt__DOT__e2[3U] = 0U;
        vlSelf->Encrypt__DOT__e1[0U][1U] = 0U;
        vlSelf->Encrypt__DOT__e1[0U][2U] = 0U;
        vlSelf->Encrypt__DOT__e1[0U][3U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][0U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][1U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][2U] = 0U;
        vlSelf->Encrypt__DOT__e1[1U][3U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][1U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][2U] = 0U;
        vlSelf->Encrypt__DOT__r[0U][3U] = 0U;
        vlSelf->Encrypt__DOT__r[1U][0U] = 0U;
        vlSelf->Encrypt__DOT__r[1U][1U] = 0U;
        vlSelf->Encrypt__DOT__r[1U][2U] = 0U;
        vlSelf->Encrypt__DOT__r[1U][3U] = 0U;
    }
    vlSelf->Encrypt__DOT__rand_num[0x13U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0x12U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0x11U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0x10U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0xfU] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0xeU] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0xdU] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0xcU] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0xbU] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0xaU] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[9U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[8U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[7U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[6U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[5U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[4U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[3U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[2U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[1U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT__rand_num[0U] = vlSelf->Encrypt__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
    vlSelf->Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable 
        = ((~ (IData)(vlSelf->Encrypt__DOT__stop_random_generation)) 
           & (IData)(vlSelf->enable));
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelf->Encrypt__DOT__r[0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelf->Encrypt__DOT__r[0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelf->Encrypt__DOT__r[0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelf->Encrypt__DOT__r[0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelf->Encrypt__DOT__r[1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelf->Encrypt__DOT__r[1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelf->Encrypt__DOT__r[1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelf->Encrypt__DOT__r[1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelf->Encrypt__DOT__r[0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelf->Encrypt__DOT__r[0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelf->Encrypt__DOT__r[0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelf->Encrypt__DOT__r[0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelf->Encrypt__DOT__r[1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelf->Encrypt__DOT__r[1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelf->Encrypt__DOT__r[1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelf->Encrypt__DOT__r[1U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelf->Encrypt__DOT__r[0U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelf->Encrypt__DOT__r[0U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelf->Encrypt__DOT__r[0U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelf->Encrypt__DOT__r[0U][0U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelf->Encrypt__DOT__r[1U][3U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelf->Encrypt__DOT__r[1U][2U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelf->Encrypt__DOT__r[1U][1U];
    vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelf->Encrypt__DOT__r[1U][0U];
    vlSelf->Encrypt__DOT__added[0U] = 0U;
    vlSelf->Encrypt__DOT__added1[0U] = 0U;
    vlSelf->Encrypt__DOT__added2[0U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][0U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][0U] = 0U;
    vlSelf->Encrypt__DOT__added[1U] = 0U;
    vlSelf->Encrypt__DOT__added1[1U] = 0U;
    vlSelf->Encrypt__DOT__added2[1U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][1U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][1U] = 0U;
    vlSelf->Encrypt__DOT__added[2U] = 0U;
    vlSelf->Encrypt__DOT__added1[2U] = 0U;
    vlSelf->Encrypt__DOT__added2[2U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][2U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][2U] = 0U;
    vlSelf->Encrypt__DOT__added[3U] = 0U;
    vlSelf->Encrypt__DOT__added1[3U] = 0U;
    vlSelf->Encrypt__DOT__added2[3U] = 0U;
    vlSelf->Encrypt__DOT__u[0U][3U] = 0U;
    vlSelf->Encrypt__DOT__u[1U][3U] = 0U;
    if (VL_UNLIKELY(vlSelf->enable)) {
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][0U]);
        vlSelf->Encrypt__DOT__added[0U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [0U] + vlSelf->Encrypt__DOT__poly_out1
                                           [0U]);
        vlSelf->Encrypt__DOT__added2[0U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [0U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [0U]);
        vlSelf->Encrypt__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->Encrypt__DOT__unnamedblk6__DOT__i = 4U;
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][1U]);
        vlSelf->Encrypt__DOT__added1[0U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [0U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [0U]);
        vlSelf->Encrypt__DOT__added2[0U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [0U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [0U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [0U], (IData)(0x11U)));
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][2U]);
        vlSelf->Encrypt__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [0U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [0U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[1U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [1U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [1U]);
        VL_WRITEF_NX("tt%11d\n",0,32,vlSelf->combined_output
                     [1U][0U][3U]);
        vlSelf->Encrypt__DOT__added1[0U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [0U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [0U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [0U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[1U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [1U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [1U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [1U], (IData)(0x11U)));
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][0U]);
        vlSelf->Encrypt__DOT__added[1U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [1U] + vlSelf->Encrypt__DOT__poly_out1
                                           [1U]);
        vlSelf->Encrypt__DOT__added2[2U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [2U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [2U]);
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][1U]);
        vlSelf->Encrypt__DOT__added1[1U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [1U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [1U]);
        vlSelf->Encrypt__DOT__added2[2U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [2U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [2U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [2U], (IData)(0x11U)));
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][2U]);
        vlSelf->Encrypt__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [1U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [1U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[3U] = (vlSelf->Encrypt__DOT__poly_out4
                                            [3U] + 
                                            vlSelf->Encrypt__DOT__poly_out5
                                            [3U]);
        VL_WRITEF_NX("rr%11d\n",0,32,vlSelf->Encrypt__DOT__r
                     [0U][3U]);
        vlSelf->Encrypt__DOT__added1[1U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [1U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [1U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [1U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added2[3U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added2
                                                       [3U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added2
                                                                              [3U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added2
                                                              [3U], (IData)(0x11U)));
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [0U]);
        vlSelf->Encrypt__DOT__added[2U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [2U] + vlSelf->Encrypt__DOT__poly_out1
                                           [2U]);
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [1U]);
        vlSelf->Encrypt__DOT__added1[2U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [2U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [2U]);
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [2U]);
        vlSelf->Encrypt__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [2U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [2U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [2U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[2U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [2U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [2U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [2U], (IData)(0x11U)));
        VL_WRITEF_NX("poly%11d\n",0,32,vlSelf->Encrypt__DOT__poly_out4
                     [3U]);
        vlSelf->Encrypt__DOT__added[3U] = (vlSelf->Encrypt__DOT__poly_out0
                                           [3U] + vlSelf->Encrypt__DOT__poly_out1
                                           [3U]);
        vlSelf->Encrypt__DOT__added1[3U] = (vlSelf->Encrypt__DOT__poly_out2
                                            [3U] + 
                                            vlSelf->Encrypt__DOT__poly_out3
                                            [3U]);
        vlSelf->Encrypt__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                      vlSelf->Encrypt__DOT__added
                                                      [3U])
                                            ? VL_MODDIVS_III(32, 
                                                             ((IData)(0x11U) 
                                                              + 
                                                              VL_MODDIVS_III(32, 
                                                                             vlSelf->Encrypt__DOT__added
                                                                             [3U], (IData)(0x11U))), (IData)(0x11U))
                                            : VL_MODDIVS_III(32, 
                                                             vlSelf->Encrypt__DOT__added
                                                             [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__added1[3U] = (VL_GTS_III(32, 0U, 
                                                       vlSelf->Encrypt__DOT__added1
                                                       [3U])
                                             ? VL_MODDIVS_III(32, 
                                                              ((IData)(0x11U) 
                                                               + 
                                                               VL_MODDIVS_III(32, 
                                                                              vlSelf->Encrypt__DOT__added1
                                                                              [3U], (IData)(0x11U))), (IData)(0x11U))
                                             : VL_MODDIVS_III(32, 
                                                              vlSelf->Encrypt__DOT__added1
                                                              [3U], (IData)(0x11U)));
        vlSelf->Encrypt__DOT__u[0U][0U] = (vlSelf->Encrypt__DOT__added
                                           [0U] + vlSelf->Encrypt__DOT__e1
                                           [0U][0U]);
        vlSelf->Encrypt__DOT__u[1U][0U] = (vlSelf->Encrypt__DOT__added1
                                           [0U] + vlSelf->Encrypt__DOT__e1
                                           [1U][0U]);
        vlSelf->Encrypt__DOT__u[0U][1U] = (vlSelf->Encrypt__DOT__added
                                           [1U] + vlSelf->Encrypt__DOT__e1
                                           [0U][1U]);
        vlSelf->Encrypt__DOT__u[1U][1U] = (vlSelf->Encrypt__DOT__added1
                                           [1U] + vlSelf->Encrypt__DOT__e1
                                           [1U][1U]);
        vlSelf->Encrypt__DOT__u[0U][2U] = (vlSelf->Encrypt__DOT__added
                                           [2U] + vlSelf->Encrypt__DOT__e1
                                           [0U][2U]);
        vlSelf->Encrypt__DOT__u[1U][2U] = (vlSelf->Encrypt__DOT__added1
                                           [2U] + vlSelf->Encrypt__DOT__e1
                                           [1U][2U]);
        vlSelf->Encrypt__DOT__u[0U][3U] = (vlSelf->Encrypt__DOT__added
                                           [3U] + vlSelf->Encrypt__DOT__e1
                                           [0U][3U]);
        vlSelf->Encrypt__DOT__u[1U][3U] = (vlSelf->Encrypt__DOT__added1
                                           [3U] + vlSelf->Encrypt__DOT__e1
                                           [1U][3U]);
    }
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->Encrypt__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[0U] = ((vlSelf->Encrypt__DOT__added2
                                    [0U] + vlSelf->Encrypt__DOT__e2
                                    [0U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [0U]);
    vlSelf->Encrypt__DOT__v[0U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [0U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [0U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [0U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[1U] = ((vlSelf->Encrypt__DOT__added2
                                    [1U] + vlSelf->Encrypt__DOT__e2
                                    [1U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [1U]);
    vlSelf->Encrypt__DOT__v[1U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [1U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [1U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [1U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[2U] = ((vlSelf->Encrypt__DOT__added2
                                    [2U] + vlSelf->Encrypt__DOT__e2
                                    [2U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [2U]);
    vlSelf->Encrypt__DOT__v[2U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [2U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [2U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [2U], (IData)(0x11U)));
    vlSelf->Encrypt__DOT__v[3U] = ((vlSelf->Encrypt__DOT__added2
                                    [3U] + vlSelf->Encrypt__DOT__e2
                                    [3U]) - vlSelf->Encrypt__DOT__coefficients_scaled
                                   [3U]);
    vlSelf->Encrypt__DOT__v[3U] = (VL_GTS_III(32, 0U, 
                                              vlSelf->Encrypt__DOT__v
                                              [3U])
                                    ? VL_MODDIVS_III(32, 
                                                     ((IData)(0x11U) 
                                                      + 
                                                      VL_MODDIVS_III(32, 
                                                                     vlSelf->Encrypt__DOT__v
                                                                     [3U], (IData)(0x11U))), (IData)(0x11U))
                                    : VL_MODDIVS_III(32, 
                                                     vlSelf->Encrypt__DOT__v
                                                     [3U], (IData)(0x11U)));
    vlSelf->ciphertext[0U][0U][0U] = vlSelf->Encrypt__DOT__u
        [0U][0U];
    vlSelf->ciphertext[1U][0U][0U] = vlSelf->Encrypt__DOT__v
        [0U];
    vlSelf->ciphertext[0U][0U][1U] = vlSelf->Encrypt__DOT__u
        [0U][1U];
    vlSelf->ciphertext[1U][0U][1U] = vlSelf->Encrypt__DOT__v
        [1U];
    vlSelf->ciphertext[0U][0U][2U] = vlSelf->Encrypt__DOT__u
        [0U][2U];
    vlSelf->ciphertext[1U][0U][2U] = vlSelf->Encrypt__DOT__v
        [2U];
    vlSelf->ciphertext[0U][0U][3U] = vlSelf->Encrypt__DOT__u
        [0U][3U];
    vlSelf->ciphertext[1U][0U][3U] = vlSelf->Encrypt__DOT__v
        [3U];
    vlSelf->ciphertext[0U][1U][0U] = vlSelf->Encrypt__DOT__u
        [1U][0U];
    vlSelf->ciphertext[1U][0U][0U] = vlSelf->Encrypt__DOT__v
        [0U];
    vlSelf->ciphertext[0U][1U][1U] = vlSelf->Encrypt__DOT__u
        [1U][1U];
    vlSelf->ciphertext[1U][0U][1U] = vlSelf->Encrypt__DOT__v
        [1U];
    vlSelf->ciphertext[0U][1U][2U] = vlSelf->Encrypt__DOT__u
        [1U][2U];
    vlSelf->ciphertext[1U][0U][2U] = vlSelf->Encrypt__DOT__v
        [2U];
    vlSelf->ciphertext[0U][1U][3U] = vlSelf->Encrypt__DOT__u
        [1U][3U];
    vlSelf->ciphertext[1U][0U][3U] = vlSelf->Encrypt__DOT__v
        [3U];
}

void VEncrypt___024root___eval_triggers__act(VEncrypt___024root* vlSelf);

bool VEncrypt___024root___eval_phase__act(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VEncrypt___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VEncrypt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VEncrypt___024root___eval_phase__nba(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VEncrypt___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__ico(VEncrypt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__nba(VEncrypt___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__act(VEncrypt___024root* vlSelf);
#endif  // VL_DEBUG

void VEncrypt___024root___eval(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval\n"); );
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
            VEncrypt___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Encrypt.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VEncrypt___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VEncrypt___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Encrypt.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VEncrypt___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Encrypt.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VEncrypt___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VEncrypt___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VEncrypt___024root___eval_debug_assertions(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
