// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDecrypt.h for the primary calling header

#ifndef VERILATED_VDECRYPT___024ROOT_H_
#define VERILATED_VDECRYPT___024ROOT_H_  // guard

#include "verilated.h"


class VDecrypt__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDecrypt___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(m_b,3,0);
    VL_OUT8(decimal_value,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN(secret_key[2][4],31,0);
    VL_IN(ciphertext[2][2][4],31,0);
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT__poly_out0;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT__poly_out1;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT__temp_m_n;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT____Vcellinp__poly_mult1__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT____Vcellinp__poly_mult1__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT____Vcellinp__poly_mult2__polynomial2;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT____Vcellinp__poly_mult2__polynomial1;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT__poly_mult1__DOT__temp_result;
    VlUnpacked<IData/*31:0*/, 4> Decrypt__DOT__poly_mult2__DOT__temp_result;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDecrypt__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDecrypt___024root(VDecrypt__Syms* symsp, const char* v__name);
    ~VDecrypt___024root();
    VL_UNCOPYABLE(VDecrypt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
