// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMatrixTranspose.h for the primary calling header

#include "VMatrixTranspose__pch.h"
#include "VMatrixTranspose___024root.h"

void VMatrixTranspose___024root___ico_sequent__TOP__0(VMatrixTranspose___024root* vlSelf);

void VMatrixTranspose___024root___eval_ico(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMatrixTranspose___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VMatrixTranspose___024root___ico_sequent__TOP__0(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->matrix_out[0U][3U] = vlSelf->matrix_in[0U]
        [3U];
    vlSelf->matrix_out[0U][2U] = vlSelf->matrix_in[0U]
        [2U];
    vlSelf->matrix_out[0U][1U] = vlSelf->matrix_in[0U]
        [1U];
    vlSelf->matrix_out[0U][0U] = vlSelf->matrix_in[0U]
        [0U];
    vlSelf->matrix_out[1U][3U] = vlSelf->matrix_in[2U]
        [3U];
    vlSelf->matrix_out[1U][2U] = vlSelf->matrix_in[2U]
        [2U];
    vlSelf->matrix_out[1U][1U] = vlSelf->matrix_in[2U]
        [1U];
    vlSelf->matrix_out[1U][0U] = vlSelf->matrix_in[2U]
        [0U];
    vlSelf->matrix_out[2U][3U] = vlSelf->matrix_in[1U]
        [3U];
    vlSelf->matrix_out[2U][2U] = vlSelf->matrix_in[1U]
        [2U];
    vlSelf->matrix_out[2U][1U] = vlSelf->matrix_in[1U]
        [1U];
    vlSelf->matrix_out[2U][0U] = vlSelf->matrix_in[1U]
        [0U];
    vlSelf->matrix_out[3U][3U] = vlSelf->matrix_in[3U]
        [3U];
    vlSelf->matrix_out[3U][2U] = vlSelf->matrix_in[3U]
        [2U];
    vlSelf->matrix_out[3U][1U] = vlSelf->matrix_in[3U]
        [1U];
    vlSelf->matrix_out[3U][0U] = vlSelf->matrix_in[3U]
        [0U];
}

void VMatrixTranspose___024root___eval_triggers__ico(VMatrixTranspose___024root* vlSelf);

bool VMatrixTranspose___024root___eval_phase__ico(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMatrixTranspose___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMatrixTranspose___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMatrixTranspose___024root___eval_act(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_act\n"); );
}

void VMatrixTranspose___024root___eval_nba(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_nba\n"); );
}

void VMatrixTranspose___024root___eval_triggers__act(VMatrixTranspose___024root* vlSelf);

bool VMatrixTranspose___024root___eval_phase__act(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMatrixTranspose___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMatrixTranspose___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMatrixTranspose___024root___eval_phase__nba(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMatrixTranspose___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__ico(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__nba(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__act(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG

void VMatrixTranspose___024root___eval(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval\n"); );
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
            VMatrixTranspose___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("MatrixTranspose.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMatrixTranspose___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMatrixTranspose___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("MatrixTranspose.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMatrixTranspose___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("MatrixTranspose.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMatrixTranspose___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMatrixTranspose___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMatrixTranspose___024root___eval_debug_assertions(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
