// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopModule__Syms.h"


void VTopModule___024root__trace_chg_0_sub_0(VTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTopModule___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root__trace_chg_0\n"); );
    // Init
    VTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopModule___024root*>(voidSelf);
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTopModule___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTopModule___024root__trace_chg_0_sub_0(VTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->TopModule__DOT__secretkey
                               [0U][0U]),32);
        bufp->chgIData(oldp+1,(vlSelf->TopModule__DOT__secretkey
                               [0U][1U]),32);
        bufp->chgIData(oldp+2,(vlSelf->TopModule__DOT__secretkey
                               [0U][2U]),32);
        bufp->chgIData(oldp+3,(vlSelf->TopModule__DOT__secretkey
                               [0U][3U]),32);
        bufp->chgIData(oldp+4,(vlSelf->TopModule__DOT__secretkey
                               [1U][0U]),32);
        bufp->chgIData(oldp+5,(vlSelf->TopModule__DOT__secretkey
                               [1U][1U]),32);
        bufp->chgIData(oldp+6,(vlSelf->TopModule__DOT__secretkey
                               [1U][2U]),32);
        bufp->chgIData(oldp+7,(vlSelf->TopModule__DOT__secretkey
                               [1U][3U]),32);
        bufp->chgIData(oldp+8,(vlSelf->TopModule__DOT__result
                               [0U][0U]),32);
        bufp->chgIData(oldp+9,(vlSelf->TopModule__DOT__result
                               [0U][1U]),32);
        bufp->chgIData(oldp+10,(vlSelf->TopModule__DOT__result
                                [0U][2U]),32);
        bufp->chgIData(oldp+11,(vlSelf->TopModule__DOT__result
                                [0U][3U]),32);
        bufp->chgIData(oldp+12,(vlSelf->TopModule__DOT__result
                                [1U][0U]),32);
        bufp->chgIData(oldp+13,(vlSelf->TopModule__DOT__result
                                [1U][1U]),32);
        bufp->chgIData(oldp+14,(vlSelf->TopModule__DOT__result
                                [1U][2U]),32);
        bufp->chgIData(oldp+15,(vlSelf->TopModule__DOT__result
                                [1U][3U]),32);
        bufp->chgIData(oldp+16,(vlSelf->TopModule__DOT__A_out
                                [0U][0U]),32);
        bufp->chgIData(oldp+17,(vlSelf->TopModule__DOT__A_out
                                [0U][1U]),32);
        bufp->chgIData(oldp+18,(vlSelf->TopModule__DOT__A_out
                                [0U][2U]),32);
        bufp->chgIData(oldp+19,(vlSelf->TopModule__DOT__A_out
                                [0U][3U]),32);
        bufp->chgIData(oldp+20,(vlSelf->TopModule__DOT__A_out
                                [1U][0U]),32);
        bufp->chgIData(oldp+21,(vlSelf->TopModule__DOT__A_out
                                [1U][1U]),32);
        bufp->chgIData(oldp+22,(vlSelf->TopModule__DOT__A_out
                                [1U][2U]),32);
        bufp->chgIData(oldp+23,(vlSelf->TopModule__DOT__A_out
                                [1U][3U]),32);
        bufp->chgIData(oldp+24,(vlSelf->TopModule__DOT__A_out
                                [2U][0U]),32);
        bufp->chgIData(oldp+25,(vlSelf->TopModule__DOT__A_out
                                [2U][1U]),32);
        bufp->chgIData(oldp+26,(vlSelf->TopModule__DOT__A_out
                                [2U][2U]),32);
        bufp->chgIData(oldp+27,(vlSelf->TopModule__DOT__A_out
                                [2U][3U]),32);
        bufp->chgIData(oldp+28,(vlSelf->TopModule__DOT__A_out
                                [3U][0U]),32);
        bufp->chgIData(oldp+29,(vlSelf->TopModule__DOT__A_out
                                [3U][1U]),32);
        bufp->chgIData(oldp+30,(vlSelf->TopModule__DOT__A_out
                                [3U][2U]),32);
        bufp->chgIData(oldp+31,(vlSelf->TopModule__DOT__A_out
                                [3U][3U]),32);
        bufp->chgIData(oldp+32,(vlSelf->TopModule__DOT__e_out
                                [0U][0U]),32);
        bufp->chgIData(oldp+33,(vlSelf->TopModule__DOT__e_out
                                [0U][1U]),32);
        bufp->chgIData(oldp+34,(vlSelf->TopModule__DOT__e_out
                                [0U][2U]),32);
        bufp->chgIData(oldp+35,(vlSelf->TopModule__DOT__e_out
                                [0U][3U]),32);
        bufp->chgIData(oldp+36,(vlSelf->TopModule__DOT__e_out
                                [1U][0U]),32);
        bufp->chgIData(oldp+37,(vlSelf->TopModule__DOT__e_out
                                [1U][1U]),32);
        bufp->chgIData(oldp+38,(vlSelf->TopModule__DOT__e_out
                                [1U][2U]),32);
        bufp->chgIData(oldp+39,(vlSelf->TopModule__DOT__e_out
                                [1U][3U]),32);
        bufp->chgIData(oldp+40,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[0]),32);
        bufp->chgIData(oldp+41,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[1]),32);
        bufp->chgIData(oldp+42,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[2]),32);
        bufp->chgIData(oldp+43,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[3]),32);
        bufp->chgIData(oldp+44,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[4]),32);
        bufp->chgIData(oldp+45,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[5]),32);
        bufp->chgIData(oldp+46,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[6]),32);
        bufp->chgIData(oldp+47,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[7]),32);
        bufp->chgIData(oldp+48,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[8]),32);
        bufp->chgIData(oldp+49,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[9]),32);
        bufp->chgIData(oldp+50,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[10]),32);
        bufp->chgIData(oldp+51,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[11]),32);
        bufp->chgIData(oldp+52,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[12]),32);
        bufp->chgIData(oldp+53,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[13]),32);
        bufp->chgIData(oldp+54,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[14]),32);
        bufp->chgIData(oldp+55,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[15]),32);
        bufp->chgIData(oldp+56,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[16]),32);
        bufp->chgIData(oldp+57,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[17]),32);
        bufp->chgIData(oldp+58,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[18]),32);
        bufp->chgIData(oldp+59,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[19]),32);
        bufp->chgIData(oldp+60,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[20]),32);
        bufp->chgIData(oldp+61,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[21]),32);
        bufp->chgIData(oldp+62,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[22]),32);
        bufp->chgIData(oldp+63,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[23]),32);
        bufp->chgIData(oldp+64,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[24]),32);
        bufp->chgIData(oldp+65,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[25]),32);
        bufp->chgIData(oldp+66,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[26]),32);
        bufp->chgIData(oldp+67,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[27]),32);
        bufp->chgIData(oldp+68,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[28]),32);
        bufp->chgIData(oldp+69,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[29]),32);
        bufp->chgIData(oldp+70,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[30]),32);
        bufp->chgIData(oldp+71,(vlSelf->TopModule__DOT__key_gen__DOT__rand_num[31]),32);
        bufp->chgIData(oldp+72,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+73,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+74,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+75,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+76,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+77,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+78,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+79,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+80,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+81,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+82,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+83,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+84,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+85,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+86,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+87,(vlSelf->TopModule__DOT__key_gen__DOT__poly_out3[3]),32);
        bufp->chgIData(oldp+88,(vlSelf->TopModule__DOT__key_gen__DOT__added[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->TopModule__DOT__key_gen__DOT__added[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->TopModule__DOT__key_gen__DOT__added[2]),32);
        bufp->chgIData(oldp+91,(vlSelf->TopModule__DOT__key_gen__DOT__added[3]),32);
        bufp->chgIData(oldp+92,(vlSelf->TopModule__DOT__key_gen__DOT__added1[0]),32);
        bufp->chgIData(oldp+93,(vlSelf->TopModule__DOT__key_gen__DOT__added1[1]),32);
        bufp->chgIData(oldp+94,(vlSelf->TopModule__DOT__key_gen__DOT__added1[2]),32);
        bufp->chgIData(oldp+95,(vlSelf->TopModule__DOT__key_gen__DOT__added1[3]),32);
        bufp->chgIData(oldp+96,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
        bufp->chgIData(oldp+97,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
        bufp->chgIData(oldp+98,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
        bufp->chgIData(oldp+99,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
        bufp->chgIData(oldp+100,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
        bufp->chgIData(oldp+101,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
        bufp->chgIData(oldp+102,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
        bufp->chgIData(oldp+103,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
        bufp->chgIData(oldp+104,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[0]),32);
        bufp->chgIData(oldp+105,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[1]),32);
        bufp->chgIData(oldp+106,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[2]),32);
        bufp->chgIData(oldp+107,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult0__polynomial_out[3]),32);
        bufp->chgIData(oldp+108,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+109,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+110,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+111,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult0__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+112,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+113,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+114,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+115,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+116,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+117,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+118,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+119,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+120,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
        bufp->chgIData(oldp+121,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
        bufp->chgIData(oldp+122,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
        bufp->chgIData(oldp+123,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
        bufp->chgIData(oldp+124,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+125,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+126,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+127,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+128,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+129,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+130,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+131,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+132,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+133,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+134,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+135,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgIData(oldp+136,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
        bufp->chgIData(oldp+137,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
        bufp->chgIData(oldp+138,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
        bufp->chgIData(oldp+139,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
        bufp->chgIData(oldp+140,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+141,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+142,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+143,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+144,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
        bufp->chgIData(oldp+145,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
        bufp->chgIData(oldp+146,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
        bufp->chgIData(oldp+147,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
        bufp->chgIData(oldp+148,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
        bufp->chgIData(oldp+149,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
        bufp->chgIData(oldp+150,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
        bufp->chgIData(oldp+151,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
        bufp->chgIData(oldp+152,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[0]),32);
        bufp->chgIData(oldp+153,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[1]),32);
        bufp->chgIData(oldp+154,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[2]),32);
        bufp->chgIData(oldp+155,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__poly_mult3__polynomial_out[3]),32);
        bufp->chgIData(oldp+156,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+157,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+158,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+159,(vlSelf->TopModule__DOT__key_gen__DOT__poly_mult3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+160,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+161,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+162,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+163,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+164,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+165,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+166,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+167,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+168,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+169,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+170,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+171,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+172,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+173,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+174,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+175,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+176,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+177,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+178,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+179,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+180,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+181,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+182,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+183,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+184,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+185,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+186,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+187,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+188,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+189,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+190,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+191,(vlSelf->TopModule__DOT__key_gen__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+192,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+193,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+194,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+195,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+196,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+197,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+198,(vlSelf->TopModule__DOT__key_gen__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+199,(vlSelf->TopModule__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+200,(vlSelf->TopModule__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+201,(vlSelf->TopModule__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+202,(vlSelf->TopModule__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    }
    bufp->chgBit(oldp+203,(vlSelf->clk));
    bufp->chgBit(oldp+204,(vlSelf->rst_n));
    bufp->chgBit(oldp+205,(vlSelf->enable));
    bufp->chgIData(oldp+206,(vlSelf->temp_secretkey
                             [0U][0U]),32);
    bufp->chgIData(oldp+207,(vlSelf->temp_secretkey
                             [0U][1U]),32);
    bufp->chgIData(oldp+208,(vlSelf->temp_secretkey
                             [0U][2U]),32);
    bufp->chgIData(oldp+209,(vlSelf->temp_secretkey
                             [0U][3U]),32);
    bufp->chgIData(oldp+210,(vlSelf->temp_secretkey
                             [1U][0U]),32);
    bufp->chgIData(oldp+211,(vlSelf->temp_secretkey
                             [1U][1U]),32);
    bufp->chgIData(oldp+212,(vlSelf->temp_secretkey
                             [1U][2U]),32);
    bufp->chgIData(oldp+213,(vlSelf->temp_secretkey
                             [1U][3U]),32);
    bufp->chgIData(oldp+214,(vlSelf->temp_result[0U]
                             [0U]),32);
    bufp->chgIData(oldp+215,(vlSelf->temp_result[0U]
                             [1U]),32);
    bufp->chgIData(oldp+216,(vlSelf->temp_result[0U]
                             [2U]),32);
    bufp->chgIData(oldp+217,(vlSelf->temp_result[0U]
                             [3U]),32);
    bufp->chgIData(oldp+218,(vlSelf->temp_result[1U]
                             [0U]),32);
    bufp->chgIData(oldp+219,(vlSelf->temp_result[1U]
                             [1U]),32);
    bufp->chgIData(oldp+220,(vlSelf->temp_result[1U]
                             [2U]),32);
    bufp->chgIData(oldp+221,(vlSelf->temp_result[1U]
                             [3U]),32);
}

void VTopModule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopModule___024root__trace_cleanup\n"); );
    // Init
    VTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTopModule___024root*>(voidSelf);
    VTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
