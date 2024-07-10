// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRandomNumberGenerator.h for the primary calling header

#include "VRandomNumberGenerator__pch.h"
#include "VRandomNumberGenerator__Syms.h"
#include "VRandomNumberGenerator___024root.h"

void VRandomNumberGenerator___024root___ctor_var_reset(VRandomNumberGenerator___024root* vlSelf);

VRandomNumberGenerator___024root::VRandomNumberGenerator___024root(VRandomNumberGenerator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRandomNumberGenerator___024root___ctor_var_reset(this);
}

void VRandomNumberGenerator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VRandomNumberGenerator___024root::~VRandomNumberGenerator___024root() {
}
