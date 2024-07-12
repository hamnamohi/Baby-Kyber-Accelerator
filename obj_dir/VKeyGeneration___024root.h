// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VKeyGeneration.h for the primary calling header

#ifndef VERILATED_VKEYGENERATION___024ROOT_H_
#define VERILATED_VKEYGENERATION___024ROOT_H_  // guard

#include "verilated.h"


class VKeyGeneration__Syms;

class alignas(VL_CACHE_LINE_BYTES) VKeyGeneration___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ KeyGeneration__DOT__rand_num0;
    IData/*31:0*/ KeyGeneration__DOT__rand_num1;
    IData/*31:0*/ KeyGeneration__DOT__rand_num2;
    IData/*31:0*/ KeyGeneration__DOT__rand_num3;
    IData/*31:0*/ KeyGeneration__DOT__rand_num4;
    IData/*31:0*/ KeyGeneration__DOT__rand_num5;
    IData/*31:0*/ KeyGeneration__DOT__rand_num6;
    IData/*31:0*/ KeyGeneration__DOT__rand_num7;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(keys[2][4],31,0);
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VKeyGeneration__Syms* const vlSymsp;

    // CONSTRUCTORS
    VKeyGeneration___024root(VKeyGeneration__Syms* symsp, const char* v__name);
    ~VKeyGeneration___024root();
    VL_UNCOPYABLE(VKeyGeneration___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
