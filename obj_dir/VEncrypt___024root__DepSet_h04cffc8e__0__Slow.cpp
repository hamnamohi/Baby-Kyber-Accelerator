// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncrypt.h for the primary calling header

#include "VEncrypt__pch.h"
#include "VEncrypt__Syms.h"
#include "VEncrypt___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VEncrypt___024root___dump_triggers__stl(VEncrypt___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VEncrypt___024root___eval_triggers__stl(VEncrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VEncrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEncrypt___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VEncrypt___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
