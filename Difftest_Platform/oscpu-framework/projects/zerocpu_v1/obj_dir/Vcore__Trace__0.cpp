// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_sub_0(Vcore___024root* vlSelf, VerilatedVcd* tracep);

void Vcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_top_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vcore___024root__trace_chg_sub_0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->core__DOT__u_regs__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+1,(vlSelf->core__DOT__u_regs__DOT__regsheap[0]),64);
        tracep->chgQData(oldp+3,(vlSelf->core__DOT__u_regs__DOT__regsheap[1]),64);
        tracep->chgQData(oldp+5,(vlSelf->core__DOT__u_regs__DOT__regsheap[2]),64);
        tracep->chgQData(oldp+7,(vlSelf->core__DOT__u_regs__DOT__regsheap[3]),64);
        tracep->chgQData(oldp+9,(vlSelf->core__DOT__u_regs__DOT__regsheap[4]),64);
        tracep->chgQData(oldp+11,(vlSelf->core__DOT__u_regs__DOT__regsheap[5]),64);
        tracep->chgQData(oldp+13,(vlSelf->core__DOT__u_regs__DOT__regsheap[6]),64);
        tracep->chgQData(oldp+15,(vlSelf->core__DOT__u_regs__DOT__regsheap[7]),64);
        tracep->chgQData(oldp+17,(vlSelf->core__DOT__u_regs__DOT__regsheap[8]),64);
        tracep->chgQData(oldp+19,(vlSelf->core__DOT__u_regs__DOT__regsheap[9]),64);
        tracep->chgQData(oldp+21,(vlSelf->core__DOT__u_regs__DOT__regsheap[10]),64);
        tracep->chgQData(oldp+23,(vlSelf->core__DOT__u_regs__DOT__regsheap[11]),64);
        tracep->chgQData(oldp+25,(vlSelf->core__DOT__u_regs__DOT__regsheap[12]),64);
        tracep->chgQData(oldp+27,(vlSelf->core__DOT__u_regs__DOT__regsheap[13]),64);
        tracep->chgQData(oldp+29,(vlSelf->core__DOT__u_regs__DOT__regsheap[14]),64);
        tracep->chgQData(oldp+31,(vlSelf->core__DOT__u_regs__DOT__regsheap[15]),64);
        tracep->chgQData(oldp+33,(vlSelf->core__DOT__u_regs__DOT__regsheap[16]),64);
        tracep->chgQData(oldp+35,(vlSelf->core__DOT__u_regs__DOT__regsheap[17]),64);
        tracep->chgQData(oldp+37,(vlSelf->core__DOT__u_regs__DOT__regsheap[18]),64);
        tracep->chgQData(oldp+39,(vlSelf->core__DOT__u_regs__DOT__regsheap[19]),64);
        tracep->chgQData(oldp+41,(vlSelf->core__DOT__u_regs__DOT__regsheap[20]),64);
        tracep->chgQData(oldp+43,(vlSelf->core__DOT__u_regs__DOT__regsheap[21]),64);
        tracep->chgQData(oldp+45,(vlSelf->core__DOT__u_regs__DOT__regsheap[22]),64);
        tracep->chgQData(oldp+47,(vlSelf->core__DOT__u_regs__DOT__regsheap[23]),64);
        tracep->chgQData(oldp+49,(vlSelf->core__DOT__u_regs__DOT__regsheap[24]),64);
        tracep->chgQData(oldp+51,(vlSelf->core__DOT__u_regs__DOT__regsheap[25]),64);
        tracep->chgQData(oldp+53,(vlSelf->core__DOT__u_regs__DOT__regsheap[26]),64);
        tracep->chgQData(oldp+55,(vlSelf->core__DOT__u_regs__DOT__regsheap[27]),64);
        tracep->chgQData(oldp+57,(vlSelf->core__DOT__u_regs__DOT__regsheap[28]),64);
        tracep->chgQData(oldp+59,(vlSelf->core__DOT__u_regs__DOT__regsheap[29]),64);
        tracep->chgQData(oldp+61,(vlSelf->core__DOT__u_regs__DOT__regsheap[30]),64);
        tracep->chgQData(oldp+63,(vlSelf->core__DOT__u_regs__DOT__regsheap[31]),64);
    }
    tracep->chgBit(oldp+65,(vlSelf->core__02Eclk));
    tracep->chgBit(oldp+66,(vlSelf->rst_n));
    tracep->chgQData(oldp+67,(vlSelf->ReadData),64);
    tracep->chgBit(oldp+69,(vlSelf->ReadEnable));
    tracep->chgBit(oldp+70,(vlSelf->WriteEnable));
    tracep->chgQData(oldp+71,(vlSelf->ReadAddr),64);
    tracep->chgQData(oldp+73,(vlSelf->WriteAddr),64);
    tracep->chgQData(oldp+75,(vlSelf->WriteMask),64);
    tracep->chgQData(oldp+77,(vlSelf->WriteData),64);
    tracep->chgBit(oldp+79,(vlSelf->iram__02Eclk));
    tracep->chgBit(oldp+80,(vlSelf->rd_en));
    tracep->chgSData(oldp+81,(vlSelf->rd_addr),12);
    tracep->chgIData(oldp+82,(vlSelf->rd_data),32);
    tracep->chgBit(oldp+83,(vlSelf->wr_en));
    tracep->chgSData(oldp+84,(vlSelf->wr_addr),12);
    tracep->chgIData(oldp+85,(vlSelf->wr_data),32);
    tracep->chgSData(oldp+86,(vlSelf->core__DOT__u_pcgen__DOT__pc),12);
    tracep->chgIData(oldp+87,((IData)(vlSelf->ReadData)),32);
    tracep->chgCData(oldp+88,(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0),4);
    tracep->chgCData(oldp+89,((0x1fU & (IData)((vlSelf->ReadData 
                                                >> 0xfU)))),5);
    tracep->chgCData(oldp+90,((0x1fU & (IData)((vlSelf->ReadData 
                                                >> 0x14U)))),5);
    tracep->chgCData(oldp+91,((0x1fU & (IData)((vlSelf->ReadData 
                                                >> 7U)))),5);
    tracep->chgQData(oldp+92,((QData)((IData)((0xfffU 
                                               & (IData)(
                                                         (vlSelf->ReadData 
                                                          >> 0x14U)))))),64);
    tracep->chgQData(oldp+94,(((0U == (0x1fU & (IData)(
                                                       (vlSelf->ReadData 
                                                        >> 0xfU))))
                                ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                               [(0x1fU & (IData)((vlSelf->ReadData 
                                                  >> 0xfU)))])),64);
    tracep->chgQData(oldp+96,(((0U == (0x1fU & (IData)(
                                                       (vlSelf->ReadData 
                                                        >> 0x14U))))
                                ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                               [(0x1fU & (IData)((vlSelf->ReadData 
                                                  >> 0x14U)))])),64);
    tracep->chgQData(oldp+98,(((0U == (IData)(vlSelf->core__DOT__u_contrGen__DOT__aluCtl__out__out0))
                                ? (((0U == (0x1fU & (IData)(
                                                            (vlSelf->ReadData 
                                                             >> 0xfU))))
                                     ? 0ULL : vlSelf->core__DOT__u_regs__DOT__regsheap
                                    [(0x1fU & (IData)(
                                                      (vlSelf->ReadData 
                                                       >> 0xfU)))]) 
                                   + (QData)((IData)(
                                                     (0xfffU 
                                                      & (IData)(
                                                                (vlSelf->ReadData 
                                                                 >> 0x14U))))))
                                : 0ULL)),64);
    tracep->chgCData(oldp+100,((0x7fU & (IData)(vlSelf->ReadData))),7);
    tracep->chgCData(oldp+101,((7U & (IData)((vlSelf->ReadData 
                                              >> 0xcU)))),3);
    tracep->chgBit(oldp+102,((0x13U == (0x7fU & (IData)(vlSelf->ReadData)))));
    tracep->chgBit(oldp+103,((0U == (7U & (IData)((vlSelf->ReadData 
                                                   >> 0xcU))))));
    tracep->chgBit(oldp+104,((IData)((0x13ULL == (0x707fULL 
                                                  & vlSelf->ReadData)))));
    tracep->chgCData(oldp+105,(((0x13U == (0x7fU & (IData)(vlSelf->ReadData))) 
                                & (0U == (7U & (IData)(
                                                       (vlSelf->ReadData 
                                                        >> 0xcU)))))),8);
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
