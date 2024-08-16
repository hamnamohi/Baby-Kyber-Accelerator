// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(enable,0,0);
        CData/*0:0*/ KeyGeneration1__DOT__clk;
        CData/*0:0*/ KeyGeneration1__DOT__rst_n;
        CData/*0:0*/ KeyGeneration1__DOT__enable;
        CData/*0:0*/ KeyGeneration1__DOT__stop_random_generation;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult0__DOT__clk;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult0__DOT__rst_n;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult0__DOT__enable;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult1__DOT__clk;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult1__DOT__rst_n;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult1__DOT__enable;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult2__DOT__clk;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult2__DOT__rst_n;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult2__DOT__enable;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult3__DOT__clk;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult3__DOT__rst_n;
        CData/*0:0*/ KeyGeneration1__DOT__poly_mult3__DOT__enable;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk11__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk13__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk1__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk4__DOT__a;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk6__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk1__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk4__DOT__a;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk6__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk1__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk4__DOT__a;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk6__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk1__DOT__k;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk4__DOT__a;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b;
        IData/*31:0*/ KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk6__DOT__k;
        IData/*31:0*/ __VactIterCount;
        VL_IN(A1[4][4],31,0);
    };
    struct {
        VL_IN(e_[2][4],31,0);
        VL_IN(secret_key[2][4],31,0);
        VL_OUT(secretkey[2][4],31,0);
        VL_OUT(result[2][4],31,0);
        VL_OUT(combined_output[2][4][4],31,0);
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> KeyGeneration1__DOT__A1;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> KeyGeneration1__DOT__e_;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> KeyGeneration1__DOT__secret_key;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> KeyGeneration1__DOT__secretkey;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> KeyGeneration1__DOT__result;
        VlUnpacked<VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4>, 2> KeyGeneration1__DOT__combined_output;
        VlUnpacked<IData/*31:0*/, 32> KeyGeneration1__DOT__rand_num;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> KeyGeneration1__DOT__A;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> KeyGeneration1__DOT__e;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_out0;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_out1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_out2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_out3;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__added;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__added1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult0__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult1__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult2__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT____Vcellinp__poly_mult3__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult0__DOT__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult0__DOT__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult0__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult1__DOT__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult1__DOT__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult1__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult2__DOT__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult2__DOT__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult2__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult3__DOT__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult3__DOT__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration1__DOT__poly_mult3__DOT__temp_result;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
