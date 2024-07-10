// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRandomNumberGenerator__pch.h"
#include "VRandomNumberGenerator.h"
#include "VRandomNumberGenerator___024root.h"

// FUNCTIONS
VRandomNumberGenerator__Syms::~VRandomNumberGenerator__Syms()
{
}

VRandomNumberGenerator__Syms::VRandomNumberGenerator__Syms(VerilatedContext* contextp, const char* namep, VRandomNumberGenerator* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(59);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
