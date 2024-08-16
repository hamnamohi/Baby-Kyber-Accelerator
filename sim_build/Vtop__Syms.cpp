// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_KeyGeneration1);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult0);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult1);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult2);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult3);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk1);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk11);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk13);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk3);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk5);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk6);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk7);
    __Vhier.remove(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk8);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk1);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk2);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk4);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk6);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult0__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk2__unnamedblk3);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult0__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk4__unnamedblk5);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk1);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk2);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk4);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk6);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult1__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk2__unnamedblk3);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult1__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk4__unnamedblk5);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk1);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk2);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk4);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk6);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult2__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk2__unnamedblk3);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult2__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk4__unnamedblk5);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk1);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk2);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk4);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk6);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult3__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk2__unnamedblk3);
    __Vhier.remove(&__Vscope_KeyGeneration1__poly_mult3__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk4__unnamedblk5);
    __Vhier.remove(&__Vscope_KeyGeneration1__unnamedblk1, &__Vscope_KeyGeneration1__unnamedblk1__unnamedblk2);
    __Vhier.remove(&__Vscope_KeyGeneration1__unnamedblk11, &__Vscope_KeyGeneration1__unnamedblk11__unnamedblk12);
    __Vhier.remove(&__Vscope_KeyGeneration1__unnamedblk13, &__Vscope_KeyGeneration1__unnamedblk13__unnamedblk14);
    __Vhier.remove(&__Vscope_KeyGeneration1__unnamedblk3, &__Vscope_KeyGeneration1__unnamedblk3__unnamedblk4);
    __Vhier.remove(&__Vscope_KeyGeneration1__unnamedblk8, &__Vscope_KeyGeneration1__unnamedblk8__unnamedblk9);
    __Vhier.remove(&__Vscope_KeyGeneration1__unnamedblk8__unnamedblk9, &__Vscope_KeyGeneration1__unnamedblk8__unnamedblk9__unnamedblk10);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(633);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_KeyGeneration1.configure(this, name(), "KeyGeneration1", "KeyGeneration1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_KeyGeneration1__poly_mult0.configure(this, name(), "KeyGeneration1.poly_mult0", "poly_mult0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_KeyGeneration1__poly_mult0__unnamedblk1.configure(this, name(), "KeyGeneration1.poly_mult0.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult0__unnamedblk2.configure(this, name(), "KeyGeneration1.poly_mult0.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult0__unnamedblk2__unnamedblk3.configure(this, name(), "KeyGeneration1.poly_mult0.unnamedblk2.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult0__unnamedblk4.configure(this, name(), "KeyGeneration1.poly_mult0.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult0__unnamedblk4__unnamedblk5.configure(this, name(), "KeyGeneration1.poly_mult0.unnamedblk4.unnamedblk5", "unnamedblk5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult0__unnamedblk6.configure(this, name(), "KeyGeneration1.poly_mult0.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult1.configure(this, name(), "KeyGeneration1.poly_mult1", "poly_mult1", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_KeyGeneration1__poly_mult1__unnamedblk1.configure(this, name(), "KeyGeneration1.poly_mult1.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult1__unnamedblk2.configure(this, name(), "KeyGeneration1.poly_mult1.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult1__unnamedblk2__unnamedblk3.configure(this, name(), "KeyGeneration1.poly_mult1.unnamedblk2.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult1__unnamedblk4.configure(this, name(), "KeyGeneration1.poly_mult1.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult1__unnamedblk4__unnamedblk5.configure(this, name(), "KeyGeneration1.poly_mult1.unnamedblk4.unnamedblk5", "unnamedblk5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult1__unnamedblk6.configure(this, name(), "KeyGeneration1.poly_mult1.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult2.configure(this, name(), "KeyGeneration1.poly_mult2", "poly_mult2", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_KeyGeneration1__poly_mult2__unnamedblk1.configure(this, name(), "KeyGeneration1.poly_mult2.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult2__unnamedblk2.configure(this, name(), "KeyGeneration1.poly_mult2.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult2__unnamedblk2__unnamedblk3.configure(this, name(), "KeyGeneration1.poly_mult2.unnamedblk2.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult2__unnamedblk4.configure(this, name(), "KeyGeneration1.poly_mult2.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult2__unnamedblk4__unnamedblk5.configure(this, name(), "KeyGeneration1.poly_mult2.unnamedblk4.unnamedblk5", "unnamedblk5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult2__unnamedblk6.configure(this, name(), "KeyGeneration1.poly_mult2.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult3.configure(this, name(), "KeyGeneration1.poly_mult3", "poly_mult3", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_KeyGeneration1__poly_mult3__unnamedblk1.configure(this, name(), "KeyGeneration1.poly_mult3.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult3__unnamedblk2.configure(this, name(), "KeyGeneration1.poly_mult3.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult3__unnamedblk2__unnamedblk3.configure(this, name(), "KeyGeneration1.poly_mult3.unnamedblk2.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult3__unnamedblk4.configure(this, name(), "KeyGeneration1.poly_mult3.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult3__unnamedblk4__unnamedblk5.configure(this, name(), "KeyGeneration1.poly_mult3.unnamedblk4.unnamedblk5", "unnamedblk5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__poly_mult3__unnamedblk6.configure(this, name(), "KeyGeneration1.poly_mult3.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk1.configure(this, name(), "KeyGeneration1.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk11.configure(this, name(), "KeyGeneration1.unnamedblk11", "unnamedblk11", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk11__unnamedblk12.configure(this, name(), "KeyGeneration1.unnamedblk11.unnamedblk12", "unnamedblk12", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk13.configure(this, name(), "KeyGeneration1.unnamedblk13", "unnamedblk13", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk13__unnamedblk14.configure(this, name(), "KeyGeneration1.unnamedblk13.unnamedblk14", "unnamedblk14", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk1__unnamedblk2.configure(this, name(), "KeyGeneration1.unnamedblk1.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk3.configure(this, name(), "KeyGeneration1.unnamedblk3", "unnamedblk3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk3__unnamedblk4.configure(this, name(), "KeyGeneration1.unnamedblk3.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk5.configure(this, name(), "KeyGeneration1.unnamedblk5", "unnamedblk5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk6.configure(this, name(), "KeyGeneration1.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk7.configure(this, name(), "KeyGeneration1.unnamedblk7", "unnamedblk7", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk8.configure(this, name(), "KeyGeneration1.unnamedblk8", "unnamedblk8", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk8__unnamedblk9.configure(this, name(), "KeyGeneration1.unnamedblk8.unnamedblk9", "unnamedblk9", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_KeyGeneration1__unnamedblk8__unnamedblk9__unnamedblk10.configure(this, name(), "KeyGeneration1.unnamedblk8.unnamedblk9.unnamedblk10", "unnamedblk10", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_KeyGeneration1);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult0);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult1);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult2);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__poly_mult3);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk1);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk11);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk13);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk3);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk5);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk6);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk7);
    __Vhier.add(&__Vscope_KeyGeneration1, &__Vscope_KeyGeneration1__unnamedblk8);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk1);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk2);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk4);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult0, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk6);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult0__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk2__unnamedblk3);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult0__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult0__unnamedblk4__unnamedblk5);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk1);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk2);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk4);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult1, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk6);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult1__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk2__unnamedblk3);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult1__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult1__unnamedblk4__unnamedblk5);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk1);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk2);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk4);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk6);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult2__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk2__unnamedblk3);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult2__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult2__unnamedblk4__unnamedblk5);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk1);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk2);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk4);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult3, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk6);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult3__unnamedblk2, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk2__unnamedblk3);
    __Vhier.add(&__Vscope_KeyGeneration1__poly_mult3__unnamedblk4, &__Vscope_KeyGeneration1__poly_mult3__unnamedblk4__unnamedblk5);
    __Vhier.add(&__Vscope_KeyGeneration1__unnamedblk1, &__Vscope_KeyGeneration1__unnamedblk1__unnamedblk2);
    __Vhier.add(&__Vscope_KeyGeneration1__unnamedblk11, &__Vscope_KeyGeneration1__unnamedblk11__unnamedblk12);
    __Vhier.add(&__Vscope_KeyGeneration1__unnamedblk13, &__Vscope_KeyGeneration1__unnamedblk13__unnamedblk14);
    __Vhier.add(&__Vscope_KeyGeneration1__unnamedblk3, &__Vscope_KeyGeneration1__unnamedblk3__unnamedblk4);
    __Vhier.add(&__Vscope_KeyGeneration1__unnamedblk8, &__Vscope_KeyGeneration1__unnamedblk8__unnamedblk9);
    __Vhier.add(&__Vscope_KeyGeneration1__unnamedblk8__unnamedblk9, &__Vscope_KeyGeneration1__unnamedblk8__unnamedblk9__unnamedblk10);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"A", &(TOP.KeyGeneration1__DOT__A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,3,0 ,3,0);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"A1", &(TOP.KeyGeneration1__DOT__A1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,3,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"added", &(TOP.KeyGeneration1__DOT__added), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"added1", &(TOP.KeyGeneration1__DOT__added1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"clk", &(TOP.KeyGeneration1__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"combined_output", &(TOP.KeyGeneration1__DOT__combined_output), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,4 ,31,0 ,1,0 ,3,0 ,3,0);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"e", &(TOP.KeyGeneration1__DOT__e), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"e_", &(TOP.KeyGeneration1__DOT__e_), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"enable", &(TOP.KeyGeneration1__DOT__enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"poly_out0", &(TOP.KeyGeneration1__DOT__poly_out0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"poly_out1", &(TOP.KeyGeneration1__DOT__poly_out1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"poly_out2", &(TOP.KeyGeneration1__DOT__poly_out2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"poly_out3", &(TOP.KeyGeneration1__DOT__poly_out3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"rand_num", &(TOP.KeyGeneration1__DOT__rand_num), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"result", &(TOP.KeyGeneration1__DOT__result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"rst_n", &(TOP.KeyGeneration1__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"secret_key", &(TOP.KeyGeneration1__DOT__secret_key), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        //UNSUP __Vscope_KeyGeneration1.varInsert(__Vfinal,"secretkey", &(TOP.KeyGeneration1__DOT__secretkey), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        __Vscope_KeyGeneration1.varInsert(__Vfinal,"stop_random_generation", &(TOP.KeyGeneration1__DOT__stop_random_generation), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"clk", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"enable", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"polynomial1", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__polynomial1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"polynomial2", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__polynomial2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"polynomial_out", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__polynomial_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"rst_n", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult0.varInsert(__Vfinal,"temp_result", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__temp_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult0__unnamedblk1.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk1__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult0__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult0__unnamedblk2__unnamedblk3.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult0__unnamedblk4.varInsert(__Vfinal,"a", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk4__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult0__unnamedblk4__unnamedblk5.varInsert(__Vfinal,"b", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult0__unnamedblk6.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult0__DOT__unnamedblk6__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"clk", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"enable", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"polynomial1", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__polynomial1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"polynomial2", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__polynomial2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"polynomial_out", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__polynomial_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"rst_n", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult1.varInsert(__Vfinal,"temp_result", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__temp_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult1__unnamedblk1.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk1__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult1__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult1__unnamedblk2__unnamedblk3.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult1__unnamedblk4.varInsert(__Vfinal,"a", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk4__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult1__unnamedblk4__unnamedblk5.varInsert(__Vfinal,"b", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult1__unnamedblk6.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult1__DOT__unnamedblk6__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"clk", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"enable", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"polynomial1", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__polynomial1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"polynomial2", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__polynomial2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"polynomial_out", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__polynomial_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"rst_n", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult2.varInsert(__Vfinal,"temp_result", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__temp_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult2__unnamedblk1.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk1__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult2__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult2__unnamedblk2__unnamedblk3.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult2__unnamedblk4.varInsert(__Vfinal,"a", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk4__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult2__unnamedblk4__unnamedblk5.varInsert(__Vfinal,"b", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult2__unnamedblk6.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult2__DOT__unnamedblk6__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"clk", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"enable", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"polynomial1", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__polynomial1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"polynomial2", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__polynomial2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"polynomial_out", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__polynomial_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"rst_n", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_KeyGeneration1__poly_mult3.varInsert(__Vfinal,"temp_result", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__temp_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,3,0);
        __Vscope_KeyGeneration1__poly_mult3__unnamedblk1.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk1__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult3__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult3__unnamedblk2__unnamedblk3.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult3__unnamedblk4.varInsert(__Vfinal,"a", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk4__DOT__a), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult3__unnamedblk4__unnamedblk5.varInsert(__Vfinal,"b", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__b), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__poly_mult3__unnamedblk6.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__poly_mult3__DOT__unnamedblk6__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk11.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk11__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk11__unnamedblk12.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk13.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk13__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk13__unnamedblk14.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk1__unnamedblk2.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk3.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk3__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk3__unnamedblk4.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk5.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk5__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk6.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk6__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk7.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk7__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk8.varInsert(__Vfinal,"i", &(TOP.KeyGeneration1__DOT__unnamedblk8__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk8__unnamedblk9.varInsert(__Vfinal,"j", &(TOP.KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_KeyGeneration1__unnamedblk8__unnamedblk9__unnamedblk10.varInsert(__Vfinal,"k", &(TOP.KeyGeneration1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__k), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"A1", &(TOP.A1), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,3 ,31,0 ,3,0 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"combined_output", &(TOP.combined_output), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,4 ,31,0 ,1,0 ,3,0 ,3,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"e_", &(TOP.e_), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"enable", &(TOP.enable), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"result", &(TOP.result), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"secret_key", &(TOP.secret_key), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
        //UNSUP __Vscope_TOP.varInsert(__Vfinal,"secretkey", &(TOP.secretkey), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,3 ,31,0 ,1,0 ,3,0);
    }
}
