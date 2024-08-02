// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDecrypt.h for the primary calling header

#include "VDecrypt__pch.h"
#include "VDecrypt__Syms.h"
#include "VDecrypt___024root.h"

void VDecrypt___024root___ctor_var_reset(VDecrypt___024root* vlSelf);

VDecrypt___024root::VDecrypt___024root(VDecrypt__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDecrypt___024root___ctor_var_reset(this);
}

void VDecrypt___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VDecrypt___024root::~VDecrypt___024root() {
}
