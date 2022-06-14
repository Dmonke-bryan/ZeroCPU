// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrvcpu__Syms.h"


void Vrvcpu::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vrvcpu::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r));
            tracep->chgQData(oldp+1,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r),64);
            tracep->chgBit(oldp+3,(vlTOPp->rvcpu__DOT__rs1ReadEnable));
            tracep->chgBit(oldp+4,(vlTOPp->rvcpu__DOT__rs2ReadEnable));
            tracep->chgBit(oldp+5,((1U & ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r) 
                                          >> 5U))));
            tracep->chgCData(oldp+6,(vlTOPp->rvcpu__DOT__rs1ReadAddr),5);
            tracep->chgCData(oldp+7,(vlTOPp->rvcpu__DOT__rs2ReadAddr),5);
            tracep->chgCData(oldp+8,((0x1fU & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r))),5);
            tracep->chgBit(oldp+9,(vlTOPp->rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r));
            tracep->chgBit(oldp+10,(vlTOPp->rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                           >> 5U))));
            tracep->chgCData(oldp+12,((0x1fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r))),5);
            tracep->chgQData(oldp+13,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r),64);
            tracep->chgBit(oldp+15,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r));
            tracep->chgCData(oldp+16,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r),5);
            tracep->chgQData(oldp+17,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r),64);
            tracep->chgIData(oldp+19,(vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r),32);
            tracep->chgQData(oldp+20,(vlTOPp->rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r),64);
            tracep->chgSData(oldp+22,(vlTOPp->rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r),11);
            tracep->chgQData(oldp+23,(vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r),64);
            tracep->chgSData(oldp+25,(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r),10);
            tracep->chgSData(oldp+26,(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r),14);
            tracep->chgQData(oldp+27,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r),64);
            tracep->chgQData(oldp+29,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r),64);
            tracep->chgQData(oldp+31,(vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r),64);
            tracep->chgSData(oldp+33,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r),11);
            tracep->chgQData(oldp+34,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r),64);
            tracep->chgQData(oldp+36,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r),64);
            tracep->chgQData(oldp+38,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r),64);
            tracep->chgBit(oldp+40,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r));
            tracep->chgBit(oldp+41,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r));
            tracep->chgCData(oldp+42,(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r),2);
            tracep->chgCData(oldp+43,(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r),2);
            tracep->chgCData(oldp+44,(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r),2);
            tracep->chgBit(oldp+45,((1U & ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                           >> 4U))));
            tracep->chgBit(oldp+46,(vlTOPp->rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r));
            tracep->chgQData(oldp+47,(vlTOPp->rvcpu__DOT__If_stage__DOT__pc),64);
            tracep->chgBit(oldp+49,(vlTOPp->rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r));
            tracep->chgCData(oldp+50,((0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)),7);
            tracep->chgCData(oldp+51,((0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+52,((7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+53,((0x7fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+54,((0x3fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                >> 0x1aU))),6);
            tracep->chgCData(oldp+55,((0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+56,((0x1fU & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+57,(((0xfffffffffffff000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                  >> 0x1fU))))) 
                                           << 0xcU)) 
                                       | (QData)((IData)(
                                                         (0xfffU 
                                                          & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                             >> 0x14U)))))),64);
            tracep->chgQData(oldp+59,(((0xfffffffffffff000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                  >> 0x1fU))))) 
                                           << 0xcU)) 
                                       | (QData)((IData)(
                                                         ((0xfe0U 
                                                           & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                >> 7U))))))),64);
            tracep->chgQData(oldp+61,(((0xffffffffffffe000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                  >> 0x1fU))))) 
                                           << 0xdU)) 
                                       | (QData)((IData)(
                                                         ((0x1000U 
                                                           & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                      >> 7U))))))))),64);
            tracep->chgQData(oldp+63,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                       >> 0x1fU)))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),64);
            tracep->chgQData(oldp+65,(((0xffffffffffe00000ULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                  >> 0x1fU))))) 
                                           << 0x15U)) 
                                       | (QData)((IData)(
                                                         ((0x100000U 
                                                           & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                              >> 0xbU)) 
                                                          | ((0xff000U 
                                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r) 
                                                             | ((0x800U 
                                                                 & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                    >> 9U)) 
                                                                | (0x7feU 
                                                                   & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                                      >> 0x14U))))))))),64);
            tracep->chgBit(oldp+67,((0U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+68,((1U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+69,((2U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+70,((3U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+71,((4U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+72,((5U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+73,((6U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+74,((7U == (7U & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0xcU)))));
            tracep->chgBit(oldp+75,((0U == (0x7fU & 
                                            (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x19U)))));
            tracep->chgBit(oldp+76,((0x20U == (0x7fU 
                                               & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+77,((0U == (0x3fU & 
                                            (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 0x1aU)))));
            tracep->chgBit(oldp+78,((0x10U == (0x3fU 
                                               & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                  >> 0x1aU)))));
            tracep->chgBit(oldp+79,((3U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+80,((7U == (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+81,((0xbU == (0x7fU 
                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+82,((0xfU == (0x7fU 
                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+83,((0x13U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+84,((0x17U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+85,((0x1bU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+86,((0x1fU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+87,((0x23U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+88,((0x27U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+89,((0x2bU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+90,((0x2fU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+91,((0x33U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+92,((0x37U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+93,((0x3bU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+94,((0x3fU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+95,((0x43U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+96,((0x47U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+97,((0x4bU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+98,((0x4fU == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+99,((0x53U == (0x7fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+100,((0x57U == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+101,((0x5bU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+102,((0x5fU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+103,((0x63U == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+104,((0x67U == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+105,((0x6bU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+106,((0x6fU == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+107,((0x73U == (0x7fU 
                                                & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))));
            tracep->chgBit(oldp+108,(vlTOPp->rvcpu__DOT__Id_stage__DOT__Rtype));
            tracep->chgBit(oldp+109,(vlTOPp->rvcpu__DOT__Id_stage__DOT__Itype));
            tracep->chgBit(oldp+110,(vlTOPp->rvcpu__DOT__Id_stage__DOT__Utype));
            tracep->chgBit(oldp+111,(((0x67U == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+112,(((0x13U == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                      | (0x1bU == (0x7fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+113,(((0x33U == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+114,(((0x1bU == (0x7fU 
                                                 & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgSData(oldp+115,((((0x37U == 
                                          (0x7fU & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                         << 9U) | (
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                    << 8U) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                       << 7U) 
                                                      | (((IData)(
                                                                  (0x206fU 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                          << 6U) 
                                                         | (((0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                             << 5U) 
                                                            | (((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                << 4U) 
                                                               | (((0x23U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                   << 3U) 
                                                                  | ((((0x13U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                       | (0x1bU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                      << 2U) 
                                                                     | ((((0x33U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                          | (0x3bU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                                                         << 1U) 
                                                                        | ((0x1bU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)) 
                                                                           | (0x3bU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))))))))))),10);
            tracep->chgBit(oldp+116,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+117,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+118,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+119,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+120,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+121,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+122,((IData)((0x1013U 
                                              == (0xfc00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+123,((IData)((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+124,((IData)((0x40005013U 
                                              == (0xfc00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+125,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+126,((IData)((0x101bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+127,((IData)((0x501bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+128,((IData)((0x4000501bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+129,((IData)((0x206fU 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+130,((IData)((0x33U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+131,((IData)((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+132,((IData)((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+133,((IData)((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+134,((IData)((0x3033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+135,((IData)((0x4033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+136,((IData)((0x5033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+137,((IData)((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+138,((IData)((0x6033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+139,((IData)((0x7033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+140,((IData)((0x3bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+141,((IData)((0x4000003bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+142,((IData)((0x103bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+143,((IData)((0x503bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+144,((IData)((0x4000503bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+145,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+146,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+147,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+148,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+149,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+150,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+151,((IData)((3U == 
                                              (0x707fU 
                                               & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+152,((IData)((0x4003U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+153,((IData)((0x1003U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+154,((IData)((0x5003U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+155,((IData)((0x2003U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+156,((IData)((0x6003U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+157,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+158,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+159,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+160,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+161,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgSData(oldp+162,(vlTOPp->rvcpu__DOT__Id_stage__DOT__memFuncE_r),11);
            tracep->chgSData(oldp+163,(vlTOPp->rvcpu__DOT__Id_stage__DOT__instFuncE_r),14);
            tracep->chgBit(oldp+164,((IData)((0xfU 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+165,((IData)((0x100fU 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgCData(oldp+166,((((IData)((0xfU 
                                                  == 
                                                  (0x707fU 
                                                   & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))) 
                                         << 1U) | (IData)(
                                                          (0x100fU 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r))))),2);
            tracep->chgBit(oldp+167,((IData)((0x1073U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+168,((IData)((0x2073U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+169,((IData)((0x3073U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+170,((IData)((0x5073U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+171,((IData)((0x6073U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+172,((IData)((0x7073U 
                                              == (0x707fU 
                                                  & vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+173,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r));
            tracep->chgCData(oldp+174,(((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                         ? (0x1fU & 
                                            (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                             >> 7U))
                                         : 0U)),5);
            tracep->chgQData(oldp+175,(vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_r),64);
            tracep->chgCData(oldp+177,((((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                                         << 5U) | ((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlTOPp->rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r 
                                                       >> 7U))
                                                    : 0U))),6);
            tracep->chgCData(oldp+178,(vlTOPp->rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r),6);
            tracep->chgQData(oldp+179,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data),64);
            tracep->chgQData(oldp+181,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data),64);
            tracep->chgQData(oldp+183,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2),64);
            tracep->chgQData(oldp+185,(((IData)((0U 
                                                 != 
                                                 (0x1a0U 
                                                  & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                         ? vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                         : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data)),64);
            tracep->chgQData(oldp+187,(((2U & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                         ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data
                                         : vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r)),64);
            tracep->chgQData(oldp+189,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD),64);
            tracep->chgQData(oldp+191,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                        - vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
            tracep->chgQData(oldp+193,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                        << (0x3fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+195,((QData)((IData)(
                                                       (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                        < vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+197,((QData)((IData)(
                                                       VL_LTS_IQQ(1,64,64, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+199,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                        >> (0x3fU & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+201,(VL_SHIFTRS_QQI(64,64,6, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, 
                                                      (0x3fU 
                                                       & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+203,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                        ^ vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
            tracep->chgQData(oldp+205,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                        | vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
            tracep->chgQData(oldp+207,((vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                        & vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)),64);
            tracep->chgQData(oldp+209,((QData)((IData)(
                                                       (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                        > vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+211,((QData)((IData)(
                                                       VL_GTS_IQQ(1,64,64, vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data, vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+213,((QData)((IData)(
                                                       (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                        == vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+215,((QData)((IData)(
                                                       (vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs1Data 
                                                        != vlTOPp->rvcpu__DOT__Exe_stage__DOT__op2)))),64);
            tracep->chgQData(oldp+217,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result),64);
            tracep->chgBit(oldp+219,((1U & (((IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                             >> 5U) 
                                            & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result)))));
            tracep->chgQData(oldp+220,((4ULL + vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
            tracep->chgCData(oldp+222,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r),6);
            tracep->chgQData(oldp+223,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r),64);
            tracep->chgCData(oldp+225,(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_r),2);
            tracep->chgCData(oldp+226,(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad),2);
            tracep->chgCData(oldp+227,(((~ (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                                        & (((((0x1fU 
                                               & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                              == (IData)(vlTOPp->rvcpu__DOT__rs2ReadAddr)) 
                                             & (IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)) 
                                            << 1U) 
                                           | (((0x1fU 
                                                & (IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                               == (IData)(vlTOPp->rvcpu__DOT__rs1ReadAddr)) 
                                              & (IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable))))),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+228,(((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_r)
                                         ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD
                                         : 0ULL)),64);
            tracep->chgQData(oldp+230,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+232,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+234,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+236,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+238,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+240,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+242,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+244,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+246,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+248,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+250,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+252,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+254,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+256,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+258,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+260,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+262,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+264,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+266,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+268,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+270,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+272,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+274,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+276,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+278,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+280,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+282,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+284,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+286,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+288,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+290,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+292,(vlTOPp->rvcpu__DOT__Regfile__DOT__regs[31]),64);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+294,(vlTOPp->rvcpu__DOT__flushD));
            tracep->chgBit(oldp+295,(vlTOPp->rvcpu__DOT__Exe_stage__DOT__jump_r));
            tracep->chgQData(oldp+296,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result),64);
            tracep->chgQData(oldp+298,(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r),64);
            tracep->chgQData(oldp+300,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[0]),64);
            tracep->chgQData(oldp+302,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[1]),64);
            tracep->chgQData(oldp+304,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[2]),64);
            tracep->chgQData(oldp+306,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[3]),64);
            tracep->chgQData(oldp+308,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[4]),64);
            tracep->chgQData(oldp+310,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[5]),64);
            tracep->chgQData(oldp+312,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[6]),64);
            tracep->chgQData(oldp+314,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[7]),64);
            tracep->chgQData(oldp+316,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[8]),64);
            tracep->chgQData(oldp+318,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[9]),64);
            tracep->chgQData(oldp+320,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[10]),64);
            tracep->chgQData(oldp+322,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[11]),64);
            tracep->chgQData(oldp+324,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[12]),64);
            tracep->chgQData(oldp+326,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[13]),64);
            tracep->chgQData(oldp+328,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[14]),64);
            tracep->chgQData(oldp+330,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[15]),64);
            tracep->chgQData(oldp+332,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[16]),64);
            tracep->chgQData(oldp+334,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[17]),64);
            tracep->chgQData(oldp+336,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[18]),64);
            tracep->chgQData(oldp+338,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[19]),64);
            tracep->chgQData(oldp+340,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[20]),64);
            tracep->chgQData(oldp+342,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[21]),64);
            tracep->chgQData(oldp+344,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[22]),64);
            tracep->chgQData(oldp+346,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[23]),64);
            tracep->chgQData(oldp+348,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[24]),64);
            tracep->chgQData(oldp+350,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[25]),64);
            tracep->chgQData(oldp+352,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[26]),64);
            tracep->chgQData(oldp+354,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[27]),64);
            tracep->chgQData(oldp+356,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[28]),64);
            tracep->chgQData(oldp+358,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[29]),64);
            tracep->chgQData(oldp+360,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[30]),64);
            tracep->chgQData(oldp+362,(vlTOPp->rvcpu__DOT____Vcellout__Regfile__regs_o[31]),64);
        }
        tracep->chgBit(oldp+364,(vlTOPp->clk));
        tracep->chgBit(oldp+365,(vlTOPp->rst));
        tracep->chgIData(oldp+366,(vlTOPp->instF),32);
        tracep->chgQData(oldp+367,(vlTOPp->RamReadData),64);
        tracep->chgBit(oldp+369,(vlTOPp->RamReadEnable));
        tracep->chgBit(oldp+370,(vlTOPp->RamWriteEnable));
        tracep->chgQData(oldp+371,(vlTOPp->RamReadAddr),64);
        tracep->chgQData(oldp+373,(vlTOPp->RamWriteMask),64);
        tracep->chgQData(oldp+375,(vlTOPp->RamWriteAddr),64);
        tracep->chgQData(oldp+377,(vlTOPp->RamWriteData),64);
        tracep->chgQData(oldp+379,(vlTOPp->pcF),64);
        tracep->chgBit(oldp+381,(vlTOPp->pcEnableF));
        tracep->chgQData(oldp+382,(vlTOPp->regs_o[0]),64);
        tracep->chgQData(oldp+384,(vlTOPp->regs_o[1]),64);
        tracep->chgQData(oldp+386,(vlTOPp->regs_o[2]),64);
        tracep->chgQData(oldp+388,(vlTOPp->regs_o[3]),64);
        tracep->chgQData(oldp+390,(vlTOPp->regs_o[4]),64);
        tracep->chgQData(oldp+392,(vlTOPp->regs_o[5]),64);
        tracep->chgQData(oldp+394,(vlTOPp->regs_o[6]),64);
        tracep->chgQData(oldp+396,(vlTOPp->regs_o[7]),64);
        tracep->chgQData(oldp+398,(vlTOPp->regs_o[8]),64);
        tracep->chgQData(oldp+400,(vlTOPp->regs_o[9]),64);
        tracep->chgQData(oldp+402,(vlTOPp->regs_o[10]),64);
        tracep->chgQData(oldp+404,(vlTOPp->regs_o[11]),64);
        tracep->chgQData(oldp+406,(vlTOPp->regs_o[12]),64);
        tracep->chgQData(oldp+408,(vlTOPp->regs_o[13]),64);
        tracep->chgQData(oldp+410,(vlTOPp->regs_o[14]),64);
        tracep->chgQData(oldp+412,(vlTOPp->regs_o[15]),64);
        tracep->chgQData(oldp+414,(vlTOPp->regs_o[16]),64);
        tracep->chgQData(oldp+416,(vlTOPp->regs_o[17]),64);
        tracep->chgQData(oldp+418,(vlTOPp->regs_o[18]),64);
        tracep->chgQData(oldp+420,(vlTOPp->regs_o[19]),64);
        tracep->chgQData(oldp+422,(vlTOPp->regs_o[20]),64);
        tracep->chgQData(oldp+424,(vlTOPp->regs_o[21]),64);
        tracep->chgQData(oldp+426,(vlTOPp->regs_o[22]),64);
        tracep->chgQData(oldp+428,(vlTOPp->regs_o[23]),64);
        tracep->chgQData(oldp+430,(vlTOPp->regs_o[24]),64);
        tracep->chgQData(oldp+432,(vlTOPp->regs_o[25]),64);
        tracep->chgQData(oldp+434,(vlTOPp->regs_o[26]),64);
        tracep->chgQData(oldp+436,(vlTOPp->regs_o[27]),64);
        tracep->chgQData(oldp+438,(vlTOPp->regs_o[28]),64);
        tracep->chgQData(oldp+440,(vlTOPp->regs_o[29]),64);
        tracep->chgQData(oldp+442,(vlTOPp->regs_o[30]),64);
        tracep->chgQData(oldp+444,(vlTOPp->regs_o[31]),64);
        tracep->chgQData(oldp+446,(((IData)(vlTOPp->rst)
                                     ? 0ULL : ((IData)(vlTOPp->rvcpu__DOT__rs1ReadEnable)
                                                ? (
                                                   ((IData)(vlTOPp->rvcpu__DOT__rs1ReadAddr) 
                                                    == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                    ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                    : 
                                                   vlTOPp->rvcpu__DOT__Regfile__DOT__regs
                                                   [vlTOPp->rvcpu__DOT__rs1ReadAddr])
                                                : 0ULL))),64);
        tracep->chgQData(oldp+448,(((IData)(vlTOPp->rst)
                                     ? 0ULL : ((IData)(vlTOPp->rvcpu__DOT__rs2ReadEnable)
                                                ? (
                                                   ((IData)(vlTOPp->rvcpu__DOT__rs2ReadAddr) 
                                                    == (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                    ? vlTOPp->rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                    : 
                                                   vlTOPp->rvcpu__DOT__Regfile__DOT__regs
                                                   [vlTOPp->rvcpu__DOT__rs2ReadAddr])
                                                : 0ULL))),64);
        tracep->chgBit(oldp+450,((1U & (~ (IData)(vlTOPp->rst)))));
        tracep->chgQData(oldp+451,(((IData)(vlTOPp->rst)
                                     ? 0ULL : vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD)),64);
        tracep->chgQData(oldp+453,(((IData)(vlTOPp->rst)
                                     ? 0ULL : vlTOPp->rvcpu__DOT__Exe_stage__DOT__rs2Data)),64);
        tracep->chgQData(oldp+455,(((IData)(vlTOPp->rst)
                                     ? 0ULL : ((IData)(
                                                       (0U 
                                                        != 
                                                        (0xc0U 
                                                         & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                ? (4ULL 
                                                   + vlTOPp->rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                    ? (QData)((IData)(vlTOPp->rvcpu__DOT__Exe_stage__DOT__result))
                                                    : 
                                                   ((0x100U 
                                                     & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                     ? vlTOPp->rvcpu__DOT__Exe_stage__DOT__resADD
                                                     : 
                                                    ((0x200U 
                                                      & (IData)(vlTOPp->rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                      ? vlTOPp->rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                      : vlTOPp->rvcpu__DOT__Exe_stage__DOT__result)))))),64);
        tracep->chgQData(oldp+457,(((IData)(vlTOPp->rst)
                                     ? 0ULL : ((0xffffffffffffff00ULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 7U)))))) 
                                                   << 8U)) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
        tracep->chgQData(oldp+459,(((IData)(vlTOPp->rst)
                                     ? 0ULL : (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
        tracep->chgQData(oldp+461,(((IData)(vlTOPp->rst)
                                     ? 0ULL : ((0xffffffffffff0000ULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U)) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))))),64);
        tracep->chgQData(oldp+463,(((IData)(vlTOPp->rst)
                                     ? 0ULL : (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))))),64);
        tracep->chgQData(oldp+465,(((IData)(vlTOPp->rst)
                                     ? 0ULL : (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlTOPp->rvcpu__DOT__Mem_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result))))),64);
        tracep->chgQData(oldp+467,(((IData)(vlTOPp->rst)
                                     ? 0ULL : (QData)((IData)(vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)))),64);
        tracep->chgQData(oldp+469,(((IData)(vlTOPp->rst)
                                     ? 0ULL : vlTOPp->rvcpu__DOT__Mem_stage__DOT__result)),64);
        tracep->chgBit(oldp+471,(((~ (IData)(vlTOPp->rst)) 
                                  & (0U != (IData)(vlTOPp->rvcpu__DOT__Ctrl__DOT__ReadLoad)))));
    }
}

void Vrvcpu::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vrvcpu__Syms* __restrict vlSymsp = static_cast<Vrvcpu__Syms*>(userp);
    Vrvcpu* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
