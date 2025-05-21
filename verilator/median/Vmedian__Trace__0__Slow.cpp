// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmedian__Syms.h"


VL_ATTR_COLD void Vmedian___024root__trace_init_sub__TOP__0(Vmedian___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+49,0,"arr_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"arr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"arr_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"arr_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"arr_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"arr_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"arr_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"arr_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"arr_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"med",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("median", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"arr_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"arr_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"arr_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"arr_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"arr_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"arr_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"arr_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"arr_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"arr_8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"fc_0sel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"fc_0sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"fc_0sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"fc_0sub_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"fc_0sub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"fc_0sub_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"fc_1sel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"fc_1sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"fc_1sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"fc_1sub_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"fc_1sub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"fc_1sub_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+13,0,"fc_2sel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"fc_2sel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"fc_2sel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"fc_2sub_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"fc_2sub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"fc_2sub_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"h0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"h1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,0,"h2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+22,0,"l0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"l1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"l2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"m0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"m1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"m2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,0,"med",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"sec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"sec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"sec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,0,"shsel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"shsel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"shsub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+34,0,"slsel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"slsel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"slsub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+37,0,"smsel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"smsel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"smsel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"smsub_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"smsub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"smsub_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+43,0,"tmsel_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"tmsel_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"tmsel_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"tmsub_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+47,0,"tmsub_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"tmsub_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmedian___024root__trace_init_top(Vmedian___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_init_top\n"); );
    // Body
    Vmedian___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmedian___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vmedian___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vmedian___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vmedian___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vmedian___024root__trace_register(Vmedian___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vmedian___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vmedian___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vmedian___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vmedian___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmedian___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_const_0\n"); );
    // Init
    Vmedian___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmedian___024root*>(voidSelf);
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vmedian___024root__trace_full_0_sub_0(Vmedian___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vmedian___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_full_0\n"); );
    // Init
    Vmedian___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmedian___024root*>(voidSelf);
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmedian___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmedian___024root__trace_full_0_sub_0(Vmedian___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->median__DOT__fc_0sel_0));
    bufp->fullBit(oldp+2,(vlSelf->median__DOT__fc_0sel_1));
    bufp->fullBit(oldp+3,(vlSelf->median__DOT__fc_0sel_2));
    bufp->fullCData(oldp+4,(vlSelf->median__DOT__fc_0sub_0),8);
    bufp->fullCData(oldp+5,(vlSelf->median__DOT__fc_0sub_1),8);
    bufp->fullCData(oldp+6,(vlSelf->median__DOT__fc_0sub_2),8);
    bufp->fullBit(oldp+7,(vlSelf->median__DOT__fc_1sel_0));
    bufp->fullBit(oldp+8,(vlSelf->median__DOT__fc_1sel_1));
    bufp->fullBit(oldp+9,(vlSelf->median__DOT__fc_1sel_2));
    bufp->fullCData(oldp+10,(vlSelf->median__DOT__fc_1sub_0),8);
    bufp->fullCData(oldp+11,(vlSelf->median__DOT__fc_1sub_1),8);
    bufp->fullCData(oldp+12,(vlSelf->median__DOT__fc_1sub_2),8);
    bufp->fullBit(oldp+13,(vlSelf->median__DOT__fc_2sel_0));
    bufp->fullBit(oldp+14,(vlSelf->median__DOT__fc_2sel_1));
    bufp->fullBit(oldp+15,(vlSelf->median__DOT__fc_2sel_2));
    bufp->fullCData(oldp+16,(vlSelf->median__DOT__fc_2sub_0),8);
    bufp->fullCData(oldp+17,(vlSelf->median__DOT__fc_2sub_1),8);
    bufp->fullCData(oldp+18,(vlSelf->median__DOT__fc_2sub_2),8);
    bufp->fullCData(oldp+19,(vlSelf->median__DOT__h0),8);
    bufp->fullCData(oldp+20,(vlSelf->median__DOT__h1),8);
    bufp->fullCData(oldp+21,(vlSelf->median__DOT__h2),8);
    bufp->fullCData(oldp+22,(vlSelf->median__DOT__l0),8);
    bufp->fullCData(oldp+23,(vlSelf->median__DOT__l1),8);
    bufp->fullCData(oldp+24,(vlSelf->median__DOT__l2),8);
    bufp->fullCData(oldp+25,(vlSelf->median__DOT__m0),8);
    bufp->fullCData(oldp+26,(vlSelf->median__DOT__m1),8);
    bufp->fullCData(oldp+27,(vlSelf->median__DOT__m2),8);
    bufp->fullCData(oldp+28,(vlSelf->median__DOT__sec_0),8);
    bufp->fullCData(oldp+29,(vlSelf->median__DOT__sec_1),8);
    bufp->fullCData(oldp+30,(vlSelf->median__DOT__sec_2),8);
    bufp->fullBit(oldp+31,(((IData)(vlSelf->median__DOT__l0) 
                            < (IData)(vlSelf->median__DOT__l1))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->median__DOT__shsub_1) 
                            > (IData)(vlSelf->median__DOT__l2))));
    bufp->fullCData(oldp+33,(vlSelf->median__DOT__shsub_1),8);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->median__DOT__h0) 
                            > (IData)(vlSelf->median__DOT__h1))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->median__DOT__slsub_1) 
                            > (IData)(vlSelf->median__DOT__h2))));
    bufp->fullCData(oldp+36,(vlSelf->median__DOT__slsub_1),8);
    bufp->fullBit(oldp+37,(vlSelf->median__DOT__smsel_0));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->median__DOT__smsub_1) 
                            > (IData)(vlSelf->median__DOT__m2))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->median__DOT__smsub_0) 
                            > (IData)(vlSelf->median__DOT__smsub_2))));
    bufp->fullCData(oldp+40,(vlSelf->median__DOT__smsub_0),8);
    bufp->fullCData(oldp+41,(vlSelf->median__DOT__smsub_1),8);
    bufp->fullCData(oldp+42,(vlSelf->median__DOT__smsub_2),8);
    bufp->fullBit(oldp+43,(vlSelf->median__DOT__tmsel_0));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->median__DOT__tmsub_1) 
                            > (IData)(vlSelf->median__DOT__sec_2))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->median__DOT__tmsub_0) 
                            > (IData)(vlSelf->median__DOT__tmsub_2))));
    bufp->fullCData(oldp+46,(vlSelf->median__DOT__tmsub_0),8);
    bufp->fullCData(oldp+47,(vlSelf->median__DOT__tmsub_1),8);
    bufp->fullCData(oldp+48,(vlSelf->median__DOT__tmsub_2),8);
    bufp->fullCData(oldp+49,(vlSelf->arr_0),8);
    bufp->fullCData(oldp+50,(vlSelf->arr_1),8);
    bufp->fullCData(oldp+51,(vlSelf->arr_2),8);
    bufp->fullCData(oldp+52,(vlSelf->arr_3),8);
    bufp->fullCData(oldp+53,(vlSelf->arr_4),8);
    bufp->fullCData(oldp+54,(vlSelf->arr_5),8);
    bufp->fullCData(oldp+55,(vlSelf->arr_6),8);
    bufp->fullCData(oldp+56,(vlSelf->arr_7),8);
    bufp->fullCData(oldp+57,(vlSelf->arr_8),8);
    bufp->fullCData(oldp+58,(vlSelf->med),8);
}
