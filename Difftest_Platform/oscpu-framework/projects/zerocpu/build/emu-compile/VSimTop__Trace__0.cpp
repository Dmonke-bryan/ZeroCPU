// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+1,(vlSelf->SimTop__DOT__ReadData),64);
        tracep->chgQData(oldp+3,(vlSelf->SimTop__DOT__u_zerocore__DOT__pc),64);
        tracep->chgIData(oldp+5,(((1U & (IData)((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                                 >> 2U)))
                                   ? (IData)((vlSelf->SimTop__DOT__ReadData 
                                              >> 0x20U))
                                   : (IData)(vlSelf->SimTop__DOT__ReadData))),32);
        tracep->chgQData(oldp+6,(vlSelf->SimTop__DOT__r_pc),64);
        tracep->chgIData(oldp+8,(vlSelf->SimTop__DOT__r_inst),32);
        tracep->chgBit(oldp+9,(vlSelf->SimTop__DOT__r_valid));
        tracep->chgQData(oldp+10,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0U]),64);
        tracep->chgQData(oldp+12,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [1U]),64);
        tracep->chgQData(oldp+14,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [2U]),64);
        tracep->chgQData(oldp+16,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [3U]),64);
        tracep->chgQData(oldp+18,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [4U]),64);
        tracep->chgQData(oldp+20,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [5U]),64);
        tracep->chgQData(oldp+22,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [6U]),64);
        tracep->chgQData(oldp+24,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [7U]),64);
        tracep->chgQData(oldp+26,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [8U]),64);
        tracep->chgQData(oldp+28,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [9U]),64);
        tracep->chgQData(oldp+30,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0xaU]),64);
        tracep->chgQData(oldp+32,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0xbU]),64);
        tracep->chgQData(oldp+34,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0xcU]),64);
        tracep->chgQData(oldp+36,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0xdU]),64);
        tracep->chgQData(oldp+38,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0xeU]),64);
        tracep->chgQData(oldp+40,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0xfU]),64);
        tracep->chgQData(oldp+42,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x10U]),64);
        tracep->chgQData(oldp+44,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x11U]),64);
        tracep->chgQData(oldp+46,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x12U]),64);
        tracep->chgQData(oldp+48,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x13U]),64);
        tracep->chgQData(oldp+50,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x14U]),64);
        tracep->chgQData(oldp+52,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x15U]),64);
        tracep->chgQData(oldp+54,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x16U]),64);
        tracep->chgQData(oldp+56,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x17U]),64);
        tracep->chgQData(oldp+58,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x18U]),64);
        tracep->chgQData(oldp+60,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x19U]),64);
        tracep->chgQData(oldp+62,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x1aU]),64);
        tracep->chgQData(oldp+64,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x1bU]),64);
        tracep->chgQData(oldp+66,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x1cU]),64);
        tracep->chgQData(oldp+68,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x1dU]),64);
        tracep->chgQData(oldp+70,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x1eU]),64);
        tracep->chgQData(oldp+72,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                  [0x1fU]),64);
        tracep->chgQData(oldp+74,((vlSelf->SimTop__DOT__u_zerocore__DOT__pc 
                                   - 0x80000000ULL)),64);
        tracep->chgIData(oldp+76,((IData)(vlSelf->SimTop__DOT__ReadData)),32);
        tracep->chgCData(oldp+77,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0),4);
        tracep->chgCData(oldp+78,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+79,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+80,((0x1fU & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                            >> 7U))),5);
        tracep->chgQData(oldp+81,((QData)((IData)((vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                   >> 0x14U)))),64);
        tracep->chgIData(oldp+83,(vlSelf->SimTop__DOT__u_zerocore__DOT__instD),32);
        tracep->chgCData(oldp+84,((0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)),7);
        tracep->chgCData(oldp+85,((7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                         >> 0xcU))),3);
        tracep->chgBit(oldp+86,((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_zerocore__DOT__instD))));
        tracep->chgBit(oldp+87,((0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+88,((IData)((0x13U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)))));
        tracep->chgCData(oldp+89,(((0x13U == (0x7fU 
                                              & vlSelf->SimTop__DOT__u_zerocore__DOT__instD)) 
                                   & (0U == (7U & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                   >> 0xcU))))),8);
        tracep->chgQData(oldp+90,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[0]),64);
        tracep->chgQData(oldp+92,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[1]),64);
        tracep->chgQData(oldp+94,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[2]),64);
        tracep->chgQData(oldp+96,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[3]),64);
        tracep->chgQData(oldp+98,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[4]),64);
        tracep->chgQData(oldp+100,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[5]),64);
        tracep->chgQData(oldp+102,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[6]),64);
        tracep->chgQData(oldp+104,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[7]),64);
        tracep->chgQData(oldp+106,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[8]),64);
        tracep->chgQData(oldp+108,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[9]),64);
        tracep->chgQData(oldp+110,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[10]),64);
        tracep->chgQData(oldp+112,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[11]),64);
        tracep->chgQData(oldp+114,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[12]),64);
        tracep->chgQData(oldp+116,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[13]),64);
        tracep->chgQData(oldp+118,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[14]),64);
        tracep->chgQData(oldp+120,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[15]),64);
        tracep->chgQData(oldp+122,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[16]),64);
        tracep->chgQData(oldp+124,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[17]),64);
        tracep->chgQData(oldp+126,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[18]),64);
        tracep->chgQData(oldp+128,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[19]),64);
        tracep->chgQData(oldp+130,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[20]),64);
        tracep->chgQData(oldp+132,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[21]),64);
        tracep->chgQData(oldp+134,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[22]),64);
        tracep->chgQData(oldp+136,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[23]),64);
        tracep->chgQData(oldp+138,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[24]),64);
        tracep->chgQData(oldp+140,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[25]),64);
        tracep->chgQData(oldp+142,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[26]),64);
        tracep->chgQData(oldp+144,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[27]),64);
        tracep->chgQData(oldp+146,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[28]),64);
        tracep->chgQData(oldp+148,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[29]),64);
        tracep->chgQData(oldp+150,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[30]),64);
        tracep->chgQData(oldp+152,(vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap[31]),64);
    }
    tracep->chgBit(oldp+154,(vlSelf->clock));
    tracep->chgBit(oldp+155,(vlSelf->reset));
    tracep->chgQData(oldp+156,(vlSelf->io_logCtrl_log_begin),64);
    tracep->chgQData(oldp+158,(vlSelf->io_logCtrl_log_end),64);
    tracep->chgQData(oldp+160,(vlSelf->io_logCtrl_log_level),64);
    tracep->chgBit(oldp+162,(vlSelf->io_perfInfo_clean));
    tracep->chgBit(oldp+163,(vlSelf->io_perfInfo_dump));
    tracep->chgBit(oldp+164,(vlSelf->io_uart_out_valid));
    tracep->chgCData(oldp+165,(vlSelf->io_uart_out_ch),8);
    tracep->chgBit(oldp+166,(vlSelf->io_uart_in_valid));
    tracep->chgCData(oldp+167,(vlSelf->io_uart_in_ch),8);
    tracep->chgQData(oldp+168,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((0x1fU 
                                             & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                >> 0x14U)) 
                                            == (0x1fU 
                                                & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                   >> 7U)))
                                            ? vlSelf->SimTop__DOT__u_zerocore__DOT__rw
                                            : vlSelf->SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap
                                           [(0x1fU 
                                             & (vlSelf->SimTop__DOT__u_zerocore__DOT__instD 
                                                >> 0x14U))]))),64);
    tracep->chgQData(oldp+170,(vlSelf->SimTop__DOT__u_zerocore__DOT__ina),64);
    tracep->chgQData(oldp+172,(vlSelf->SimTop__DOT__u_zerocore__DOT__res),64);
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
