// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


void Vrvcpu___024root__trace_chg_sub_0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep);

void Vrvcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vrvcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrvcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vrvcpu___024root__trace_chg_sub_0(Vrvcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r));
        tracep->chgQData(oldp+1,(vlSelf->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r),64);
        tracep->chgBit(oldp+3,(vlSelf->rvcpu__DOT__rs1ReadEnable));
        tracep->chgBit(oldp+4,(vlSelf->rvcpu__DOT__rs2ReadEnable));
        tracep->chgBit(oldp+5,((1U & ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r) 
                                      >> 5U))));
        tracep->chgCData(oldp+6,(vlSelf->rvcpu__DOT__rs1ReadAddr),5);
        tracep->chgCData(oldp+7,(vlSelf->rvcpu__DOT__rs2ReadAddr),5);
        tracep->chgCData(oldp+8,((0x1fU & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r))),5);
        tracep->chgBit(oldp+9,(vlSelf->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r));
        tracep->chgBit(oldp+10,(vlSelf->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r));
        tracep->chgBit(oldp+11,((1U & ((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                       >> 5U))));
        tracep->chgCData(oldp+12,((0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r))),5);
        tracep->chgQData(oldp+13,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r),64);
        tracep->chgBit(oldp+15,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r));
        tracep->chgCData(oldp+16,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r),5);
        tracep->chgQData(oldp+17,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r),64);
        tracep->chgIData(oldp+19,(vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r),32);
        tracep->chgQData(oldp+20,(vlSelf->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r),64);
        tracep->chgSData(oldp+22,(vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r),11);
        tracep->chgQData(oldp+23,(vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r),64);
        tracep->chgSData(oldp+25,(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r),10);
        tracep->chgSData(oldp+26,(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r),14);
        tracep->chgQData(oldp+27,(vlSelf->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+29,(vlSelf->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+31,(vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r),64);
        tracep->chgSData(oldp+33,(vlSelf->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r),11);
        tracep->chgQData(oldp+34,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r),64);
        tracep->chgQData(oldp+36,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r),64);
        tracep->chgQData(oldp+38,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r),64);
        tracep->chgBit(oldp+40,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r));
        tracep->chgBit(oldp+41,(vlSelf->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r));
        tracep->chgCData(oldp+42,(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r),2);
        tracep->chgCData(oldp+43,(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r),2);
        tracep->chgCData(oldp+44,(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r),2);
        tracep->chgBit(oldp+45,((1U & ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                       >> 4U))));
        tracep->chgBit(oldp+46,(vlSelf->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r));
        tracep->chgCData(oldp+47,(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r),2);
        tracep->chgCData(oldp+48,(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad),2);
        tracep->chgCData(oldp+49,(((~ (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                                   & (((((0x1fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                         == (IData)(vlSelf->rvcpu__DOT__rs2ReadAddr)) 
                                        & (IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)) 
                                       << 1U) | (((0x1fU 
                                                   & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                                  == (IData)(vlSelf->rvcpu__DOT__rs1ReadAddr)) 
                                                 & (IData)(vlSelf->rvcpu__DOT__rs1ReadEnable))))),2);
        tracep->chgQData(oldp+50,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data),64);
        tracep->chgQData(oldp+52,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data),64);
        tracep->chgQData(oldp+54,(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2),64);
        tracep->chgQData(oldp+56,(((IData)((0U != (0x1a0U 
                                                   & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                    ? vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                    : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data)),64);
        tracep->chgQData(oldp+58,(((2U & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                    ? vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data
                                    : vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r)),64);
        tracep->chgQData(oldp+60,(vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD),64);
        tracep->chgQData(oldp+62,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                   - vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+64,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                   << (0x3fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+66,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                   < vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+68,((QData)((IData)(VL_LTS_IQQ(64, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+70,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                   >> (0x3fU & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+72,(VL_SHIFTRS_QQI(64,64,6, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+74,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                   ^ vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+76,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                   | vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+78,((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                   & vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+80,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                   > vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+82,((QData)((IData)(VL_GTS_IQQ(64, vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+84,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                   == vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+86,((QData)((IData)((vlSelf->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                   != vlSelf->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+88,(vlSelf->rvcpu__DOT__Exe_stage__DOT__result),64);
        tracep->chgBit(oldp+90,((1U & (((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                        >> 5U) & (IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__result)))));
        tracep->chgQData(oldp+91,((4ULL + vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
        tracep->chgCData(oldp+93,(vlSelf->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r),6);
        tracep->chgCData(oldp+94,(vlSelf->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r),6);
        tracep->chgCData(oldp+95,((0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)),7);
        tracep->chgCData(oldp+96,((0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 7U))),5);
        tracep->chgCData(oldp+97,((7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+98,((vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+99,((vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                   >> 0x1aU)),6);
        tracep->chgCData(oldp+100,((0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+101,((0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->chgQData(oldp+102,((((- (QData)((IData)(
                                                        (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                 >> 0x14U))))),64);
        tracep->chgQData(oldp+104,((((- (QData)((IData)(
                                                        (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+106,((((- (QData)((IData)(
                                                        (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                             >> 7U))))))))),64);
        tracep->chgQData(oldp+108,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),64);
        tracep->chgQData(oldp+110,((((- (QData)((IData)(
                                                        (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                              >> 0x14U))))))))),64);
        tracep->chgBit(oldp+112,((0U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+113,((1U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+114,((2U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+115,((3U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+116,((4U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+117,((5U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+118,((6U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+119,((7U == (7U & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+120,((0U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                         >> 0x19U))));
        tracep->chgBit(oldp+121,((0x20U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0x19U))));
        tracep->chgBit(oldp+122,((0U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+123,((0x10U == (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+124,((3U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+125,((7U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+126,((0xbU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+127,((0xfU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+128,((0x13U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+129,((0x17U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+130,((0x1bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+131,((0x1fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+132,((0x23U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+133,((0x27U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+134,((0x2bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+135,((0x2fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+136,((0x33U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+137,((0x37U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+138,((0x3bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+139,((0x3fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+140,((0x43U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+141,((0x47U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+142,((0x4bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+143,((0x4fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+144,((0x53U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+145,((0x57U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+146,((0x5bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+147,((0x5fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+148,((0x63U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+149,((0x67U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+150,((0x6bU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+151,((0x6fU == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+152,((0x73U == (0x7fU & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
        tracep->chgBit(oldp+153,(vlSelf->rvcpu__DOT__Id_stage__DOT__Rtype));
        tracep->chgBit(oldp+154,(vlSelf->rvcpu__DOT__Id_stage__DOT__Itype));
        tracep->chgBit(oldp+155,(vlSelf->rvcpu__DOT__Id_stage__DOT__Utype));
        tracep->chgBit(oldp+156,(((0x67U == (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+157,(((0x13U == (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                  | (0x1bU == (0x7fU 
                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+158,(((0x33U == (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+159,(((0x1bU == (0x7fU 
                                             & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgSData(oldp+160,((((0x37U == (0x7fU 
                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                     << 9U) | (((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                << 8U) 
                                               | (((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                   << 7U) 
                                                  | (((IData)(
                                                              (0x206fU 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                      << 6U) 
                                                     | (((0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                         << 5U) 
                                                        | (((3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                            << 4U) 
                                                           | (((0x23U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                               << 3U) 
                                                              | ((((0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                   | (0x1bU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                  << 2U) 
                                                                 | ((((0x33U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                      | (0x3bU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                     << 1U) 
                                                                    | ((0x1bU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                       | (0x3bU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))),10);
        tracep->chgBit(oldp+161,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+162,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+163,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+164,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+165,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+166,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+167,((IData)((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+168,((IData)((0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+169,((IData)((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+170,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+171,((IData)((0x101bU == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+172,((IData)((0x501bU == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+173,((IData)((0x4000501bU 
                                          == (0xfe00707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+174,((IData)((0x206fU == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+175,((IData)((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+176,((IData)((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+177,((IData)((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+178,((IData)((0x2033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+179,((IData)((0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+180,((IData)((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+181,((IData)((0x5033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+182,((IData)((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+183,((IData)((0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+184,((IData)((0x7033U == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+185,((IData)((0x3bU == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+186,((IData)((0x4000003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+187,((IData)((0x103bU == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+188,((IData)((0x503bU == 
                                          (0xfe00707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+189,((IData)((0x4000503bU 
                                          == (0xfe00707fU 
                                              & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+190,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+191,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+192,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+193,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+194,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+195,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+196,((IData)((3U == (0x707fU 
                                                 & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+197,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+198,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+199,((IData)((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+200,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+201,((IData)((0x6003U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+202,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+203,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+204,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+205,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+206,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgSData(oldp+207,(vlSelf->rvcpu__DOT__Id_stage__DOT__memFuncE_r),11);
        tracep->chgSData(oldp+208,(vlSelf->rvcpu__DOT__Id_stage__DOT__instFuncE_r),14);
        tracep->chgBit(oldp+209,((IData)((0xfU == (0x707fU 
                                                   & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+210,((IData)((0x100fU == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgCData(oldp+211,((((IData)((0xfU 
                                              == (0x707fU 
                                                  & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                     << 1U) | (IData)(
                                                      (0x100fU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),2);
        tracep->chgBit(oldp+212,((IData)((0x1073U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+213,((IData)((0x2073U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+214,((IData)((0x3073U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+215,((IData)((0x5073U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+216,((IData)((0x6073U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+217,((IData)((0x7073U == 
                                          (0x707fU 
                                           & vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+218,(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r));
        tracep->chgCData(oldp+219,(((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                     ? (0x1fU & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgQData(oldp+220,(vlSelf->rvcpu__DOT__Id_stage__DOT__imm_r),64);
        tracep->chgCData(oldp+222,((((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                                     << 5U) | ((IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                                ? (0x1fU 
                                                   & (vlSelf->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                      >> 7U))
                                                : 0U))),6);
        tracep->chgQData(oldp+223,(vlSelf->rvcpu__DOT__If_stage__DOT__pc),64);
        tracep->chgBit(oldp+225,(vlSelf->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r));
        tracep->chgQData(oldp+226,(vlSelf->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgQData(oldp+228,(((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r)
                                     ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                                     : 0ULL)),64);
        tracep->chgQData(oldp+230,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[0]),64);
        tracep->chgQData(oldp+232,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[1]),64);
        tracep->chgQData(oldp+234,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[2]),64);
        tracep->chgQData(oldp+236,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[3]),64);
        tracep->chgQData(oldp+238,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[4]),64);
        tracep->chgQData(oldp+240,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[5]),64);
        tracep->chgQData(oldp+242,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[6]),64);
        tracep->chgQData(oldp+244,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[7]),64);
        tracep->chgQData(oldp+246,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[8]),64);
        tracep->chgQData(oldp+248,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[9]),64);
        tracep->chgQData(oldp+250,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[10]),64);
        tracep->chgQData(oldp+252,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[11]),64);
        tracep->chgQData(oldp+254,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[12]),64);
        tracep->chgQData(oldp+256,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[13]),64);
        tracep->chgQData(oldp+258,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[14]),64);
        tracep->chgQData(oldp+260,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[15]),64);
        tracep->chgQData(oldp+262,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[16]),64);
        tracep->chgQData(oldp+264,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[17]),64);
        tracep->chgQData(oldp+266,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[18]),64);
        tracep->chgQData(oldp+268,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[19]),64);
        tracep->chgQData(oldp+270,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[20]),64);
        tracep->chgQData(oldp+272,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[21]),64);
        tracep->chgQData(oldp+274,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[22]),64);
        tracep->chgQData(oldp+276,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[23]),64);
        tracep->chgQData(oldp+278,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[24]),64);
        tracep->chgQData(oldp+280,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[25]),64);
        tracep->chgQData(oldp+282,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[26]),64);
        tracep->chgQData(oldp+284,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[27]),64);
        tracep->chgQData(oldp+286,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[28]),64);
        tracep->chgQData(oldp+288,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[29]),64);
        tracep->chgQData(oldp+290,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[30]),64);
        tracep->chgQData(oldp+292,(vlSelf->rvcpu__DOT__Regfile__DOT__regs[31]),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+294,(vlSelf->rvcpu__DOT__flushD));
        tracep->chgBit(oldp+295,(vlSelf->rvcpu__DOT__Exe_stage__DOT__jump_r));
        tracep->chgQData(oldp+296,(vlSelf->rvcpu__DOT__Mem_stage__DOT__result),64);
        tracep->chgQData(oldp+298,(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r),64);
        tracep->chgQData(oldp+300,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[0]),64);
        tracep->chgQData(oldp+302,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[1]),64);
        tracep->chgQData(oldp+304,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[2]),64);
        tracep->chgQData(oldp+306,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[3]),64);
        tracep->chgQData(oldp+308,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[4]),64);
        tracep->chgQData(oldp+310,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[5]),64);
        tracep->chgQData(oldp+312,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[6]),64);
        tracep->chgQData(oldp+314,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[7]),64);
        tracep->chgQData(oldp+316,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[8]),64);
        tracep->chgQData(oldp+318,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[9]),64);
        tracep->chgQData(oldp+320,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[10]),64);
        tracep->chgQData(oldp+322,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[11]),64);
        tracep->chgQData(oldp+324,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[12]),64);
        tracep->chgQData(oldp+326,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[13]),64);
        tracep->chgQData(oldp+328,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[14]),64);
        tracep->chgQData(oldp+330,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[15]),64);
        tracep->chgQData(oldp+332,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[16]),64);
        tracep->chgQData(oldp+334,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[17]),64);
        tracep->chgQData(oldp+336,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[18]),64);
        tracep->chgQData(oldp+338,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[19]),64);
        tracep->chgQData(oldp+340,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[20]),64);
        tracep->chgQData(oldp+342,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[21]),64);
        tracep->chgQData(oldp+344,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[22]),64);
        tracep->chgQData(oldp+346,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[23]),64);
        tracep->chgQData(oldp+348,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[24]),64);
        tracep->chgQData(oldp+350,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[25]),64);
        tracep->chgQData(oldp+352,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[26]),64);
        tracep->chgQData(oldp+354,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[27]),64);
        tracep->chgQData(oldp+356,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[28]),64);
        tracep->chgQData(oldp+358,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[29]),64);
        tracep->chgQData(oldp+360,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[30]),64);
        tracep->chgQData(oldp+362,(vlSelf->rvcpu__DOT____Vcellout__Regfile__regs_o[31]),64);
    }
    tracep->chgBit(oldp+364,(vlSelf->clk));
    tracep->chgBit(oldp+365,(vlSelf->rst));
    tracep->chgIData(oldp+366,(vlSelf->instF),32);
    tracep->chgQData(oldp+367,(vlSelf->RamReadData),64);
    tracep->chgBit(oldp+369,(vlSelf->RamReadEnable));
    tracep->chgBit(oldp+370,(vlSelf->RamWriteEnable));
    tracep->chgQData(oldp+371,(vlSelf->RamReadAddr),64);
    tracep->chgQData(oldp+373,(vlSelf->RamWriteMask),64);
    tracep->chgQData(oldp+375,(vlSelf->RamWriteAddr),64);
    tracep->chgQData(oldp+377,(vlSelf->RamWriteData),64);
    tracep->chgQData(oldp+379,(vlSelf->pcF),64);
    tracep->chgBit(oldp+381,(vlSelf->pcEnableF));
    tracep->chgQData(oldp+382,(vlSelf->regs_o[0]),64);
    tracep->chgQData(oldp+384,(vlSelf->regs_o[1]),64);
    tracep->chgQData(oldp+386,(vlSelf->regs_o[2]),64);
    tracep->chgQData(oldp+388,(vlSelf->regs_o[3]),64);
    tracep->chgQData(oldp+390,(vlSelf->regs_o[4]),64);
    tracep->chgQData(oldp+392,(vlSelf->regs_o[5]),64);
    tracep->chgQData(oldp+394,(vlSelf->regs_o[6]),64);
    tracep->chgQData(oldp+396,(vlSelf->regs_o[7]),64);
    tracep->chgQData(oldp+398,(vlSelf->regs_o[8]),64);
    tracep->chgQData(oldp+400,(vlSelf->regs_o[9]),64);
    tracep->chgQData(oldp+402,(vlSelf->regs_o[10]),64);
    tracep->chgQData(oldp+404,(vlSelf->regs_o[11]),64);
    tracep->chgQData(oldp+406,(vlSelf->regs_o[12]),64);
    tracep->chgQData(oldp+408,(vlSelf->regs_o[13]),64);
    tracep->chgQData(oldp+410,(vlSelf->regs_o[14]),64);
    tracep->chgQData(oldp+412,(vlSelf->regs_o[15]),64);
    tracep->chgQData(oldp+414,(vlSelf->regs_o[16]),64);
    tracep->chgQData(oldp+416,(vlSelf->regs_o[17]),64);
    tracep->chgQData(oldp+418,(vlSelf->regs_o[18]),64);
    tracep->chgQData(oldp+420,(vlSelf->regs_o[19]),64);
    tracep->chgQData(oldp+422,(vlSelf->regs_o[20]),64);
    tracep->chgQData(oldp+424,(vlSelf->regs_o[21]),64);
    tracep->chgQData(oldp+426,(vlSelf->regs_o[22]),64);
    tracep->chgQData(oldp+428,(vlSelf->regs_o[23]),64);
    tracep->chgQData(oldp+430,(vlSelf->regs_o[24]),64);
    tracep->chgQData(oldp+432,(vlSelf->regs_o[25]),64);
    tracep->chgQData(oldp+434,(vlSelf->regs_o[26]),64);
    tracep->chgQData(oldp+436,(vlSelf->regs_o[27]),64);
    tracep->chgQData(oldp+438,(vlSelf->regs_o[28]),64);
    tracep->chgQData(oldp+440,(vlSelf->regs_o[29]),64);
    tracep->chgQData(oldp+442,(vlSelf->regs_o[30]),64);
    tracep->chgQData(oldp+444,(vlSelf->regs_o[31]),64);
    tracep->chgQData(oldp+446,(((IData)(vlSelf->rst)
                                 ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__rs1ReadEnable)
                                            ? (((IData)(vlSelf->rvcpu__DOT__rs1ReadAddr) 
                                                == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                : vlSelf->rvcpu__DOT__Regfile__DOT__regs
                                               [vlSelf->rvcpu__DOT__rs1ReadAddr])
                                            : 0ULL))),64);
    tracep->chgQData(oldp+448,(((IData)(vlSelf->rst)
                                 ? 0ULL : ((IData)(vlSelf->rvcpu__DOT__rs2ReadEnable)
                                            ? (((IData)(vlSelf->rvcpu__DOT__rs2ReadAddr) 
                                                == (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                ? vlSelf->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                : vlSelf->rvcpu__DOT__Regfile__DOT__regs
                                               [vlSelf->rvcpu__DOT__rs2ReadAddr])
                                            : 0ULL))),64);
    tracep->chgBit(oldp+450,(((~ (IData)(vlSelf->rst)) 
                              & (0U != (IData)(vlSelf->rvcpu__DOT__Ctrl__DOT__ReadLoad)))));
    tracep->chgQData(oldp+451,(((IData)(vlSelf->rst)
                                 ? 0ULL : vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD)),64);
    tracep->chgQData(oldp+453,(((IData)(vlSelf->rst)
                                 ? 0ULL : vlSelf->rvcpu__DOT__Exe_stage__DOT__rs2Data)),64);
    tracep->chgQData(oldp+455,(((IData)(vlSelf->rst)
                                 ? 0ULL : ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                            ? (4ULL 
                                               + vlSelf->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                            : ((1U 
                                                & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                ? (QData)((IData)(vlSelf->rvcpu__DOT__Exe_stage__DOT__result))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                    ? vlSelf->rvcpu__DOT__Exe_stage__DOT__resADD
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                     ? vlSelf->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                     : vlSelf->rvcpu__DOT__Exe_stage__DOT__result)))))),64);
    tracep->chgBit(oldp+457,((1U & (~ (IData)(vlSelf->rst)))));
    tracep->chgQData(oldp+458,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                           >> 7U)))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
    tracep->chgQData(oldp+460,(((IData)(vlSelf->rst)
                                 ? 0ULL : (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
    tracep->chgQData(oldp+462,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                           >> 0xfU)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
    tracep->chgQData(oldp+464,(((IData)(vlSelf->rst)
                                 ? 0ULL : (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
    tracep->chgQData(oldp+466,(((IData)(vlSelf->rst)
                                 ? 0ULL : (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result))))),64);
    tracep->chgQData(oldp+468,(((IData)(vlSelf->rst)
                                 ? 0ULL : (QData)((IData)(vlSelf->rvcpu__DOT__Mem_stage__DOT__result)))),64);
    tracep->chgQData(oldp+470,(((IData)(vlSelf->rst)
                                 ? 0ULL : vlSelf->rvcpu__DOT__Mem_stage__DOT__result)),64);
}

void Vrvcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrvcpu___024root__trace_cleanup\n"); );
    // Init
    Vrvcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrvcpu___024root*>(voidSelf);
    Vrvcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
