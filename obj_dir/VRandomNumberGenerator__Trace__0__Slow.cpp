// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRandomNumberGenerator__Syms.h"


VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_init_sub__TOP__0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_n", false,-1);
    tracep->declBit(c+3,"enable", false,-1);
    tracep->declBus(c+4,"random_number", false,-1, 5,0);
    tracep->pushNamePrefix("rng ");
    tracep->declBus(c+6,"MIN_VALUE", false,-1, 31,0);
    tracep->declBus(c+7,"MAX_VALUE", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst_n", false,-1);
    tracep->declBit(c+3,"enable", false,-1);
    tracep->declBus(c+4,"random_number", false,-1, 5,0);
    tracep->declBus(c+5,"rand_value", false,-1, 5,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_init_top(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_init_top\n"); );
    // Body
    VRandomNumberGenerator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRandomNumberGenerator___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRandomNumberGenerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_register(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRandomNumberGenerator___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRandomNumberGenerator___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRandomNumberGenerator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_sub_0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_full_top_0\n"); );
    // Init
    VRandomNumberGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRandomNumberGenerator___024root*>(voidSelf);
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRandomNumberGenerator___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_sub_0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullBit(oldp+3,(vlSelf->enable));
    bufp->fullCData(oldp+4,(vlSelf->random_number),6);
    bufp->fullCData(oldp+5,(vlSelf->rng__DOT__rand_value),6);
    bufp->fullIData(oldp+6,(0xffffffefU),32);
    bufp->fullIData(oldp+7,(0x11U),32);
}
