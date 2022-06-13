// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vzerocore__Syms.h"


void Vzerocore___024root__trace_chg_sub_0(Vzerocore___024root* vlSelf, VerilatedVcd* tracep);

void Vzerocore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_chg_top_0\n"); );
    // Init
    Vzerocore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vzerocore___024root*>(voidSelf);
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vzerocore___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vzerocore___024root__trace_chg_sub_0(Vzerocore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->zerocore__DOT__pcF),64);
        tracep->chgIData(oldp+2,(vlSelf->zerocore__DOT__instD),32);
        tracep->chgQData(oldp+3,(vlSelf->zerocore__DOT__rs1DataE),64);
        tracep->chgQData(oldp+5,(((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->zerocore__DOT__instD)))
                                   ? (QData)((IData)(
                                                     (vlSelf->zerocore__DOT__instD 
                                                      >> 0x14U)))
                                   : vlSelf->zerocore__DOT__rs2DataE)),64);
        tracep->chgBit(oldp+7,((IData)((0x13U == (0x707fU 
                                                  & vlSelf->zerocore__DOT__instD)))));
        tracep->chgQData(oldp+8,((QData)((IData)((vlSelf->zerocore__DOT__instD 
                                                  >> 0x14U)))),64);
        tracep->chgCData(oldp+10,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+11,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                            >> 0x14U))),5);
        tracep->chgQData(oldp+12,(vlSelf->zerocore__DOT__rs2DataE),64);
        tracep->chgCData(oldp+14,((0x1fU & (vlSelf->zerocore__DOT__instD 
                                            >> 7U))),5);
        tracep->chgQData(oldp+15,(vlSelf->zerocore__DOT__u_ex__DOT__resADD),64);
        tracep->chgCData(oldp+17,((0x7fU & vlSelf->zerocore__DOT__instD)),7);
        tracep->chgCData(oldp+18,((7U & (vlSelf->zerocore__DOT__instD 
                                         >> 0xcU))),3);
        tracep->chgBit(oldp+19,((0x13U == (0x7fU & vlSelf->zerocore__DOT__instD))));
        tracep->chgBit(oldp+20,((0x33U == (0x7fU & vlSelf->zerocore__DOT__instD))));
        tracep->chgBit(oldp+21,((0U == (7U & (vlSelf->zerocore__DOT__instD 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+22,((IData)((0x33U == (0x707fU 
                                                   & vlSelf->zerocore__DOT__instD)))));
        tracep->chgCData(oldp+23,(((0x13U == (0x7fU 
                                              & vlSelf->zerocore__DOT__instD)) 
                                   & (0U == (7U & (vlSelf->zerocore__DOT__instD 
                                                   >> 0xcU))))),8);
        tracep->chgQData(oldp+24,(vlSelf->zerocore__DOT__u_regs__DOT__regs[0]),64);
        tracep->chgQData(oldp+26,(vlSelf->zerocore__DOT__u_regs__DOT__regs[1]),64);
        tracep->chgQData(oldp+28,(vlSelf->zerocore__DOT__u_regs__DOT__regs[2]),64);
        tracep->chgQData(oldp+30,(vlSelf->zerocore__DOT__u_regs__DOT__regs[3]),64);
        tracep->chgQData(oldp+32,(vlSelf->zerocore__DOT__u_regs__DOT__regs[4]),64);
        tracep->chgQData(oldp+34,(vlSelf->zerocore__DOT__u_regs__DOT__regs[5]),64);
        tracep->chgQData(oldp+36,(vlSelf->zerocore__DOT__u_regs__DOT__regs[6]),64);
        tracep->chgQData(oldp+38,(vlSelf->zerocore__DOT__u_regs__DOT__regs[7]),64);
        tracep->chgQData(oldp+40,(vlSelf->zerocore__DOT__u_regs__DOT__regs[8]),64);
        tracep->chgQData(oldp+42,(vlSelf->zerocore__DOT__u_regs__DOT__regs[9]),64);
        tracep->chgQData(oldp+44,(vlSelf->zerocore__DOT__u_regs__DOT__regs[10]),64);
        tracep->chgQData(oldp+46,(vlSelf->zerocore__DOT__u_regs__DOT__regs[11]),64);
        tracep->chgQData(oldp+48,(vlSelf->zerocore__DOT__u_regs__DOT__regs[12]),64);
        tracep->chgQData(oldp+50,(vlSelf->zerocore__DOT__u_regs__DOT__regs[13]),64);
        tracep->chgQData(oldp+52,(vlSelf->zerocore__DOT__u_regs__DOT__regs[14]),64);
        tracep->chgQData(oldp+54,(vlSelf->zerocore__DOT__u_regs__DOT__regs[15]),64);
        tracep->chgQData(oldp+56,(vlSelf->zerocore__DOT__u_regs__DOT__regs[16]),64);
        tracep->chgQData(oldp+58,(vlSelf->zerocore__DOT__u_regs__DOT__regs[17]),64);
        tracep->chgQData(oldp+60,(vlSelf->zerocore__DOT__u_regs__DOT__regs[18]),64);
        tracep->chgQData(oldp+62,(vlSelf->zerocore__DOT__u_regs__DOT__regs[19]),64);
        tracep->chgQData(oldp+64,(vlSelf->zerocore__DOT__u_regs__DOT__regs[20]),64);
        tracep->chgQData(oldp+66,(vlSelf->zerocore__DOT__u_regs__DOT__regs[21]),64);
        tracep->chgQData(oldp+68,(vlSelf->zerocore__DOT__u_regs__DOT__regs[22]),64);
        tracep->chgQData(oldp+70,(vlSelf->zerocore__DOT__u_regs__DOT__regs[23]),64);
        tracep->chgQData(oldp+72,(vlSelf->zerocore__DOT__u_regs__DOT__regs[24]),64);
        tracep->chgQData(oldp+74,(vlSelf->zerocore__DOT__u_regs__DOT__regs[25]),64);
        tracep->chgQData(oldp+76,(vlSelf->zerocore__DOT__u_regs__DOT__regs[26]),64);
        tracep->chgQData(oldp+78,(vlSelf->zerocore__DOT__u_regs__DOT__regs[27]),64);
        tracep->chgQData(oldp+80,(vlSelf->zerocore__DOT__u_regs__DOT__regs[28]),64);
        tracep->chgQData(oldp+82,(vlSelf->zerocore__DOT__u_regs__DOT__regs[29]),64);
        tracep->chgQData(oldp+84,(vlSelf->zerocore__DOT__u_regs__DOT__regs[30]),64);
        tracep->chgQData(oldp+86,(vlSelf->zerocore__DOT__u_regs__DOT__regs[31]),64);
    }
    tracep->chgBit(oldp+88,(vlSelf->clk));
    tracep->chgBit(oldp+89,(vlSelf->rst));
    tracep->chgQData(oldp+90,(vlSelf->RamReadData),64);
    tracep->chgBit(oldp+92,(vlSelf->RamReadEnable));
    tracep->chgBit(oldp+93,(vlSelf->RamWriteEnable));
    tracep->chgQData(oldp+94,(vlSelf->RamReadAddr),64);
    tracep->chgQData(oldp+96,(vlSelf->RamWriteAddr),64);
    tracep->chgQData(oldp+98,(vlSelf->RamWriteMask),64);
    tracep->chgQData(oldp+100,(vlSelf->RamWriteData),64);
    tracep->chgIData(oldp+102,((IData)(vlSelf->RamReadData)),32);
    tracep->chgQData(oldp+103,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((0x1fU 
                                             & (vlSelf->zerocore__DOT__instD 
                                                >> 0xfU)) 
                                            == (0x1fU 
                                                & (vlSelf->zerocore__DOT__instD 
                                                   >> 7U)))
                                            ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                            : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                           [(0x1fU 
                                             & (vlSelf->zerocore__DOT__instD 
                                                >> 0xfU))]))),64);
    tracep->chgQData(oldp+105,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((0x1fU 
                                             & (vlSelf->zerocore__DOT__instD 
                                                >> 0x14U)) 
                                            == (0x1fU 
                                                & (vlSelf->zerocore__DOT__instD 
                                                   >> 7U)))
                                            ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                            : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                           [(0x1fU 
                                             & (vlSelf->zerocore__DOT__instD 
                                                >> 0x14U))]))),64);
}

void Vzerocore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vzerocore___024root__trace_cleanup\n"); );
    // Init
    Vzerocore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vzerocore___024root*>(voidSelf);
    Vzerocore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
