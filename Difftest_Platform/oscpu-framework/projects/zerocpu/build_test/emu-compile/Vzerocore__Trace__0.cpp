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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->zerocore__DOT__u_regs__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+1,(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
        tracep->chgQData(oldp+2,(vlSelf->zerocore__DOT__ina),64);
        tracep->chgQData(oldp+4,(vlSelf->zerocore__DOT__res),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+6,(vlSelf->zerocore__DOT__pc),64);
        tracep->chgQData(oldp+8,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0]),64);
        tracep->chgQData(oldp+10,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[1]),64);
        tracep->chgQData(oldp+12,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[2]),64);
        tracep->chgQData(oldp+14,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[3]),64);
        tracep->chgQData(oldp+16,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[4]),64);
        tracep->chgQData(oldp+18,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[5]),64);
        tracep->chgQData(oldp+20,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[6]),64);
        tracep->chgQData(oldp+22,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[7]),64);
        tracep->chgQData(oldp+24,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[8]),64);
        tracep->chgQData(oldp+26,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[9]),64);
        tracep->chgQData(oldp+28,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[10]),64);
        tracep->chgQData(oldp+30,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[11]),64);
        tracep->chgQData(oldp+32,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[12]),64);
        tracep->chgQData(oldp+34,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[13]),64);
        tracep->chgQData(oldp+36,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[14]),64);
        tracep->chgQData(oldp+38,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[15]),64);
        tracep->chgQData(oldp+40,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[16]),64);
        tracep->chgQData(oldp+42,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[17]),64);
        tracep->chgQData(oldp+44,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[18]),64);
        tracep->chgQData(oldp+46,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[19]),64);
        tracep->chgQData(oldp+48,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[20]),64);
        tracep->chgQData(oldp+50,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[21]),64);
        tracep->chgQData(oldp+52,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[22]),64);
        tracep->chgQData(oldp+54,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[23]),64);
        tracep->chgQData(oldp+56,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[24]),64);
        tracep->chgQData(oldp+58,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[25]),64);
        tracep->chgQData(oldp+60,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[26]),64);
        tracep->chgQData(oldp+62,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[27]),64);
        tracep->chgQData(oldp+64,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[28]),64);
        tracep->chgQData(oldp+66,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[29]),64);
        tracep->chgQData(oldp+68,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[30]),64);
        tracep->chgQData(oldp+70,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    }
    tracep->chgBit(oldp+72,(vlSelf->clk));
    tracep->chgBit(oldp+73,(vlSelf->rst));
    tracep->chgQData(oldp+74,(vlSelf->RamReadData),64);
    tracep->chgBit(oldp+76,(vlSelf->RamReadEnable));
    tracep->chgBit(oldp+77,(vlSelf->RamWriteEnable));
    tracep->chgQData(oldp+78,(vlSelf->RamReadAddr),64);
    tracep->chgQData(oldp+80,(vlSelf->RamWriteAddr),64);
    tracep->chgQData(oldp+82,(vlSelf->RamWriteMask),64);
    tracep->chgQData(oldp+84,(vlSelf->RamWriteData),64);
    tracep->chgIData(oldp+86,((IData)(vlSelf->RamReadData)),32);
    tracep->chgCData(oldp+87,((0x1fU & (IData)((vlSelf->RamReadData 
                                                >> 0xfU)))),5);
    tracep->chgCData(oldp+88,((0x1fU & (IData)((vlSelf->RamReadData 
                                                >> 0x14U)))),5);
    tracep->chgCData(oldp+89,((0x1fU & (IData)((vlSelf->RamReadData 
                                                >> 7U)))),5);
    tracep->chgQData(oldp+90,(((IData)(vlSelf->rst)
                                ? 0ULL : (((0x1fU & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 0x14U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 7U))))
                                           ? vlSelf->zerocore__DOT__rw
                                           : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                          [(0x1fU & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 0x14U)))]))),64);
    tracep->chgQData(oldp+92,((QData)((IData)((0xfffU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 0x14U)))))),64);
    tracep->chgCData(oldp+94,((0x7fU & (IData)(vlSelf->RamReadData))),7);
    tracep->chgCData(oldp+95,((7U & (IData)((vlSelf->RamReadData 
                                             >> 0xcU)))),3);
    tracep->chgBit(oldp+96,((0x13U == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->chgBit(oldp+97,((0U == (7U & (IData)((vlSelf->RamReadData 
                                                  >> 0xcU))))));
    tracep->chgBit(oldp+98,((IData)((0x13ULL == (0x707fULL 
                                                 & vlSelf->RamReadData)))));
    tracep->chgCData(oldp+99,(((0x13U == (0x7fU & (IData)(vlSelf->RamReadData))) 
                               & (0U == (7U & (IData)(
                                                      (vlSelf->RamReadData 
                                                       >> 0xcU)))))),8);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
