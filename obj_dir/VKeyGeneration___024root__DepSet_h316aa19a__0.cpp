// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKeyGeneration.h for the primary calling header

#include "VKeyGeneration__pch.h"
#include "VKeyGeneration___024root.h"

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
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(IData/*31:0*/ min_value, IData/*31:0*/ max_value, IData/*31:0*/ &generate_random_number__Vfuncrtn);

VL_INLINE_OPT void VKeyGeneration___024root___nba_sequent__TOP__0(VKeyGeneration___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng0__DOT__generate_random_number__0__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng0__DOT__generate_random_number__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng1__DOT__generate_random_number__1__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng1__DOT__generate_random_number__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng2__DOT__generate_random_number__2__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng2__DOT__generate_random_number__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng3__DOT__generate_random_number__3__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng3__DOT__generate_random_number__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng4__DOT__generate_random_number__4__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng4__DOT__generate_random_number__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng5__DOT__generate_random_number__5__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng5__DOT__generate_random_number__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng6__DOT__generate_random_number__6__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng6__DOT__generate_random_number__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_KeyGeneration__DOT__rng7__DOT__generate_random_number__7__Vfuncout;
    __Vfunc_KeyGeneration__DOT__rng7__DOT__generate_random_number__7__Vfuncout = 0;
    IData/*31:0*/ __VdlyVal__keys__v0;
    __VdlyVal__keys__v0 = 0;
    IData/*31:0*/ __VdlyVal__keys__v1;
    __VdlyVal__keys__v1 = 0;
    IData/*31:0*/ __VdlyVal__keys__v2;
    __VdlyVal__keys__v2 = 0;
    IData/*31:0*/ __VdlyVal__keys__v3;
    __VdlyVal__keys__v3 = 0;
    IData/*31:0*/ __VdlyVal__keys__v4;
    __VdlyVal__keys__v4 = 0;
    IData/*31:0*/ __VdlyVal__keys__v5;
    __VdlyVal__keys__v5 = 0;
    IData/*31:0*/ __VdlyVal__keys__v6;
    __VdlyVal__keys__v6 = 0;
    IData/*31:0*/ __VdlyVal__keys__v7;
    __VdlyVal__keys__v7 = 0;
    CData/*0:0*/ __VdlySet__keys__v0;
    __VdlySet__keys__v0 = 0;
    CData/*0:0*/ __VdlySet__keys__v8;
    __VdlySet__keys__v8 = 0;
    // Body
    __VdlySet__keys__v0 = 0U;
    __VdlySet__keys__v8 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i = 2U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            __VdlyVal__keys__v0 = vlSelf->KeyGeneration__DOT__rand_num0;
            __VdlySet__keys__v0 = 1U;
            __VdlyVal__keys__v1 = vlSelf->KeyGeneration__DOT__rand_num1;
            __VdlyVal__keys__v2 = vlSelf->KeyGeneration__DOT__rand_num2;
            __VdlyVal__keys__v3 = vlSelf->KeyGeneration__DOT__rand_num3;
            __VdlyVal__keys__v4 = vlSelf->KeyGeneration__DOT__rand_num4;
            __VdlyVal__keys__v5 = vlSelf->KeyGeneration__DOT__rand_num5;
            __VdlyVal__keys__v6 = vlSelf->KeyGeneration__DOT__rand_num6;
            __VdlyVal__keys__v7 = vlSelf->KeyGeneration__DOT__rand_num7;
        }
    } else {
        __VdlySet__keys__v8 = 1U;
    }
    if (__VdlySet__keys__v0) {
        vlSelf->keys[0U][0U] = __VdlyVal__keys__v0;
        vlSelf->keys[0U][1U] = __VdlyVal__keys__v1;
        vlSelf->keys[0U][2U] = __VdlyVal__keys__v2;
        vlSelf->keys[0U][3U] = __VdlyVal__keys__v3;
        vlSelf->keys[1U][0U] = __VdlyVal__keys__v4;
        vlSelf->keys[1U][1U] = __VdlyVal__keys__v5;
        vlSelf->keys[1U][2U] = __VdlyVal__keys__v6;
        vlSelf->keys[1U][3U] = __VdlyVal__keys__v7;
    }
    if (__VdlySet__keys__v8) {
        vlSelf->keys[0U][0U] = 0U;
        vlSelf->keys[0U][1U] = 0U;
        vlSelf->keys[0U][2U] = 0U;
        vlSelf->keys[0U][3U] = 0U;
        vlSelf->keys[1U][0U] = 0U;
        vlSelf->keys[1U][1U] = 0U;
        vlSelf->keys[1U][2U] = 0U;
        vlSelf->keys[1U][3U] = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng0__DOT__generate_random_number__0__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num0 = __Vfunc_KeyGeneration__DOT__rng0__DOT__generate_random_number__0__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num0 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng1__DOT__generate_random_number__1__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num1 = __Vfunc_KeyGeneration__DOT__rng1__DOT__generate_random_number__1__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num1 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng2__DOT__generate_random_number__2__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num2 = __Vfunc_KeyGeneration__DOT__rng2__DOT__generate_random_number__2__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num2 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng3__DOT__generate_random_number__3__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num3 = __Vfunc_KeyGeneration__DOT__rng3__DOT__generate_random_number__3__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num3 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng4__DOT__generate_random_number__4__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num4 = __Vfunc_KeyGeneration__DOT__rng4__DOT__generate_random_number__4__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num4 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng5__DOT__generate_random_number__5__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num5 = __Vfunc_KeyGeneration__DOT__rng5__DOT__generate_random_number__5__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num5 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng6__DOT__generate_random_number__6__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num6 = __Vfunc_KeyGeneration__DOT__rng6__DOT__generate_random_number__6__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num6 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->enable) {
            VKeyGeneration___024root____Vdpiimwrap_KeyGeneration__DOT__rng0__DOT__generate_random_number_TOP(0xffffffefU, 0x11U, __Vfunc_KeyGeneration__DOT__rng7__DOT__generate_random_number__7__Vfuncout);
            vlSelf->KeyGeneration__DOT__rand_num7 = __Vfunc_KeyGeneration__DOT__rng7__DOT__generate_random_number__7__Vfuncout;
        }
    } else {
        vlSelf->KeyGeneration__DOT__rand_num7 = 0U;
    }
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
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
