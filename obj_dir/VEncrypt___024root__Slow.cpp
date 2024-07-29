// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEncrypt.h for the primary calling header

#include "VEncrypt__pch.h"
#include "VEncrypt__Syms.h"
#include "VEncrypt___024root.h"

void VEncrypt___024root___ctor_var_reset(VEncrypt___024root* vlSelf);

VEncrypt___024root::VEncrypt___024root(VEncrypt__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VEncrypt___024root___ctor_var_reset(this);
}

void VEncrypt___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VEncrypt___024root::~VEncrypt___024root() {
}
