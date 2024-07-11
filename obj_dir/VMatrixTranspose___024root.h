// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMatrixTranspose.h for the primary calling header

#ifndef VERILATED_VMATRIXTRANSPOSE___024ROOT_H_
#define VERILATED_VMATRIXTRANSPOSE___024ROOT_H_  // guard

#include "verilated.h"


class VMatrixTranspose__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMatrixTranspose___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN(matrix_in[4][4],31,0);
    VL_OUT(matrix_out[4][4],31,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMatrixTranspose__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMatrixTranspose___024root(VMatrixTranspose__Syms* symsp, const char* v__name);
    ~VMatrixTranspose___024root();
    VL_UNCOPYABLE(VMatrixTranspose___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
