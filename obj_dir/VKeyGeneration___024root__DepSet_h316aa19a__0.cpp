// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKeyGeneration.h for the primary calling header

#include "VKeyGeneration__pch.h"
#include "VKeyGeneration___024root.h"

void VKeyGeneration___024root___ico_sequent__TOP__0(VKeyGeneration___024root* vlSelf);

void VKeyGeneration___024root___eval_ico(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VKeyGeneration___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VKeyGeneration___024root___ico_sequent__TOP__0(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->enable) {
        vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable 
            = (1U & (~ (IData)(vlSelf->KeyGeneration__DOT__stop_random_generation)));
        vlSelf->KeyGeneration__DOT__added[0U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[0U] = 0U;
        vlSelf->result[0U][0U] = 0U;
        vlSelf->result[1U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__added[1U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[1U] = 0U;
        vlSelf->result[0U][1U] = 0U;
        vlSelf->result[1U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__added[2U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[2U] = 0U;
        vlSelf->result[0U][2U] = 0U;
        vlSelf->result[1U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__added[3U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[3U] = 0U;
        vlSelf->result[0U][3U] = 0U;
        vlSelf->result[1U][3U] = 0U;
        vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__i = 4U;
        vlSelf->KeyGeneration__DOT__unnamedblk7__DOT__i = 4U;
        vlSelf->KeyGeneration__DOT__added[0U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [0U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [0U]);
        vlSelf->KeyGeneration__DOT__added1[0U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [0U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [0U]);
        vlSelf->KeyGeneration__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [0U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[0U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [0U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[1U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [1U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [1U]);
        vlSelf->KeyGeneration__DOT__added1[1U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [1U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [1U]);
        vlSelf->KeyGeneration__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [1U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[1U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [1U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[2U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [2U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [2U]);
        vlSelf->KeyGeneration__DOT__added1[2U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [2U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [2U]);
        vlSelf->KeyGeneration__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [2U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[2U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [2U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[3U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [3U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [3U]);
        vlSelf->KeyGeneration__DOT__added1[3U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [3U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [3U]);
        vlSelf->KeyGeneration__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [3U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[3U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [3U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [3U], (IData)(0x11U)));
        vlSelf->result[0U][0U] = (vlSelf->KeyGeneration__DOT__added
                                  [0U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][0U]);
        vlSelf->result[1U][0U] = (vlSelf->KeyGeneration__DOT__added1
                                  [0U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][0U]);
        vlSelf->result[0U][1U] = (vlSelf->KeyGeneration__DOT__added
                                  [1U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][1U]);
        vlSelf->result[1U][1U] = (vlSelf->KeyGeneration__DOT__added1
                                  [1U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][1U]);
        vlSelf->result[0U][2U] = (vlSelf->KeyGeneration__DOT__added
                                  [2U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][2U]);
        vlSelf->result[1U][2U] = (vlSelf->KeyGeneration__DOT__added1
                                  [2U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][2U]);
        vlSelf->result[0U][3U] = (vlSelf->KeyGeneration__DOT__added
                                  [3U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][3U]);
        vlSelf->result[1U][3U] = (vlSelf->KeyGeneration__DOT__added1
                                  [3U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][3U]);
    } else {
        vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable = 0U;
        vlSelf->KeyGeneration__DOT__added[0U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[0U] = 0U;
        vlSelf->result[0U][0U] = 0U;
        vlSelf->result[1U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__added[1U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[1U] = 0U;
        vlSelf->result[0U][1U] = 0U;
        vlSelf->result[1U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__added[2U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[2U] = 0U;
        vlSelf->result[0U][2U] = 0U;
        vlSelf->result[1U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__added[3U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[3U] = 0U;
        vlSelf->result[0U][3U] = 0U;
        vlSelf->result[1U][3U] = 0U;
    }
}

void VKeyGeneration___024root___eval_triggers__ico(VKeyGeneration___024root* vlSelf);

bool VKeyGeneration___024root___eval_phase__ico(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VKeyGeneration___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VKeyGeneration___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VKeyGeneration___024root___eval_act(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_act\n"); );
}

void VKeyGeneration___024root___nba_sequent__TOP__0(VKeyGeneration___024root* vlSelf);

void VKeyGeneration___024root___eval_nba(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VKeyGeneration___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(IData/*31:0*/ min_value, IData/*31:0*/ max_value, IData/*31:0*/ &generate_random_number__Vfuncrtn);

VL_INLINE_OPT void VKeyGeneration___024root___nba_sequent__TOP__0(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v0;
    __VdlyVal__KeyGeneration__DOT__A__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v1;
    __VdlyVal__KeyGeneration__DOT__A__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v2;
    __VdlyVal__KeyGeneration__DOT__A__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v3;
    __VdlyVal__KeyGeneration__DOT__A__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v4;
    __VdlyVal__KeyGeneration__DOT__A__v4 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v5;
    __VdlyVal__KeyGeneration__DOT__A__v5 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v6;
    __VdlyVal__KeyGeneration__DOT__A__v6 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v7;
    __VdlyVal__KeyGeneration__DOT__A__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v8;
    __VdlyVal__KeyGeneration__DOT__A__v8 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v9;
    __VdlyVal__KeyGeneration__DOT__A__v9 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v10;
    __VdlyVal__KeyGeneration__DOT__A__v10 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v11;
    __VdlyVal__KeyGeneration__DOT__A__v11 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v12;
    __VdlyVal__KeyGeneration__DOT__A__v12 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v13;
    __VdlyVal__KeyGeneration__DOT__A__v13 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v14;
    __VdlyVal__KeyGeneration__DOT__A__v14 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__A__v15;
    __VdlyVal__KeyGeneration__DOT__A__v15 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v0;
    __VdlyVal__secretkey__v0 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v1;
    __VdlyVal__secretkey__v1 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v2;
    __VdlyVal__secretkey__v2 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v3;
    __VdlyVal__secretkey__v3 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v4;
    __VdlyVal__secretkey__v4 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v5;
    __VdlyVal__secretkey__v5 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v6;
    __VdlyVal__secretkey__v6 = 0;
    IData/*31:0*/ __VdlyVal__secretkey__v7;
    __VdlyVal__secretkey__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v0;
    __VdlyVal__KeyGeneration__DOT__e__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v1;
    __VdlyVal__KeyGeneration__DOT__e__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v2;
    __VdlyVal__KeyGeneration__DOT__e__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v3;
    __VdlyVal__KeyGeneration__DOT__e__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v4;
    __VdlyVal__KeyGeneration__DOT__e__v4 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v5;
    __VdlyVal__KeyGeneration__DOT__e__v5 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v6;
    __VdlyVal__KeyGeneration__DOT__e__v6 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT__e__v7;
    __VdlyVal__KeyGeneration__DOT__e__v7 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v1;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v2;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v3;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v1;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v2;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v1;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v2;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v1;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v1 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v2;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v2 = 0;
    IData/*31:0*/ __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v3;
    __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v3 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT__A__v0;
    __VdlySet__KeyGeneration__DOT__A__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT__A__v16;
    __VdlySet__KeyGeneration__DOT__A__v16 = 0;
    CData/*0:0*/ __VdlySet__secretkey__v0;
    __VdlySet__secretkey__v0 = 0;
    CData/*0:0*/ __VdlySet__secretkey__v8;
    __VdlySet__secretkey__v8 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT__e__v0;
    __VdlySet__KeyGeneration__DOT__e__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT__e__v8;
    __VdlySet__KeyGeneration__DOT__e__v8 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v4;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v4;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v4;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0;
    CData/*0:0*/ __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v4;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 0;
    // Body
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 0U;
    __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 0U;
    __VdlySet__KeyGeneration__DOT__e__v0 = 0U;
    __VdlySet__KeyGeneration__DOT__e__v8 = 0U;
    __VdlySet__secretkey__v0 = 0U;
    __VdlySet__secretkey__v8 = 0U;
    __VdlySet__KeyGeneration__DOT__A__v0 = 0U;
    __VdlySet__KeyGeneration__DOT__A__v16 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->KeyGeneration__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->KeyGeneration__DOT__unnamedblk3__DOT__i = 4U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0 
                = vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v1 
                = vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v2 
                = vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v3 
                = vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0 
                = vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v1 
                = vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v2 
                = vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v3 
                = vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0 
                = vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v1 
                = vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v2 
                = vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v3 
                = vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0 
                = vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                [0U];
            __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0 = 1U;
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v1 
                = vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                [1U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v2 
                = vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                [2U];
            __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v3 
                = vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                [3U];
            __VdlyVal__KeyGeneration__DOT__e__v0 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x18U];
            __VdlySet__KeyGeneration__DOT__e__v0 = 1U;
            __VdlyVal__KeyGeneration__DOT__e__v1 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x19U];
            __VdlyVal__KeyGeneration__DOT__e__v2 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x1aU];
            __VdlyVal__KeyGeneration__DOT__e__v3 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x1bU];
            __VdlyVal__KeyGeneration__DOT__e__v4 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x1cU];
            __VdlyVal__KeyGeneration__DOT__e__v5 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x1dU];
            __VdlyVal__KeyGeneration__DOT__e__v6 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x1eU];
            __VdlyVal__KeyGeneration__DOT__e__v7 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x1fU];
            __VdlyVal__secretkey__v0 = vlSelf->KeyGeneration__DOT__rand_num
                [0U];
            __VdlySet__secretkey__v0 = 1U;
            __VdlyVal__secretkey__v1 = vlSelf->KeyGeneration__DOT__rand_num
                [1U];
            __VdlyVal__secretkey__v2 = vlSelf->KeyGeneration__DOT__rand_num
                [2U];
            __VdlyVal__secretkey__v3 = vlSelf->KeyGeneration__DOT__rand_num
                [3U];
            __VdlyVal__secretkey__v4 = vlSelf->KeyGeneration__DOT__rand_num
                [4U];
            __VdlyVal__secretkey__v5 = vlSelf->KeyGeneration__DOT__rand_num
                [5U];
            __VdlyVal__secretkey__v6 = vlSelf->KeyGeneration__DOT__rand_num
                [6U];
            __VdlyVal__secretkey__v7 = vlSelf->KeyGeneration__DOT__rand_num
                [7U];
            __VdlyVal__KeyGeneration__DOT__A__v0 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [8U];
            __VdlySet__KeyGeneration__DOT__A__v0 = 1U;
            __VdlyVal__KeyGeneration__DOT__A__v1 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [9U];
            __VdlyVal__KeyGeneration__DOT__A__v2 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0xaU];
            __VdlyVal__KeyGeneration__DOT__A__v3 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0xbU];
            __VdlyVal__KeyGeneration__DOT__A__v4 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0xcU];
            __VdlyVal__KeyGeneration__DOT__A__v5 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0xdU];
            __VdlyVal__KeyGeneration__DOT__A__v6 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0xeU];
            __VdlyVal__KeyGeneration__DOT__A__v7 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0xfU];
            __VdlyVal__KeyGeneration__DOT__A__v8 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x10U];
            __VdlyVal__KeyGeneration__DOT__A__v9 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x11U];
            __VdlyVal__KeyGeneration__DOT__A__v10 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x12U];
            __VdlyVal__KeyGeneration__DOT__A__v11 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x13U];
            __VdlyVal__KeyGeneration__DOT__A__v12 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x14U];
            __VdlyVal__KeyGeneration__DOT__A__v13 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x15U];
            __VdlyVal__KeyGeneration__DOT__A__v14 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x16U];
            __VdlyVal__KeyGeneration__DOT__A__v15 = 
                vlSelf->KeyGeneration__DOT__rand_num
                [0x17U];
            vlSelf->KeyGeneration__DOT__stop_random_generation = 1U;
        }
    } else {
        __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v4 = 1U;
        __VdlySet__KeyGeneration__DOT__e__v8 = 1U;
        __VdlySet__secretkey__v8 = 1U;
        __VdlySet__KeyGeneration__DOT__A__v16 = 1U;
        vlSelf->KeyGeneration__DOT__stop_random_generation = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__31__KET____DOT__rng__DOT__generate_random_number__31__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__30__KET____DOT__rng__DOT__generate_random_number__30__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__29__KET____DOT__rng__DOT__generate_random_number__29__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__28__KET____DOT__rng__DOT__generate_random_number__28__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__27__KET____DOT__rng__DOT__generate_random_number__27__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__26__KET____DOT__rng__DOT__generate_random_number__26__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__25__KET____DOT__rng__DOT__generate_random_number__25__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__24__KET____DOT__rng__DOT__generate_random_number__24__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__23__KET____DOT__rng__DOT__generate_random_number__23__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__22__KET____DOT__rng__DOT__generate_random_number__22__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__21__KET____DOT__rng__DOT__generate_random_number__21__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__20__KET____DOT__rng__DOT__generate_random_number__20__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__19__KET____DOT__rng__DOT__generate_random_number__19__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__18__KET____DOT__rng__DOT__generate_random_number__18__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__17__KET____DOT__rng__DOT__generate_random_number__17__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__16__KET____DOT__rng__DOT__generate_random_number__16__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__15__KET____DOT__rng__DOT__generate_random_number__15__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__14__KET____DOT__rng__DOT__generate_random_number__14__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__13__KET____DOT__rng__DOT__generate_random_number__13__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__12__KET____DOT__rng__DOT__generate_random_number__12__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__11__KET____DOT__rng__DOT__generate_random_number__11__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__10__KET____DOT__rng__DOT__generate_random_number__10__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__9__KET____DOT__rng__DOT__generate_random_number__9__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__8__KET____DOT__rng__DOT__generate_random_number__8__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__7__KET____DOT__rng__DOT__generate_random_number__7__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__6__KET____DOT__rng__DOT__generate_random_number__6__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__5__KET____DOT__rng__DOT__generate_random_number__5__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__4__KET____DOT__rng__DOT__generate_random_number__4__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__3__KET____DOT__rng__DOT__generate_random_number__3__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__2__KET____DOT__rng__DOT__generate_random_number__2__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__1__KET____DOT__rng__DOT__generate_random_number__1__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout);
            vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number 
                = __Vfunc_KeyGeneration__DOT__rng_loop__BRA__0__KET____DOT__rng__DOT__generate_random_number__0__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number = 0U;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v0;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v1;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v2;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out__v4) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v0;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v1;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v2;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out__v4) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v0;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v1;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v2;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out__v4) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[0U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v0;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[1U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v1;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[2U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v2;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[3U] 
            = __VdlyVal__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v3;
    }
    if (__VdlySet__KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out__v4) {
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[0U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[1U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[2U] = 0U;
        vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[3U] = 0U;
    }
    if (__VdlySet__KeyGeneration__DOT__e__v0) {
        vlSelf->KeyGeneration__DOT__e[0U][0U] = __VdlyVal__KeyGeneration__DOT__e__v0;
        vlSelf->KeyGeneration__DOT__e[0U][1U] = __VdlyVal__KeyGeneration__DOT__e__v1;
        vlSelf->KeyGeneration__DOT__e[0U][2U] = __VdlyVal__KeyGeneration__DOT__e__v2;
        vlSelf->KeyGeneration__DOT__e[0U][3U] = __VdlyVal__KeyGeneration__DOT__e__v3;
        vlSelf->KeyGeneration__DOT__e[1U][0U] = __VdlyVal__KeyGeneration__DOT__e__v4;
        vlSelf->KeyGeneration__DOT__e[1U][1U] = __VdlyVal__KeyGeneration__DOT__e__v5;
        vlSelf->KeyGeneration__DOT__e[1U][2U] = __VdlyVal__KeyGeneration__DOT__e__v6;
        vlSelf->KeyGeneration__DOT__e[1U][3U] = __VdlyVal__KeyGeneration__DOT__e__v7;
    }
    if (__VdlySet__KeyGeneration__DOT__e__v8) {
        vlSelf->KeyGeneration__DOT__e[0U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__e[0U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__e[0U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__e[0U][3U] = 0U;
        vlSelf->KeyGeneration__DOT__e[1U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__e[1U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__e[1U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__e[1U][3U] = 0U;
    }
    if (__VdlySet__secretkey__v0) {
        vlSelf->secretkey[0U][0U] = __VdlyVal__secretkey__v0;
        vlSelf->secretkey[0U][1U] = __VdlyVal__secretkey__v1;
        vlSelf->secretkey[0U][2U] = __VdlyVal__secretkey__v2;
        vlSelf->secretkey[0U][3U] = __VdlyVal__secretkey__v3;
        vlSelf->secretkey[1U][0U] = __VdlyVal__secretkey__v4;
        vlSelf->secretkey[1U][1U] = __VdlyVal__secretkey__v5;
        vlSelf->secretkey[1U][2U] = __VdlyVal__secretkey__v6;
        vlSelf->secretkey[1U][3U] = __VdlyVal__secretkey__v7;
    }
    if (__VdlySet__secretkey__v8) {
        vlSelf->secretkey[0U][0U] = 0U;
        vlSelf->secretkey[0U][1U] = 0U;
        vlSelf->secretkey[0U][2U] = 0U;
        vlSelf->secretkey[0U][3U] = 0U;
        vlSelf->secretkey[1U][0U] = 0U;
        vlSelf->secretkey[1U][1U] = 0U;
        vlSelf->secretkey[1U][2U] = 0U;
        vlSelf->secretkey[1U][3U] = 0U;
    }
    if (__VdlySet__KeyGeneration__DOT__A__v0) {
        vlSelf->KeyGeneration__DOT__A[0U][0U] = __VdlyVal__KeyGeneration__DOT__A__v0;
        vlSelf->KeyGeneration__DOT__A[0U][1U] = __VdlyVal__KeyGeneration__DOT__A__v1;
        vlSelf->KeyGeneration__DOT__A[0U][2U] = __VdlyVal__KeyGeneration__DOT__A__v2;
        vlSelf->KeyGeneration__DOT__A[0U][3U] = __VdlyVal__KeyGeneration__DOT__A__v3;
        vlSelf->KeyGeneration__DOT__A[1U][0U] = __VdlyVal__KeyGeneration__DOT__A__v4;
        vlSelf->KeyGeneration__DOT__A[1U][1U] = __VdlyVal__KeyGeneration__DOT__A__v5;
        vlSelf->KeyGeneration__DOT__A[1U][2U] = __VdlyVal__KeyGeneration__DOT__A__v6;
        vlSelf->KeyGeneration__DOT__A[1U][3U] = __VdlyVal__KeyGeneration__DOT__A__v7;
        vlSelf->KeyGeneration__DOT__A[2U][0U] = __VdlyVal__KeyGeneration__DOT__A__v8;
        vlSelf->KeyGeneration__DOT__A[2U][1U] = __VdlyVal__KeyGeneration__DOT__A__v9;
        vlSelf->KeyGeneration__DOT__A[2U][2U] = __VdlyVal__KeyGeneration__DOT__A__v10;
        vlSelf->KeyGeneration__DOT__A[2U][3U] = __VdlyVal__KeyGeneration__DOT__A__v11;
        vlSelf->KeyGeneration__DOT__A[3U][0U] = __VdlyVal__KeyGeneration__DOT__A__v12;
        vlSelf->KeyGeneration__DOT__A[3U][1U] = __VdlyVal__KeyGeneration__DOT__A__v13;
        vlSelf->KeyGeneration__DOT__A[3U][2U] = __VdlyVal__KeyGeneration__DOT__A__v14;
        vlSelf->KeyGeneration__DOT__A[3U][3U] = __VdlyVal__KeyGeneration__DOT__A__v15;
    }
    if (__VdlySet__KeyGeneration__DOT__A__v16) {
        vlSelf->KeyGeneration__DOT__A[0U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__A[0U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__A[0U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__A[0U][3U] = 0U;
        vlSelf->KeyGeneration__DOT__A[1U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__A[1U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__A[1U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__A[1U][3U] = 0U;
        vlSelf->KeyGeneration__DOT__A[2U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__A[2U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__A[2U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__A[2U][3U] = 0U;
        vlSelf->KeyGeneration__DOT__A[3U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__A[3U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__A[3U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__A[3U][3U] = 0U;
    }
    vlSelf->KeyGeneration__DOT__poly_out3[3U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out
        [3U];
    vlSelf->KeyGeneration__DOT__poly_out3[2U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out
        [2U];
    vlSelf->KeyGeneration__DOT__poly_out3[1U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out
        [1U];
    vlSelf->KeyGeneration__DOT__poly_out3[0U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out
        [0U];
    vlSelf->KeyGeneration__DOT__poly_out2[3U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out
        [3U];
    vlSelf->KeyGeneration__DOT__poly_out2[2U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out
        [2U];
    vlSelf->KeyGeneration__DOT__poly_out2[1U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out
        [1U];
    vlSelf->KeyGeneration__DOT__poly_out2[0U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out
        [0U];
    vlSelf->KeyGeneration__DOT__poly_out1[3U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out
        [3U];
    vlSelf->KeyGeneration__DOT__poly_out1[2U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out
        [2U];
    vlSelf->KeyGeneration__DOT__poly_out1[1U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out
        [1U];
    vlSelf->KeyGeneration__DOT__poly_out1[0U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out
        [0U];
    vlSelf->KeyGeneration__DOT__poly_out0[3U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out
        [3U];
    vlSelf->KeyGeneration__DOT__poly_out0[2U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out
        [2U];
    vlSelf->KeyGeneration__DOT__poly_out0[1U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out
        [1U];
    vlSelf->KeyGeneration__DOT__poly_out0[0U] = vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out
        [0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->secretkey[0U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->secretkey[0U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->secretkey[0U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->secretkey[0U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->secretkey[1U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->secretkey[1U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->secretkey[1U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->secretkey[1U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->secretkey[0U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->secretkey[0U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->secretkey[0U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->secretkey[0U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->secretkey[1U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->secretkey[1U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->secretkey[1U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->secretkey[1U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->KeyGeneration__DOT__A[0U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->KeyGeneration__DOT__A[0U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->KeyGeneration__DOT__A[0U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->KeyGeneration__DOT__A[0U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->KeyGeneration__DOT__A[1U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->KeyGeneration__DOT__A[1U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->KeyGeneration__DOT__A[1U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->KeyGeneration__DOT__A[1U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->KeyGeneration__DOT__A[2U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->KeyGeneration__DOT__A[2U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->KeyGeneration__DOT__A[2U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->KeyGeneration__DOT__A[2U][0U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->KeyGeneration__DOT__A[3U][3U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->KeyGeneration__DOT__A[3U][2U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->KeyGeneration__DOT__A[3U][1U];
    vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->KeyGeneration__DOT__A[3U][0U];
    if (vlSelf->enable) {
        vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable 
            = (1U & (~ (IData)(vlSelf->KeyGeneration__DOT__stop_random_generation)));
        vlSelf->KeyGeneration__DOT__rand_num[0x1fU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1eU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1dU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1cU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1bU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1aU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x19U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x18U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x17U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x16U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x15U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x14U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x13U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x12U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x11U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x10U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xfU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xeU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xdU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xcU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xbU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xaU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[9U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[8U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[7U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[6U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[5U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[4U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[3U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[2U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[1U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__added[0U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[0U] = 0U;
        vlSelf->result[0U][0U] = 0U;
        vlSelf->result[1U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__added[1U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[1U] = 0U;
        vlSelf->result[0U][1U] = 0U;
        vlSelf->result[1U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__added[2U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[2U] = 0U;
        vlSelf->result[0U][2U] = 0U;
        vlSelf->result[1U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__added[3U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[3U] = 0U;
        vlSelf->result[0U][3U] = 0U;
        vlSelf->result[1U][3U] = 0U;
        vlSelf->KeyGeneration__DOT__added[0U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [0U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [0U]);
        vlSelf->KeyGeneration__DOT__added1[0U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [0U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [0U]);
        vlSelf->KeyGeneration__DOT__added[0U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [0U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[0U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [0U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [0U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [0U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[1U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [1U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [1U]);
        vlSelf->KeyGeneration__DOT__added1[1U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [1U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [1U]);
        vlSelf->KeyGeneration__DOT__added[1U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [1U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[1U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [1U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [1U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [1U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[2U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [2U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [2U]);
        vlSelf->KeyGeneration__DOT__added1[2U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [2U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [2U]);
        vlSelf->KeyGeneration__DOT__added[2U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [2U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[2U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [2U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [2U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [2U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added[3U] = (vlSelf->KeyGeneration__DOT__poly_out0
                                                 [3U] 
                                                 + 
                                                 vlSelf->KeyGeneration__DOT__poly_out1
                                                 [3U]);
        vlSelf->KeyGeneration__DOT__added1[3U] = (vlSelf->KeyGeneration__DOT__poly_out2
                                                  [3U] 
                                                  + 
                                                  vlSelf->KeyGeneration__DOT__poly_out3
                                                  [3U]);
        vlSelf->KeyGeneration__DOT__added[3U] = (VL_GTS_III(32, 0U, 
                                                            vlSelf->KeyGeneration__DOT__added
                                                            [3U])
                                                  ? 
                                                 VL_MODDIVS_III(32, 
                                                                ((IData)(0x11U) 
                                                                 + 
                                                                 VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                  : 
                                                 VL_MODDIVS_III(32, 
                                                                vlSelf->KeyGeneration__DOT__added
                                                                [3U], (IData)(0x11U)));
        vlSelf->KeyGeneration__DOT__added1[3U] = (VL_GTS_III(32, 0U, 
                                                             vlSelf->KeyGeneration__DOT__added1
                                                             [3U])
                                                   ? 
                                                  VL_MODDIVS_III(32, 
                                                                 ((IData)(0x11U) 
                                                                  + 
                                                                  VL_MODDIVS_III(32, 
                                                                                vlSelf->KeyGeneration__DOT__added1
                                                                                [3U], (IData)(0x11U))), (IData)(0x11U))
                                                   : 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__added1
                                                                 [3U], (IData)(0x11U)));
        vlSelf->result[0U][0U] = (vlSelf->KeyGeneration__DOT__added
                                  [0U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][0U]);
        vlSelf->result[1U][0U] = (vlSelf->KeyGeneration__DOT__added1
                                  [0U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][0U]);
        vlSelf->result[0U][1U] = (vlSelf->KeyGeneration__DOT__added
                                  [1U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][1U]);
        vlSelf->result[1U][1U] = (vlSelf->KeyGeneration__DOT__added1
                                  [1U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][1U]);
        vlSelf->result[0U][2U] = (vlSelf->KeyGeneration__DOT__added
                                  [2U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][2U]);
        vlSelf->result[1U][2U] = (vlSelf->KeyGeneration__DOT__added1
                                  [2U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][2U]);
        vlSelf->result[0U][3U] = (vlSelf->KeyGeneration__DOT__added
                                  [3U] + vlSelf->KeyGeneration__DOT__e
                                  [0U][3U]);
        vlSelf->result[1U][3U] = (vlSelf->KeyGeneration__DOT__added1
                                  [3U] + vlSelf->KeyGeneration__DOT__e
                                  [1U][3U]);
    } else {
        vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable = 0U;
        vlSelf->KeyGeneration__DOT__rand_num[0x1fU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1eU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1dU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1cU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1bU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x1aU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x19U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x18U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x17U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x16U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x15U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x14U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x13U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x12U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x11U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0x10U] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xfU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xeU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xdU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xcU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xbU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0xaU] 
            = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[9U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[8U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[7U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[6U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[5U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[4U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[3U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[2U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[1U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__rand_num[0U] = vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
        vlSelf->KeyGeneration__DOT__added[0U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[0U] = 0U;
        vlSelf->result[0U][0U] = 0U;
        vlSelf->result[1U][0U] = 0U;
        vlSelf->KeyGeneration__DOT__added[1U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[1U] = 0U;
        vlSelf->result[0U][1U] = 0U;
        vlSelf->result[1U][1U] = 0U;
        vlSelf->KeyGeneration__DOT__added[2U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[2U] = 0U;
        vlSelf->result[0U][2U] = 0U;
        vlSelf->result[1U][2U] = 0U;
        vlSelf->KeyGeneration__DOT__added[3U] = 0U;
        vlSelf->KeyGeneration__DOT__added1[3U] = 0U;
        vlSelf->result[0U][3U] = 0U;
        vlSelf->result[1U][3U] = 0U;
    }
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

void VKeyGeneration___024root___eval_triggers__act(VKeyGeneration___024root* vlSelf);

bool VKeyGeneration___024root___eval_phase__act(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VKeyGeneration___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VKeyGeneration___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VKeyGeneration___024root___eval_phase__nba(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VKeyGeneration___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__ico(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__nba(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VKeyGeneration___024root___dump_triggers__act(VKeyGeneration___024root* vlSelf);
#endif  // VL_DEBUG

void VKeyGeneration___024root___eval(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval\n"); );
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
            VKeyGeneration___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("KeyGeneration.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VKeyGeneration___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VKeyGeneration___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("KeyGeneration.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VKeyGeneration___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("KeyGeneration.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VKeyGeneration___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VKeyGeneration___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VKeyGeneration___024root___eval_debug_assertions(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
