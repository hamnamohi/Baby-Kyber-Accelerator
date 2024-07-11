// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMatrixTranspose.h for the primary calling header

#include "VMatrixTranspose__pch.h"
#include "VMatrixTranspose__Syms.h"
#include "VMatrixTranspose___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__ico(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG

void VMatrixTranspose___024root___eval_triggers__ico(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMatrixTranspose___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMatrixTranspose___024root___dump_triggers__act(VMatrixTranspose___024root* vlSelf);
#endif  // VL_DEBUG

void VMatrixTranspose___024root___eval_triggers__act(VMatrixTranspose___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VMatrixTranspose__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMatrixTranspose___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMatrixTranspose___024root___dump_triggers__act(vlSelf);
    }
#endif
}
