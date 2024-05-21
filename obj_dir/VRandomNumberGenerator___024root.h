// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRandomNumberGenerator.h for the primary calling header

#ifndef VERILATED_VRANDOMNUMBERGENERATOR___024ROOT_H_
#define VERILATED_VRANDOMNUMBERGENERATOR___024ROOT_H_  // guard

#include "verilated.h"

class VRandomNumberGenerator__Syms;

class VRandomNumberGenerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(enable,0,0);
    VL_OUT8(random_number,5,0);
    CData/*5:0*/ rng__DOT__rand_value;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;

    // INTERNAL VARIABLES
    VRandomNumberGenerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRandomNumberGenerator___024root(VRandomNumberGenerator__Syms* symsp, const char* name);
    ~VRandomNumberGenerator___024root();
    VL_UNCOPYABLE(VRandomNumberGenerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
