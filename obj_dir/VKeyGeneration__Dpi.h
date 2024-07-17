// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VKEYGENERATION__DPI_H_
#define VERILATED_VKEYGENERATION__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at RandomNumberGenerator.sv:11:33
    extern int generate_random_number(int min_value, int max_value);

#ifdef __cplusplus
}
#endif

#endif  // guard
