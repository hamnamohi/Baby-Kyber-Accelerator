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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(enable,0,0);
        CData/*0:0*/ KeyGeneration__DOT__stop_random_generation;
        CData/*0:0*/ KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number;
        IData/*31:0*/ KeyGeneration__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ KeyGeneration__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ KeyGeneration__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
        IData/*31:0*/ KeyGeneration__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ KeyGeneration__DOT__unnamedblk7__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(secretkey[2][4],31,0);
        VL_OUT(result[2][4],31,0);
        VlUnpacked<IData/*31:0*/, 32> KeyGeneration__DOT__rand_num;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> KeyGeneration__DOT__A;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> KeyGeneration__DOT__e;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out0;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_out3;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__added;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__added1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult0__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult1__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult2__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> KeyGeneration__DOT__poly_mult3__DOT__temp_result;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
