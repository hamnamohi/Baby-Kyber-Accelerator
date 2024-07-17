// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VKeyGeneration__Syms.h"


void VKeyGeneration___024root__trace_chg_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VKeyGeneration___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_chg_0\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VKeyGeneration___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VKeyGeneration___024root__trace_chg_0_sub_0(VKeyGeneration___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->KeyGeneration__DOT__rand_num[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->KeyGeneration__DOT__rand_num[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->KeyGeneration__DOT__rand_num[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->KeyGeneration__DOT__rand_num[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->KeyGeneration__DOT__rand_num[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->KeyGeneration__DOT__rand_num[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->KeyGeneration__DOT__rand_num[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->KeyGeneration__DOT__rand_num[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->KeyGeneration__DOT__rand_num[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->KeyGeneration__DOT__rand_num[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->KeyGeneration__DOT__rand_num[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->KeyGeneration__DOT__rand_num[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->KeyGeneration__DOT__rand_num[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->KeyGeneration__DOT__rand_num[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->KeyGeneration__DOT__rand_num[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->KeyGeneration__DOT__rand_num[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->KeyGeneration__DOT__rand_num[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->KeyGeneration__DOT__rand_num[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->KeyGeneration__DOT__rand_num[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->KeyGeneration__DOT__rand_num[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->KeyGeneration__DOT__rand_num[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->KeyGeneration__DOT__rand_num[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->KeyGeneration__DOT__rand_num[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->KeyGeneration__DOT__rand_num[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->KeyGeneration__DOT__rand_num[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->KeyGeneration__DOT__rand_num[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->KeyGeneration__DOT__rand_num[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->KeyGeneration__DOT__rand_num[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->KeyGeneration__DOT__rand_num[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->KeyGeneration__DOT__rand_num[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->KeyGeneration__DOT__rand_num[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->KeyGeneration__DOT__rand_num[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->KeyGeneration__DOT__A
                                [0U][0U]),32);
        bufp->chgIData(oldp+33,(vlSelf->KeyGeneration__DOT__A
                                [0U][1U]),32);
        bufp->chgIData(oldp+34,(vlSelf->KeyGeneration__DOT__A
                                [0U][2U]),32);
        bufp->chgIData(oldp+35,(vlSelf->KeyGeneration__DOT__A
                                [0U][3U]),32);
        bufp->chgIData(oldp+36,(vlSelf->KeyGeneration__DOT__A
                                [1U][0U]),32);
        bufp->chgIData(oldp+37,(vlSelf->KeyGeneration__DOT__A
                                [1U][1U]),32);
        bufp->chgIData(oldp+38,(vlSelf->KeyGeneration__DOT__A
                                [1U][2U]),32);
        bufp->chgIData(oldp+39,(vlSelf->KeyGeneration__DOT__A
                                [1U][3U]),32);
        bufp->chgIData(oldp+40,(vlSelf->KeyGeneration__DOT__A
                                [2U][0U]),32);
        bufp->chgIData(oldp+41,(vlSelf->KeyGeneration__DOT__A
                                [2U][1U]),32);
        bufp->chgIData(oldp+42,(vlSelf->KeyGeneration__DOT__A
                                [2U][2U]),32);
        bufp->chgIData(oldp+43,(vlSelf->KeyGeneration__DOT__A
                                [2U][3U]),32);
        bufp->chgIData(oldp+44,(vlSelf->KeyGeneration__DOT__A
                                [3U][0U]),32);
        bufp->chgIData(oldp+45,(vlSelf->KeyGeneration__DOT__A
                                [3U][1U]),32);
        bufp->chgIData(oldp+46,(vlSelf->KeyGeneration__DOT__A
                                [3U][2U]),32);
        bufp->chgIData(oldp+47,(vlSelf->KeyGeneration__DOT__A
                                [3U][3U]),32);
        bufp->chgIData(oldp+48,(vlSelf->KeyGeneration__DOT__e
                                [0U][0U]),32);
        bufp->chgIData(oldp+49,(vlSelf->KeyGeneration__DOT__e
                                [0U][1U]),32);
        bufp->chgIData(oldp+50,(vlSelf->KeyGeneration__DOT__e
                                [0U][2U]),32);
        bufp->chgIData(oldp+51,(vlSelf->KeyGeneration__DOT__e
                                [0U][3U]),32);
        bufp->chgIData(oldp+52,(vlSelf->KeyGeneration__DOT__e
                                [1U][0U]),32);
        bufp->chgIData(oldp+53,(vlSelf->KeyGeneration__DOT__e
                                [1U][1U]),32);
        bufp->chgIData(oldp+54,(vlSelf->KeyGeneration__DOT__e
                                [1U][2U]),32);
        bufp->chgIData(oldp+55,(vlSelf->KeyGeneration__DOT__e
                                [1U][3U]),32);
        bufp->chgIData(oldp+56,(vlSelf->KeyGeneration__DOT__poly_out0[0]),32);
        bufp->chgIData(oldp+57,(vlSelf->KeyGeneration__DOT__poly_out0[1]),32);
        bufp->chgIData(oldp+58,(vlSelf->KeyGeneration__DOT__poly_out0[2]),32);
        bufp->chgIData(oldp+59,(vlSelf->KeyGeneration__DOT__poly_out0[3]),32);
        bufp->chgIData(oldp+60,(vlSelf->KeyGeneration__DOT__poly_out1[0]),32);
        bufp->chgIData(oldp+61,(vlSelf->KeyGeneration__DOT__poly_out1[1]),32);
        bufp->chgIData(oldp+62,(vlSelf->KeyGeneration__DOT__poly_out1[2]),32);
        bufp->chgIData(oldp+63,(vlSelf->KeyGeneration__DOT__poly_out1[3]),32);
        bufp->chgIData(oldp+64,(vlSelf->KeyGeneration__DOT__poly_out2[0]),32);
        bufp->chgIData(oldp+65,(vlSelf->KeyGeneration__DOT__poly_out2[1]),32);
        bufp->chgIData(oldp+66,(vlSelf->KeyGeneration__DOT__poly_out2[2]),32);
        bufp->chgIData(oldp+67,(vlSelf->KeyGeneration__DOT__poly_out2[3]),32);
        bufp->chgIData(oldp+68,(vlSelf->KeyGeneration__DOT__poly_out3[0]),32);
        bufp->chgIData(oldp+69,(vlSelf->KeyGeneration__DOT__poly_out3[1]),32);
        bufp->chgIData(oldp+70,(vlSelf->KeyGeneration__DOT__poly_out3[2]),32);
        bufp->chgIData(oldp+71,(vlSelf->KeyGeneration__DOT__poly_out3[3]),32);
        bufp->chgIData(oldp+72,(vlSelf->KeyGeneration__DOT__added[0]),32);
        bufp->chgIData(oldp+73,(vlSelf->KeyGeneration__DOT__added[1]),32);
        bufp->chgIData(oldp+74,(vlSelf->KeyGeneration__DOT__added[2]),32);
        bufp->chgIData(oldp+75,(vlSelf->KeyGeneration__DOT__added[3]),32);
        bufp->chgIData(oldp+76,(vlSelf->KeyGeneration__DOT__added1[0]),32);
        bufp->chgIData(oldp+77,(vlSelf->KeyGeneration__DOT__added1[1]),32);
        bufp->chgIData(oldp+78,(vlSelf->KeyGeneration__DOT__added1[2]),32);
        bufp->chgIData(oldp+79,(vlSelf->KeyGeneration__DOT__added1[3]),32);
        bufp->chgBit(oldp+80,(vlSelf->KeyGeneration__DOT__stop_random_generation));
        bufp->chgIData(oldp+81,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
        bufp->chgIData(oldp+82,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
        bufp->chgIData(oldp+83,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
        bufp->chgIData(oldp+84,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
        bufp->chgIData(oldp+85,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
        bufp->chgIData(oldp+86,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
        bufp->chgIData(oldp+87,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
        bufp->chgIData(oldp+88,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
        bufp->chgIData(oldp+89,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[0]),32);
        bufp->chgIData(oldp+90,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[1]),32);
        bufp->chgIData(oldp+91,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[2]),32);
        bufp->chgIData(oldp+92,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult0__polynomial_out[3]),32);
        bufp->chgIData(oldp+93,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+94,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+95,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+96,(vlSelf->KeyGeneration__DOT__poly_mult0__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+97,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
        bufp->chgIData(oldp+98,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
        bufp->chgIData(oldp+99,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
        bufp->chgIData(oldp+100,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
        bufp->chgIData(oldp+101,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
        bufp->chgIData(oldp+102,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
        bufp->chgIData(oldp+103,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
        bufp->chgIData(oldp+104,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
        bufp->chgIData(oldp+105,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
        bufp->chgIData(oldp+106,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
        bufp->chgIData(oldp+107,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
        bufp->chgIData(oldp+108,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
        bufp->chgIData(oldp+109,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+110,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+111,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+112,(vlSelf->KeyGeneration__DOT__poly_mult1__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+113,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
        bufp->chgIData(oldp+114,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
        bufp->chgIData(oldp+115,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
        bufp->chgIData(oldp+116,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
        bufp->chgIData(oldp+117,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
        bufp->chgIData(oldp+118,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
        bufp->chgIData(oldp+119,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
        bufp->chgIData(oldp+120,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
        bufp->chgIData(oldp+121,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
        bufp->chgIData(oldp+122,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
        bufp->chgIData(oldp+123,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
        bufp->chgIData(oldp+124,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
        bufp->chgIData(oldp+125,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+126,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+127,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+128,(vlSelf->KeyGeneration__DOT__poly_mult2__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+129,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
        bufp->chgIData(oldp+130,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
        bufp->chgIData(oldp+131,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
        bufp->chgIData(oldp+132,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
        bufp->chgIData(oldp+133,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
        bufp->chgIData(oldp+134,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
        bufp->chgIData(oldp+135,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
        bufp->chgIData(oldp+136,(vlSelf->KeyGeneration__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
        bufp->chgIData(oldp+137,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[0]),32);
        bufp->chgIData(oldp+138,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[1]),32);
        bufp->chgIData(oldp+139,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[2]),32);
        bufp->chgIData(oldp+140,(vlSelf->KeyGeneration__DOT____Vcellout__poly_mult3__polynomial_out[3]),32);
        bufp->chgIData(oldp+141,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[0]),32);
        bufp->chgIData(oldp+142,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[1]),32);
        bufp->chgIData(oldp+143,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[2]),32);
        bufp->chgIData(oldp+144,(vlSelf->KeyGeneration__DOT__poly_mult3__DOT__temp_result[3]),32);
        bufp->chgIData(oldp+145,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__0__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+146,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__10__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+147,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__11__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+148,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__12__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+149,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__13__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+150,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__14__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+151,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__15__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+152,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__16__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+153,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__17__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+154,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__18__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+155,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__19__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+156,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__1__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+157,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__20__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+158,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__21__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+159,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__22__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+160,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__23__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+161,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__24__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+162,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__25__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+163,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__26__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+164,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__27__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+165,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__28__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+166,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__29__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+167,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__2__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+168,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__30__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+169,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__31__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+170,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__3__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+171,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__4__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+172,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__5__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+173,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__6__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+174,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__7__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+175,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__8__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+176,(vlSelf->KeyGeneration__DOT____Vcellout__rng_loop__BRA__9__KET____DOT__rng__random_number),32);
        bufp->chgIData(oldp+177,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+178,(vlSelf->KeyGeneration__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+179,(vlSelf->KeyGeneration__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+180,(vlSelf->KeyGeneration__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+181,(vlSelf->KeyGeneration__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+182,(vlSelf->KeyGeneration__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+183,(vlSelf->KeyGeneration__DOT__unnamedblk7__DOT__i),32);
    }
    bufp->chgBit(oldp+184,(vlSelf->clk));
    bufp->chgBit(oldp+185,(vlSelf->rst_n));
    bufp->chgBit(oldp+186,(vlSelf->enable));
    bufp->chgIData(oldp+187,(vlSelf->secretkey[0U][0U]),32);
    bufp->chgIData(oldp+188,(vlSelf->secretkey[0U][1U]),32);
    bufp->chgIData(oldp+189,(vlSelf->secretkey[0U][2U]),32);
    bufp->chgIData(oldp+190,(vlSelf->secretkey[0U][3U]),32);
    bufp->chgIData(oldp+191,(vlSelf->secretkey[1U][0U]),32);
    bufp->chgIData(oldp+192,(vlSelf->secretkey[1U][1U]),32);
    bufp->chgIData(oldp+193,(vlSelf->secretkey[1U][2U]),32);
    bufp->chgIData(oldp+194,(vlSelf->secretkey[1U][3U]),32);
    bufp->chgIData(oldp+195,(vlSelf->result[0U][0U]),32);
    bufp->chgIData(oldp+196,(vlSelf->result[0U][1U]),32);
    bufp->chgIData(oldp+197,(vlSelf->result[0U][2U]),32);
    bufp->chgIData(oldp+198,(vlSelf->result[0U][3U]),32);
    bufp->chgIData(oldp+199,(vlSelf->result[1U][0U]),32);
    bufp->chgIData(oldp+200,(vlSelf->result[1U][1U]),32);
    bufp->chgIData(oldp+201,(vlSelf->result[1U][2U]),32);
    bufp->chgIData(oldp+202,(vlSelf->result[1U][3U]),32);
    bufp->chgBit(oldp+203,(vlSelf->KeyGeneration__DOT____Vcellinp__rng_loop__BRA__0__KET____DOT__rng__enable));
}

void VKeyGeneration___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VKeyGeneration___024root__trace_cleanup\n"); );
    // Init
    VKeyGeneration___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VKeyGeneration___024root*>(voidSelf);
    VKeyGeneration__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
