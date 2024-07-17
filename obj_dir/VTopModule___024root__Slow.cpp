// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopModule.h for the primary calling header

#include "VTopModule__pch.h"
#include "VTopModule__Syms.h"
#include "VTopModule___024root.h"

void VTopModule___024root___ctor_var_reset(VTopModule___024root* vlSelf);

VTopModule___024root::VTopModule___024root(VTopModule__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTopModule___024root___ctor_var_reset(this);
}

void VTopModule___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VTopModule___024root::~VTopModule___024root() {
}
