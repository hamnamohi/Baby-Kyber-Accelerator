// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VKeyGeneration__pch.h"
#include "VKeyGeneration.h"
#include "VKeyGeneration___024root.h"

// FUNCTIONS
VKeyGeneration__Syms::~VKeyGeneration__Syms()
{
}

VKeyGeneration__Syms::VKeyGeneration__Syms(VerilatedContext* contextp, const char* namep, VKeyGeneration* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2223);
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
