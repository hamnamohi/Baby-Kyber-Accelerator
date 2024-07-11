// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPolynomialMatrixMultiplication.h for the primary calling header

#include "VPolynomialMatrixMultiplication__pch.h"
#include "VPolynomialMatrixMultiplication__Syms.h"
#include "VPolynomialMatrixMultiplication___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root___dump_triggers__stl(VPolynomialMatrixMultiplication___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPolynomialMatrixMultiplication___024root___eval_triggers__stl(VPolynomialMatrixMultiplication___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VPolynomialMatrixMultiplication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPolynomialMatrixMultiplication___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPolynomialMatrixMultiplication___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
