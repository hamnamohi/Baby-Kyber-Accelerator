// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKeyGeneration.h for the primary calling header

#include "VKeyGeneration__pch.h"
#include "VKeyGeneration__Syms.h"
#include "VKeyGeneration___024root.h"

void VKeyGeneration___024root___ctor_var_reset(VKeyGeneration___024root* vlSelf);

VKeyGeneration___024root::VKeyGeneration___024root(VKeyGeneration__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VKeyGeneration___024root___ctor_var_reset(this);
}

void VKeyGeneration___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VKeyGeneration___024root::~VKeyGeneration___024root() {
}
