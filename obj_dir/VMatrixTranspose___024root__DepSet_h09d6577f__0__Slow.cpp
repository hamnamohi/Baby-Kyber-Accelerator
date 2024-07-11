// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMatrixTranspose.h for the primary calling header

#include "VMatrixTranspose__pch.h"
#include "VMatrixTranspose___024root.h"

VL_ATTR_COLD void VMatrixTranspose___024root___eval_static(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMatrixTranspose___024root___eval_initial(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VMatrixTranspose___024root___eval_final(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__stl(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMatrixTranspose___024root___eval_phase__stl(VMatrixTranspose___024root* vlSelf);

VL_ATTR_COLD void VMatrixTranspose___024root___eval_settle(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_settle\n"); );
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
            VMatrixTranspose___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("MatrixTranspose.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMatrixTranspose___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__stl(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VMatrixTranspose___024root___ico_sequent__TOP__0(VMatrixTranspose___024root* vlSelf);

VL_ATTR_COLD void VMatrixTranspose___024root___eval_stl(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMatrixTranspose___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VMatrixTranspose___024root___eval_triggers__stl(VMatrixTranspose___024root* vlSelf);

VL_ATTR_COLD bool VMatrixTranspose___024root___eval_phase__stl(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMatrixTranspose___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMatrixTranspose___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__ico(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__act(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__nba(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMatrixTranspose___024root___ctor_var_reset(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___ctor_var_reset\n"); );
    // Body
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_in[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->matrix_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
}
