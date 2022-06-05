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
        tracep->chgQData(oldp+1,(vlSelf->zerocore__DOT__pc),64);
        tracep->chgQData(oldp+3,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[0]),64);
        tracep->chgQData(oldp+5,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[1]),64);
        tracep->chgQData(oldp+7,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[2]),64);
        tracep->chgQData(oldp+9,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[3]),64);
        tracep->chgQData(oldp+11,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[4]),64);
        tracep->chgQData(oldp+13,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[5]),64);
        tracep->chgQData(oldp+15,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[6]),64);
        tracep->chgQData(oldp+17,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[7]),64);
        tracep->chgQData(oldp+19,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[8]),64);
        tracep->chgQData(oldp+21,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[9]),64);
        tracep->chgQData(oldp+23,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[10]),64);
        tracep->chgQData(oldp+25,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[11]),64);
        tracep->chgQData(oldp+27,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[12]),64);
        tracep->chgQData(oldp+29,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[13]),64);
        tracep->chgQData(oldp+31,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[14]),64);
        tracep->chgQData(oldp+33,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[15]),64);
        tracep->chgQData(oldp+35,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[16]),64);
        tracep->chgQData(oldp+37,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[17]),64);
        tracep->chgQData(oldp+39,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[18]),64);
        tracep->chgQData(oldp+41,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[19]),64);
        tracep->chgQData(oldp+43,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[20]),64);
        tracep->chgQData(oldp+45,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[21]),64);
        tracep->chgQData(oldp+47,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[22]),64);
        tracep->chgQData(oldp+49,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[23]),64);
        tracep->chgQData(oldp+51,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[24]),64);
        tracep->chgQData(oldp+53,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[25]),64);
        tracep->chgQData(oldp+55,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[26]),64);
        tracep->chgQData(oldp+57,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[27]),64);
        tracep->chgQData(oldp+59,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[28]),64);
        tracep->chgQData(oldp+61,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[29]),64);
        tracep->chgQData(oldp+63,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[30]),64);
        tracep->chgQData(oldp+65,(vlSelf->zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    }
    tracep->chgBit(oldp+67,(vlSelf->clk));
    tracep->chgBit(oldp+68,(vlSelf->rst));
    tracep->chgQData(oldp+69,(vlSelf->RamReadData),64);
    tracep->chgBit(oldp+71,(vlSelf->RamReadEnable));
    tracep->chgBit(oldp+72,(vlSelf->RamWriteEnable));
    tracep->chgQData(oldp+73,(vlSelf->RamReadAddr),64);
    tracep->chgQData(oldp+75,(vlSelf->RamWriteAddr),64);
    tracep->chgQData(oldp+77,(vlSelf->RamWriteMask),64);
    tracep->chgQData(oldp+79,(vlSelf->RamWriteData),64);
    tracep->chgIData(oldp+81,((IData)(vlSelf->RamReadData)),32);
    tracep->chgCData(oldp+82,(vlSelf->zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
    tracep->chgCData(oldp+83,((0x1fU & (IData)((vlSelf->RamReadData 
                                                >> 0xfU)))),5);
    tracep->chgCData(oldp+84,((0x1fU & (IData)((vlSelf->RamReadData 
                                                >> 0x14U)))),5);
    tracep->chgCData(oldp+85,((0x1fU & (IData)((vlSelf->RamReadData 
                                                >> 7U)))),5);
    tracep->chgQData(oldp+86,(((IData)(vlSelf->rst)
                                ? 0ULL : (((0x1fU & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 0xfU))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 7U))))
                                           ? vlSelf->zerocore__DOT__res
                                           : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                          [(0x1fU & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 0xfU)))]))),64);
    tracep->chgQData(oldp+88,(((IData)(vlSelf->rst)
                                ? 0ULL : (((0x1fU & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 0x14U))) 
                                           == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 7U))))
                                           ? vlSelf->zerocore__DOT__res
                                           : vlSelf->zerocore__DOT__u_regs__DOT__regsheap
                                          [(0x1fU & (IData)(
                                                            (vlSelf->RamReadData 
                                                             >> 0x14U)))]))),64);
    tracep->chgQData(oldp+90,((QData)((IData)((0xfffU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 0x14U)))))),64);
    tracep->chgQData(oldp+92,(vlSelf->zerocore__DOT__res),64);
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
}
