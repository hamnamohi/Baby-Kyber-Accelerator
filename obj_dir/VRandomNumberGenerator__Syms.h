// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRANDOMNUMBERGENERATOR__SYMS_H_
#define VERILATED_VRANDOMNUMBERGENERATOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRandomNumberGenerator.h"

// INCLUDE MODULE CLASSES
#include "VRandomNumberGenerator___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRandomNumberGenerator__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRandomNumberGenerator* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRandomNumberGenerator___024root TOP;

    // CONSTRUCTORS
    VRandomNumberGenerator__Syms(VerilatedContext* contextp, const char* namep, VRandomNumberGenerator* modelp);
    ~VRandomNumberGenerator__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
