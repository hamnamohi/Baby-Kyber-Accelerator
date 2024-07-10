// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRandomNumberGenerator__Syms.h"


VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_init_sub__TOP__0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RandomNumberGenerator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"MIN_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"MAX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"random_number",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_init_top(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_init_top\n"); );
    // Body
    VRandomNumberGenerator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRandomNumberGenerator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRandomNumberGenerator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_register(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VRandomNumberGenerator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VRandomNumberGenerator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VRandomNumberGenerator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VRandomNumberGenerator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_const_0_sub_0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_const_0\n"); );
    // Init
    VRandomNumberGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRandomNumberGenerator___024root*>(voidSelf);
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRandomNumberGenerator___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_const_0_sub_0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+5,(0xffffffefU),32);
    bufp->fullIData(oldp+6,(0x11U),32);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_0_sub_0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_full_0\n"); );
    // Init
    VRandomNumberGenerator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRandomNumberGenerator___024root*>(voidSelf);
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRandomNumberGenerator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRandomNumberGenerator___024root__trace_full_0_sub_0(VRandomNumberGenerator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VRandomNumberGenerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRandomNumberGenerator___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst_n));
    bufp->fullBit(oldp+3,(vlSelf->enable));
    bufp->fullIData(oldp+4,(vlSelf->random_number),32);
}
