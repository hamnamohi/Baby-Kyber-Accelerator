// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_KeyGeneration1;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0__unnamedblk1;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0__unnamedblk2;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0__unnamedblk4;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult0__unnamedblk6;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1__unnamedblk1;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1__unnamedblk2;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1__unnamedblk4;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult1__unnamedblk6;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2__unnamedblk1;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2__unnamedblk2;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2__unnamedblk4;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult2__unnamedblk6;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3__unnamedblk1;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3__unnamedblk2;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3__unnamedblk2__unnamedblk3;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3__unnamedblk4;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3__unnamedblk4__unnamedblk5;
    VerilatedScope __Vscope_KeyGeneration1__poly_mult3__unnamedblk6;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk1;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk11;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk11__unnamedblk12;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk13;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk13__unnamedblk14;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk3;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk3__unnamedblk4;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk5;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk6;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk7;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk8;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk8__unnamedblk9;
    VerilatedScope __Vscope_KeyGeneration1__unnamedblk8__unnamedblk9__unnamedblk10;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
