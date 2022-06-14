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
        tracep->chgQData(oldp+2,(vlSelf->zerocore__DOT__rs1Data_D2E__DOT__dout_r),64);
        tracep->chgQData(oldp+4,(vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r),64);
        tracep->chgCData(oldp+6,(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r),5);
        tracep->chgBit(oldp+7,(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteEnable_M2W__DOT__dout_r));
        tracep->chgCData(oldp+8,(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r),5);
        tracep->chgCData(oldp+9,(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_dff__DOT__dout_r),2);
        tracep->chgCData(oldp+10,(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect2_dff__DOT__dout_r),2);
        tracep->chgQData(oldp+11,(vlSelf->zerocore__DOT__u_regs__DOT__regs[0]),64);
        tracep->chgQData(oldp+13,(vlSelf->zerocore__DOT__u_regs__DOT__regs[1]),64);
        tracep->chgQData(oldp+15,(vlSelf->zerocore__DOT__u_regs__DOT__regs[2]),64);
        tracep->chgQData(oldp+17,(vlSelf->zerocore__DOT__u_regs__DOT__regs[3]),64);
        tracep->chgQData(oldp+19,(vlSelf->zerocore__DOT__u_regs__DOT__regs[4]),64);
        tracep->chgQData(oldp+21,(vlSelf->zerocore__DOT__u_regs__DOT__regs[5]),64);
        tracep->chgQData(oldp+23,(vlSelf->zerocore__DOT__u_regs__DOT__regs[6]),64);
        tracep->chgQData(oldp+25,(vlSelf->zerocore__DOT__u_regs__DOT__regs[7]),64);
        tracep->chgQData(oldp+27,(vlSelf->zerocore__DOT__u_regs__DOT__regs[8]),64);
        tracep->chgQData(oldp+29,(vlSelf->zerocore__DOT__u_regs__DOT__regs[9]),64);
        tracep->chgQData(oldp+31,(vlSelf->zerocore__DOT__u_regs__DOT__regs[10]),64);
        tracep->chgQData(oldp+33,(vlSelf->zerocore__DOT__u_regs__DOT__regs[11]),64);
        tracep->chgQData(oldp+35,(vlSelf->zerocore__DOT__u_regs__DOT__regs[12]),64);
        tracep->chgQData(oldp+37,(vlSelf->zerocore__DOT__u_regs__DOT__regs[13]),64);
        tracep->chgQData(oldp+39,(vlSelf->zerocore__DOT__u_regs__DOT__regs[14]),64);
        tracep->chgQData(oldp+41,(vlSelf->zerocore__DOT__u_regs__DOT__regs[15]),64);
        tracep->chgQData(oldp+43,(vlSelf->zerocore__DOT__u_regs__DOT__regs[16]),64);
        tracep->chgQData(oldp+45,(vlSelf->zerocore__DOT__u_regs__DOT__regs[17]),64);
        tracep->chgQData(oldp+47,(vlSelf->zerocore__DOT__u_regs__DOT__regs[18]),64);
        tracep->chgQData(oldp+49,(vlSelf->zerocore__DOT__u_regs__DOT__regs[19]),64);
        tracep->chgQData(oldp+51,(vlSelf->zerocore__DOT__u_regs__DOT__regs[20]),64);
        tracep->chgQData(oldp+53,(vlSelf->zerocore__DOT__u_regs__DOT__regs[21]),64);
        tracep->chgQData(oldp+55,(vlSelf->zerocore__DOT__u_regs__DOT__regs[22]),64);
        tracep->chgQData(oldp+57,(vlSelf->zerocore__DOT__u_regs__DOT__regs[23]),64);
        tracep->chgQData(oldp+59,(vlSelf->zerocore__DOT__u_regs__DOT__regs[24]),64);
        tracep->chgQData(oldp+61,(vlSelf->zerocore__DOT__u_regs__DOT__regs[25]),64);
        tracep->chgQData(oldp+63,(vlSelf->zerocore__DOT__u_regs__DOT__regs[26]),64);
        tracep->chgQData(oldp+65,(vlSelf->zerocore__DOT__u_regs__DOT__regs[27]),64);
        tracep->chgQData(oldp+67,(vlSelf->zerocore__DOT__u_regs__DOT__regs[28]),64);
        tracep->chgQData(oldp+69,(vlSelf->zerocore__DOT__u_regs__DOT__regs[29]),64);
        tracep->chgQData(oldp+71,(vlSelf->zerocore__DOT__u_regs__DOT__regs[30]),64);
        tracep->chgQData(oldp+73,(vlSelf->zerocore__DOT__u_regs__DOT__regs[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+75,(vlSelf->zerocore__DOT__rs1ReadEnable));
        tracep->chgBit(oldp+76,(vlSelf->zerocore__DOT__u_id__DOT__Rtype));
        tracep->chgCData(oldp+77,(vlSelf->zerocore__DOT__rs1ReadAddr),5);
        tracep->chgCData(oldp+78,(vlSelf->zerocore__DOT__rs2ReadAddr),5);
        tracep->chgQData(oldp+79,(vlSelf->zerocore__DOT__u_ex__DOT__resADD),64);
        tracep->chgCData(oldp+81,(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r),2);
    }
    tracep->chgBit(oldp+82,(vlSelf->clk));
    tracep->chgBit(oldp+83,(vlSelf->rst));
    tracep->chgQData(oldp+84,(vlSelf->RamReadData),64);
    tracep->chgBit(oldp+86,(vlSelf->RamReadEnable));
    tracep->chgQData(oldp+87,(vlSelf->RamReadAddr),64);
    tracep->chgIData(oldp+89,((IData)(vlSelf->RamReadData)),32);
    tracep->chgQData(oldp+90,(((IData)((0x13ULL == 
                                        (0x707fULL 
                                         & vlSelf->RamReadData)))
                                ? (QData)((IData)((0xfffU 
                                                   & (IData)(
                                                             (vlSelf->RamReadData 
                                                              >> 0x14U)))))
                                : vlSelf->zerocore__DOT__rs2Data_D2E__DOT__dout_r)),64);
    tracep->chgBit(oldp+92,((IData)((0x13ULL == (0x707fULL 
                                                 & vlSelf->RamReadData)))));
    tracep->chgQData(oldp+93,((QData)((IData)((0xfffU 
                                               & (IData)(
                                                         (vlSelf->RamReadData 
                                                          >> 0x14U)))))),64);
    tracep->chgQData(oldp+95,(((IData)(vlSelf->rst)
                                ? 0ULL : ((IData)(vlSelf->zerocore__DOT__rs1ReadEnable)
                                           ? (((IData)(vlSelf->zerocore__DOT__rs1ReadAddr) 
                                               == (IData)(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r))
                                               ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                               : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                              [vlSelf->zerocore__DOT__rs1ReadAddr])
                                           : 0ULL))),64);
    tracep->chgQData(oldp+97,(((IData)(vlSelf->rst)
                                ? 0ULL : ((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)
                                           ? (((IData)(vlSelf->zerocore__DOT__rs2ReadAddr) 
                                               == (IData)(vlSelf->zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r))
                                               ? vlSelf->zerocore__DOT__u_ex__DOT__resADD
                                               : vlSelf->zerocore__DOT__u_regs__DOT__regs
                                              [vlSelf->zerocore__DOT__rs2ReadAddr])
                                           : 0ULL))),64);
    tracep->chgBit(oldp+99,(((IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype) 
                             | (0x13U == (0x7fU & (IData)(vlSelf->RamReadData))))));
    tracep->chgCData(oldp+100,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 7U)))),5);
    tracep->chgBit(oldp+101,(vlSelf->zerocore__DOT__rdWriteEnableM));
    tracep->chgCData(oldp+102,((((~ (IData)(vlSelf->zerocore__DOT__u_ctrl__DOT__Redirect1_r)) 
                                 & (((0U != (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                                     << 1U) | (0U != (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)))) 
                                & (((((IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r) 
                                      == (IData)(vlSelf->zerocore__DOT__rs2ReadAddr)) 
                                     & (IData)(vlSelf->zerocore__DOT__u_id__DOT__Rtype)) 
                                    << 1U) | (((IData)(vlSelf->zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r) 
                                               == (IData)(vlSelf->zerocore__DOT__rs1ReadAddr)) 
                                              & (IData)(vlSelf->zerocore__DOT__rs1ReadEnable))))),2);
    tracep->chgCData(oldp+103,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 0xfU)))),5);
    tracep->chgCData(oldp+104,((0x1fU & (IData)((vlSelf->RamReadData 
                                                 >> 0x14U)))),5);
    tracep->chgCData(oldp+105,((0x7fU & (IData)(vlSelf->RamReadData))),7);
    tracep->chgCData(oldp+106,((7U & (IData)((vlSelf->RamReadData 
                                              >> 0xcU)))),3);
    tracep->chgBit(oldp+107,((0x13U == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->chgBit(oldp+108,((0x33U == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->chgBit(oldp+109,((0x3bU == (0x7fU & (IData)(vlSelf->RamReadData)))));
    tracep->chgBit(oldp+110,((0U == (7U & (IData)((vlSelf->RamReadData 
                                                   >> 0xcU))))));
    tracep->chgBit(oldp+111,((IData)((0x33ULL == (0x707fULL 
                                                  & vlSelf->RamReadData)))));
    tracep->chgCData(oldp+112,(((0x13U == (0x7fU & (IData)(vlSelf->RamReadData))) 
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
