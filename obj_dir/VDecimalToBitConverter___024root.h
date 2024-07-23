// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDecimalToBitConverter.h for the primary calling header

#ifndef VERILATED_VDECIMALTOBITCONVERTER___024ROOT_H_
#define VERILATED_VDECIMALTOBITCONVERTER___024ROOT_H_  // guard

#include "verilated.h"


class VDecimalToBitConverter__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDecimalToBitConverter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(coefficients,3,0);
    CData/*7:0*/ DecimalToBitConverter__DOT__bit_list;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(input_value,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDecimalToBitConverter__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDecimalToBitConverter___024root(VDecimalToBitConverter__Syms* symsp, const char* v__name);
    ~VDecimalToBitConverter___024root();
    VL_UNCOPYABLE(VDecimalToBitConverter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
