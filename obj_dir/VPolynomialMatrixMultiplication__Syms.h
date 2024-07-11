// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPOLYNOMIALMATRIXMULTIPLICATION__SYMS_H_
#define VERILATED_VPOLYNOMIALMATRIXMULTIPLICATION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPolynomialMatrixMultiplication.h"

// INCLUDE MODULE CLASSES
#include "VPolynomialMatrixMultiplication___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VPolynomialMatrixMultiplication__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPolynomialMatrixMultiplication* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPolynomialMatrixMultiplication___024root TOP;

    // CONSTRUCTORS
    VPolynomialMatrixMultiplication__Syms(VerilatedContext* contextp, const char* namep, VPolynomialMatrixMultiplication* modelp);
    ~VPolynomialMatrixMultiplication__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
