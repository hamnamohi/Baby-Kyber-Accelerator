// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRandomNumberGenerator.h for the primary calling header

#ifndef VERILATED_VRANDOMNUMBERGENERATOR___024ROOT_H_
#define VERILATED_VRANDOMNUMBERGENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class VRandomNumberGenerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRandomNumberGenerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(random_number,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRandomNumberGenerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRandomNumberGenerator___024root(VRandomNumberGenerator__Syms* symsp, const char* v__name);
    ~VRandomNumberGenerator___024root();
    VL_UNCOPYABLE(VRandomNumberGenerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
