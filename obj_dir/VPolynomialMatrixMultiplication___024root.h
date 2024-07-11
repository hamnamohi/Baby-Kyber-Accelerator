// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPolynomialMatrixMultiplication.h for the primary calling header

#ifndef VERILATED_VPOLYNOMIALMATRIXMULTIPLICATION___024ROOT_H_
#define VERILATED_VPOLYNOMIALMATRIXMULTIPLICATION___024ROOT_H_  // guard

#include "verilated.h"


class VPolynomialMatrixMultiplication__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPolynomialMatrixMultiplication___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN(polynomial1[4],31,0);
    VL_IN(polynomial2[4],31,0);
    VL_OUT(polynomial_out[4],31,0);
    VlUnpacked<IData/*31:0*/, 4> PolynomialMatrixMultiplication__DOT__temp_result;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPolynomialMatrixMultiplication__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPolynomialMatrixMultiplication___024root(VPolynomialMatrixMultiplication__Syms* symsp, const char* v__name);
    ~VPolynomialMatrixMultiplication___024root();
    VL_UNCOPYABLE(VPolynomialMatrixMultiplication___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
