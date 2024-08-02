// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEncrypt.h for the primary calling header

#ifndef VERILATED_VENCRYPT___024ROOT_H_
#define VERILATED_VENCRYPT___024ROOT_H_  // guard

#include "verilated.h"


class VEncrypt__Syms;

class alignas(VL_CACHE_LINE_BYTES) VEncrypt___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(enable,0,0);
        CData/*0:0*/ Encrypt__DOT__stop_random_generation;
        CData/*3:0*/ Encrypt__DOT__coefficients;
        CData/*0:0*/ Encrypt__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable;
        CData/*7:0*/ Encrypt__DOT__dec_to_bit__DOT__bit_list;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactContinue;
        VL_IN(message,31,0);
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number;
        IData/*31:0*/ Encrypt__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ Encrypt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ Encrypt__DOT__unnamedblk3__DOT__i;
        IData/*31:0*/ Encrypt__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ Encrypt__DOT__unnamedblk6__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VL_IN(combined_output[2][4][4],31,0);
        VL_OUT(ciphertext[2][2][4],31,0);
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Encrypt__DOT__r;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Encrypt__DOT__e1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__e2;
        VlUnpacked<IData/*31:0*/, 20> Encrypt__DOT__rand_num;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Encrypt__DOT__transposed_matrix;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out0;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out3;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out4;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_out5;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__added;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__added1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__added2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__coefficients_scaled;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 2> Encrypt__DOT__u;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__v;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 4> Encrypt__DOT____Vcellinp__transpose_inst__matrix_in;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst1__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial2;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst2__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst3__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst4__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial2;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT____Vcellinp__poly_mult_inst5__polynomial1;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst1__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst2__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst3__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst4__DOT__temp_result;
        VlUnpacked<IData/*31:0*/, 4> Encrypt__DOT__poly_mult_inst5__DOT__temp_result;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VEncrypt__Syms* const vlSymsp;

    // CONSTRUCTORS
    VEncrypt___024root(VEncrypt__Syms* symsp, const char* v__name);
    ~VEncrypt___024root();
    VL_UNCOPYABLE(VEncrypt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
