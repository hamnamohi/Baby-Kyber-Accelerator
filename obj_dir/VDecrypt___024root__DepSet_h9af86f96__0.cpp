// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecrypt.h for the primary calling header

#include "VDecrypt__pch.h"
#include "VDecrypt__Syms.h"
#include "VDecrypt___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecrypt___024root___dump_triggers__ico(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG

void VDecrypt___024root___eval_triggers__ico(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDecrypt___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDecrypt___024root___dump_triggers__act(VDecrypt___024root* vlSelf);
#endif  // VL_DEBUG

void VDecrypt___024root___eval_triggers__act(VDecrypt___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecrypt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecrypt___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDecrypt___024root___dump_triggers__act(vlSelf);
    }
#endif
}
