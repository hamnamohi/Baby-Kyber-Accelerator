// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMatrixTranspose.h for the primary calling header

#include "VMatrixTranspose__pch.h"
#include "VMatrixTranspose__Syms.h"
#include "VMatrixTranspose___024root.h"

void VMatrixTranspose___024root___ctor_var_reset(VMatrixTranspose___024root* vlSelf);

VMatrixTranspose___024root::VMatrixTranspose___024root(VMatrixTranspose__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMatrixTranspose___024root___ctor_var_reset(this);
}

void VMatrixTranspose___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMatrixTranspose___024root::~VMatrixTranspose___024root() {
}
