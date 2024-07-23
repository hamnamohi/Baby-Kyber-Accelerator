// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDecimalToBitConverter__Syms.h"


VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_init_sub__TOP__0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"input_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"coefficients",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("DecimalToBitConverter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"input_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"coefficients",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"bit_list",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_init_top(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_init_top\n"); );
    // Body
    VDecimalToBitConverter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDecimalToBitConverter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VDecimalToBitConverter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_register(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VDecimalToBitConverter___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VDecimalToBitConverter___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VDecimalToBitConverter___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VDecimalToBitConverter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_const_0_sub_0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_const_0\n"); );
    // Init
    VDecimalToBitConverter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecimalToBitConverter___024root*>(voidSelf);
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDecimalToBitConverter___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_const_0_sub_0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+4,(4U),32);
    bufp->fullIData(oldp+5,(2U),32);
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_full_0_sub_0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_full_0\n"); );
    // Init
    VDecimalToBitConverter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDecimalToBitConverter___024root*>(voidSelf);
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDecimalToBitConverter___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VDecimalToBitConverter___024root__trace_full_0_sub_0(VDecimalToBitConverter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VDecimalToBitConverter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDecimalToBitConverter___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->input_value),32);
    bufp->fullCData(oldp+2,(vlSelf->coefficients),4);
    bufp->fullCData(oldp+3,(vlSelf->DecimalToBitConverter__DOT__bit_list),8);
}
