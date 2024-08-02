// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecrypt.h for the primary calling header

#include "VDecrypt__pch.h"
#include "VDecrypt__Syms.h"
#include "VDecrypt___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecrypt___024root___dump_triggers__stl(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VDecrypt___024root___eval_triggers__stl(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDecrypt___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
