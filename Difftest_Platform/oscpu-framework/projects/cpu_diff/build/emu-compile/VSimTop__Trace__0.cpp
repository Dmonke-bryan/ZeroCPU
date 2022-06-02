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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->SimTop__DOT__r_pc),64);
        tracep->chgIData(oldp+2,(vlSelf->SimTop__DOT__r_instr),32);
        tracep->chgBit(oldp+3,(vlSelf->SimTop__DOT__r_valid));
        tracep->chgBit(oldp+4,(vlSelf->SimTop__DOT__r_wen));
        tracep->chgCData(oldp+5,(vlSelf->SimTop__DOT__r_wdest),8);
        tracep->chgQData(oldp+6,(vlSelf->SimTop__DOT__r_wdata),64);
        tracep->chgBit(oldp+8,(vlSelf->SimTop__DOT__trap));
        tracep->chgCData(oldp+9,(vlSelf->SimTop__DOT__trap_code),8);
        tracep->chgQData(oldp+10,(vlSelf->SimTop__DOT__cycleCnt),64);
        tracep->chgQData(oldp+12,(vlSelf->SimTop__DOT__instrCnt),64);
        tracep->chgBit(oldp+14,(vlSelf->SimTop__DOT__skip));
        tracep->chgQData(oldp+15,(vlSelf->SimTop__DOT__BusReadAddrW),64);
        tracep->chgQData(oldp+17,(vlSelf->SimTop__DOT__BusWriteAddrW),64);
        tracep->chgBit(oldp+19,(vlSelf->SimTop__DOT__inst_vaild));
        tracep->chgQData(oldp+20,(vlSelf->SimTop__DOT__mstatus),64);
        tracep->chgQData(oldp+22,(vlSelf->SimTop__DOT__sstatus),64);
        tracep->chgQData(oldp+24,(vlSelf->SimTop__DOT__mepc),64);
        tracep->chgQData(oldp+26,(vlSelf->SimTop__DOT__mtvec),64);
        tracep->chgQData(oldp+28,(vlSelf->SimTop__DOT__mcause),64);
        tracep->chgQData(oldp+30,(vlSelf->SimTop__DOT__mip),64);
        tracep->chgQData(oldp+32,(vlSelf->SimTop__DOT__mie),64);
        tracep->chgQData(oldp+34,(vlSelf->SimTop__DOT__mscratch),64);
        tracep->chgQData(oldp+36,(vlSelf->SimTop__DOT__it_pc[0]),64);
        tracep->chgQData(oldp+38,(vlSelf->SimTop__DOT__it_pc[1]),64);
        tracep->chgQData(oldp+40,(vlSelf->SimTop__DOT__it_pc[2]),64);
        tracep->chgQData(oldp+42,(vlSelf->SimTop__DOT__it_pc[3]),64);
        tracep->chgIData(oldp+44,(vlSelf->SimTop__DOT__it_instr[0]),32);
        tracep->chgIData(oldp+45,(vlSelf->SimTop__DOT__it_instr[1]),32);
        tracep->chgIData(oldp+46,(vlSelf->SimTop__DOT__it_instr[2]),32);
        tracep->chgIData(oldp+47,(vlSelf->SimTop__DOT__it_instr[3]),32);
        tracep->chgIData(oldp+48,(vlSelf->SimTop__DOT__intrNO[0]),32);
        tracep->chgIData(oldp+49,(vlSelf->SimTop__DOT__intrNO[1]),32);
        tracep->chgIData(oldp+50,(vlSelf->SimTop__DOT__intrNO[2]),32);
        tracep->chgIData(oldp+51,(vlSelf->SimTop__DOT__intrNO[3]),32);
        tracep->chgQData(oldp+52,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r),64);
        tracep->chgBit(oldp+54,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable));
        tracep->chgBit(oldp+55,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable));
        tracep->chgBit(oldp+56,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r) 
                                       >> 5U))));
        tracep->chgCData(oldp+57,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr),5);
        tracep->chgCData(oldp+58,(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr),5);
        tracep->chgCData(oldp+59,((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r))),5);
        tracep->chgBit(oldp+60,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r));
        tracep->chgBit(oldp+61,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r));
        tracep->chgBit(oldp+62,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                       >> 5U))));
        tracep->chgCData(oldp+63,((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r))),5);
        tracep->chgQData(oldp+64,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r),64);
        tracep->chgBit(oldp+66,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r));
        tracep->chgCData(oldp+67,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r),5);
        tracep->chgQData(oldp+68,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r),64);
        tracep->chgIData(oldp+70,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r),32);
        tracep->chgQData(oldp+71,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r),64);
        tracep->chgSData(oldp+73,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r),11);
        tracep->chgQData(oldp+74,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r),64);
        tracep->chgSData(oldp+76,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r),15);
        tracep->chgSData(oldp+77,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r),14);
        tracep->chgCData(oldp+78,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r),6);
        tracep->chgQData(oldp+79,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r),64);
        tracep->chgSData(oldp+81,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r),12);
        tracep->chgQData(oldp+82,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+84,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+86,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r),64);
        tracep->chgIData(oldp+88,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r),32);
        tracep->chgSData(oldp+89,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r),11);
        tracep->chgSData(oldp+90,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instTypeM_dff__DOT__qout_r),15);
        tracep->chgQData(oldp+91,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r),64);
        tracep->chgQData(oldp+93,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r),64);
        tracep->chgQData(oldp+95,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r),64);
        tracep->chgBit(oldp+97,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r));
        tracep->chgBit(oldp+98,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r));
        tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r),64);
        tracep->chgIData(oldp+101,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r),32);
        tracep->chgSData(oldp+102,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteAddrM_clk_diff__DOT__qout_r),12);
        tracep->chgBit(oldp+103,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteEnableM_clk_diff__DOT__qout_r));
        tracep->chgQData(oldp+104,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteDataM_clk_diff__DOT__qout_r),64);
        tracep->chgQData(oldp+106,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r),64);
        tracep->chgIData(oldp+108,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r),32);
        tracep->chgSData(oldp+109,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instTypeW_dff__DOT__qout_r),15);
        tracep->chgSData(oldp+110,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r),12);
        tracep->chgBit(oldp+111,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r));
        tracep->chgQData(oldp+112,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r),64);
        tracep->chgBit(oldp+114,(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreE));
        tracep->chgCData(oldp+115,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r),2);
        tracep->chgCData(oldp+116,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r),2);
        tracep->chgBit(oldp+117,((0x73U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgSData(oldp+118,((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                    >> 0x14U)),12);
        tracep->chgCData(oldp+119,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r),2);
        tracep->chgBit(oldp+120,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r));
        tracep->chgQData(oldp+121,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec),64);
        tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc),64);
        tracep->chgBit(oldp+127,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                        >> 0xeU))));
        tracep->chgBit(oldp+128,((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                        >> 0xcU))));
        tracep->chgBit(oldp+129,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r));
        tracep->chgQData(oldp+130,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mvendorid),64);
        tracep->chgQData(oldp+132,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus),64);
        tracep->chgQData(oldp+134,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie),64);
        tracep->chgQData(oldp+136,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mip),64);
        tracep->chgQData(oldp+138,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause),64);
        tracep->chgQData(oldp+140,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch),64);
        tracep->chgQData(oldp+142,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle),64);
        tracep->chgQData(oldp+144,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret),64);
        tracep->chgQData(oldp+146,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus),64);
        tracep->chgQData(oldp+148,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t),64);
        tracep->chgQData(oldp+150,((((0x100U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus)),64);
        tracep->chgQData(oldp+152,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t),64);
        tracep->chgQData(oldp+154,((0xfffffffffffffffcULL 
                                    & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t)),64);
        tracep->chgQData(oldp+156,((((0x304U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie)),64);
        tracep->chgQData(oldp+158,((((0x344U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mip)),64);
        tracep->chgQData(oldp+160,((((0x341U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc)),64);
        tracep->chgQData(oldp+162,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r),64);
        tracep->chgQData(oldp+164,((((0x340U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch)),64);
        tracep->chgQData(oldp+166,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t),64);
        tracep->chgQData(oldp+168,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r),64);
        tracep->chgQData(oldp+170,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime),64);
        tracep->chgCData(oldp+172,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv),3);
        tracep->chgQData(oldp+173,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp),64);
        tracep->chgCData(oldp+175,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r),2);
        tracep->chgCData(oldp+176,((((~ (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                                     & (((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)))) 
                                    & (((((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                          == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                                         & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable)) 
                                        << 1U) | ((
                                                   (0x1fU 
                                                    & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                                   == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)) 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable))))),2);
        tracep->chgBit(oldp+177,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit));
        tracep->chgCData(oldp+178,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r),2);
        tracep->chgBit(oldp+179,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r));
        tracep->chgQData(oldp+180,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+182,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data),64);
        tracep->chgQData(oldp+184,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data),64);
        tracep->chgQData(oldp+186,(((IData)((0U != 
                                             (0x1a0U 
                                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data)),64);
        tracep->chgQData(oldp+188,(((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data
                                     : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r)),64);
        tracep->chgQData(oldp+190,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2),64);
        tracep->chgQData(oldp+192,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD),64);
        tracep->chgQData(oldp+194,((vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                    | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2)),64);
        tracep->chgQData(oldp+196,((vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                    & (~ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2))),64);
        tracep->chgQData(oldp+198,(((IData)((0U != 
                                             (0x24U 
                                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2
                                     : ((IData)((0U 
                                                 != 
                                                 (0x12U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                                         ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                            | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2)
                                         : ((IData)(
                                                    (0U 
                                                     != 
                                                     (9U 
                                                      & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                                             ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                                & (~ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2))
                                             : 0ULL)))),64);
        tracep->chgBit(oldp+200,((IData)((0U != (0xc00U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))));
        tracep->chgQData(oldp+201,((4ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
        tracep->chgCData(oldp+203,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r),6);
        tracep->chgCData(oldp+204,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r),6);
        tracep->chgCData(oldp+205,((0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)),7);
        tracep->chgCData(oldp+206,((0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                             >> 7U))),5);
        tracep->chgCData(oldp+207,((7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+208,((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+209,((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                    >> 0x1aU)),6);
        tracep->chgCData(oldp+210,((0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+211,((0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->chgQData(oldp+212,((((- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                 >> 0x14U))))),64);
        tracep->chgQData(oldp+214,((((- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+216,((((- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                             >> 7U))))))))),64);
        tracep->chgQData(oldp+218,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))))),64);
        tracep->chgQData(oldp+220,((((- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                                              >> 0x14U))))))))),64);
        tracep->chgQData(oldp+222,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                       >> 0xfU))))),64);
        tracep->chgBit(oldp+224,((0U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+225,((1U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+226,((2U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+227,((3U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+228,((4U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+229,((5U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+230,((6U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+231,((7U == (7U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+232,((0U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                         >> 0x19U))));
        tracep->chgBit(oldp+233,((0x20U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0x19U))));
        tracep->chgBit(oldp+234,((6U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                         >> 0x19U))));
        tracep->chgBit(oldp+235,((0U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+236,((0x10U == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+237,((3U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+238,((7U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+239,((0xbU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+240,((0xfU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+241,((0x13U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+242,((0x17U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+243,((0x1bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+244,((0x1fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+245,((0x23U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+246,((0x27U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+247,((0x2bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+248,((0x2fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+249,((0x33U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+250,((0x37U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+251,((0x3bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+252,((0x3fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+253,((0x43U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+254,((0x47U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+255,((0x4bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+256,((0x4fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+257,((0x53U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+258,((0x57U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+259,((0x5bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+260,((0x5fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+261,((0x63U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+262,((0x67U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+263,((0x6bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+264,((0x6fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))));
        tracep->chgBit(oldp+265,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype));
        tracep->chgBit(oldp+266,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype));
        tracep->chgBit(oldp+267,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype));
        tracep->chgBit(oldp+268,((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI) 
                                   | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI)) 
                                  | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI))));
        tracep->chgBit(oldp+269,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr));
        tracep->chgBit(oldp+270,(((0x67U == (0x7fU 
                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+271,(((0x13U == (0x7fU 
                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                  | (0x1bU == (0x7fU 
                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+272,(((0x33U == (0x7fU 
                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+273,(((0x1bU == (0x7fU 
                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                  | (0x3bU == (0x7fU 
                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgSData(oldp+274,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_r),15);
        tracep->chgBit(oldp+275,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+276,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+277,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+278,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+279,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+280,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+281,((IData)((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+282,((IData)((0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+283,((IData)((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+284,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+285,((IData)((0x101bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+286,((IData)((0x501bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+287,((IData)((0x4000501bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+288,((IData)((0x67U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+289,((IData)((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+290,((IData)((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+291,((IData)((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+292,((IData)((0x2033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+293,((IData)((0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+294,((IData)((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+295,((IData)((0x5033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+296,((IData)((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+297,((IData)((0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+298,((IData)((0x7033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+299,((IData)((0x3bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+300,((IData)((0x4000003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+301,((IData)((0x103bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+302,((IData)((0x503bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+303,((IData)((0x4000503bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+304,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+305,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+306,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+307,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+308,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+309,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+310,((IData)((3U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+311,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+312,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+313,((IData)((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+314,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+315,((IData)((0x6003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+316,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+317,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+318,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+319,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+320,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgSData(oldp+321,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_r),11);
        tracep->chgSData(oldp+322,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_r),14);
        tracep->chgBit(oldp+323,((IData)((0xfU == (0x707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+324,((IData)((0x100fU == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgCData(oldp+325,((((IData)((0xfU 
                                              == (0x707fU 
                                                  & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                     << 1U) | (IData)(
                                                      (0x100fU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))))),2);
        tracep->chgBit(oldp+326,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW));
        tracep->chgBit(oldp+327,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS));
        tracep->chgBit(oldp+328,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC));
        tracep->chgBit(oldp+329,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI));
        tracep->chgBit(oldp+330,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI));
        tracep->chgBit(oldp+331,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI));
        tracep->chgCData(oldp+332,((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW) 
                                     << 5U) | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS) 
                                                << 4U) 
                                               | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI))))))),6);
        tracep->chgBit(oldp+333,((IData)((0x100073U 
                                          == (0xfff0707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+334,((IData)((0x73U == 
                                          (0xfff0707fU 
                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+335,((IData)((0x30200073U 
                                          == (0xfff0707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))));
        tracep->chgBit(oldp+336,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r));
        tracep->chgCData(oldp+337,(((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                     ? (0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgQData(oldp+338,(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_r),64);
        tracep->chgCData(oldp+340,((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                                     << 5U) | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                                                ? (0x1fU 
                                                   & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 7U))
                                                : 0U))),6);
        tracep->chgQData(oldp+341,(vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc),64);
        tracep->chgCData(oldp+343,((0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r) 
                                             << 3U))),6);
        tracep->chgCData(oldp+344,((0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                             << 3U))),6);
        tracep->chgQData(oldp+345,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                    << (0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                 << 3U)))),64);
        tracep->chgQData(oldp+347,((0xffULL << (0x38U 
                                                & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                   << 3U)))),64);
        tracep->chgQData(oldp+349,((0xffffULL << (0x38U 
                                                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))),64);
        tracep->chgQData(oldp+351,((0xffffffffULL << 
                                    (0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                              << 3U)))),64);
        tracep->chgQData(oldp+353,(((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                     ? 0xffffffffffffffffULL
                                     : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                         ? (0xffffffffULL 
                                            << (0x38U 
                                                & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                   << 3U)))
                                         : ((4U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                             ? (0xffffULL 
                                                << 
                                                (0x38U 
                                                 & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                    << 3U)))
                                             : ((8U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                 ? 
                                                (0xffULL 
                                                 << 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))
                                                 : 0ULL))))),64);
        tracep->chgQData(oldp+355,(((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r
                                     : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                         ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                            << (0x38U 
                                                & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                   << 3U)))
                                         : ((4U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                             ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                << 
                                                (0x38U 
                                                 & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                    << 3U)))
                                             : ((8U 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                 ? 
                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                 << 
                                                 (0x38U 
                                                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                     << 3U)))
                                                 : 0ULL))))),64);
        tracep->chgQData(oldp+357,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0]),64);
        tracep->chgQData(oldp+359,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[1]),64);
        tracep->chgQData(oldp+361,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[2]),64);
        tracep->chgQData(oldp+363,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[3]),64);
        tracep->chgQData(oldp+365,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[4]),64);
        tracep->chgQData(oldp+367,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[5]),64);
        tracep->chgQData(oldp+369,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[6]),64);
        tracep->chgQData(oldp+371,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[7]),64);
        tracep->chgQData(oldp+373,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[8]),64);
        tracep->chgQData(oldp+375,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[9]),64);
        tracep->chgQData(oldp+377,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[10]),64);
        tracep->chgQData(oldp+379,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[11]),64);
        tracep->chgQData(oldp+381,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[12]),64);
        tracep->chgQData(oldp+383,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[13]),64);
        tracep->chgQData(oldp+385,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[14]),64);
        tracep->chgQData(oldp+387,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[15]),64);
        tracep->chgQData(oldp+389,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[16]),64);
        tracep->chgQData(oldp+391,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[17]),64);
        tracep->chgQData(oldp+393,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[18]),64);
        tracep->chgQData(oldp+395,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[19]),64);
        tracep->chgQData(oldp+397,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[20]),64);
        tracep->chgQData(oldp+399,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[21]),64);
        tracep->chgQData(oldp+401,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[22]),64);
        tracep->chgQData(oldp+403,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[23]),64);
        tracep->chgQData(oldp+405,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[24]),64);
        tracep->chgQData(oldp+407,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[25]),64);
        tracep->chgQData(oldp+409,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[26]),64);
        tracep->chgQData(oldp+411,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[27]),64);
        tracep->chgQData(oldp+413,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[28]),64);
        tracep->chgQData(oldp+415,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[29]),64);
        tracep->chgQData(oldp+417,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[30]),64);
        tracep->chgQData(oldp+419,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[31]),64);
        tracep->chgQData(oldp+421,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0xaU]),64);
        tracep->chgIData(oldp+423,(vlSelf->SimTop__DOT__intrNO
                                   [2U]),32);
        tracep->chgQData(oldp+424,(vlSelf->SimTop__DOT__it_pc
                                   [2U]),64);
        tracep->chgIData(oldp+426,(vlSelf->SimTop__DOT__it_instr
                                   [2U]),32);
        tracep->chgQData(oldp+427,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0U]),64);
        tracep->chgQData(oldp+429,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [1U]),64);
        tracep->chgQData(oldp+431,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [2U]),64);
        tracep->chgQData(oldp+433,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [3U]),64);
        tracep->chgQData(oldp+435,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [4U]),64);
        tracep->chgQData(oldp+437,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [5U]),64);
        tracep->chgQData(oldp+439,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [6U]),64);
        tracep->chgQData(oldp+441,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [7U]),64);
        tracep->chgQData(oldp+443,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [8U]),64);
        tracep->chgQData(oldp+445,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [9U]),64);
        tracep->chgQData(oldp+447,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0xbU]),64);
        tracep->chgQData(oldp+449,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0xcU]),64);
        tracep->chgQData(oldp+451,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0xdU]),64);
        tracep->chgQData(oldp+453,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0xeU]),64);
        tracep->chgQData(oldp+455,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0xfU]),64);
        tracep->chgQData(oldp+457,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x10U]),64);
        tracep->chgQData(oldp+459,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x11U]),64);
        tracep->chgQData(oldp+461,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x12U]),64);
        tracep->chgQData(oldp+463,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x13U]),64);
        tracep->chgQData(oldp+465,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x14U]),64);
        tracep->chgQData(oldp+467,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x15U]),64);
        tracep->chgQData(oldp+469,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x16U]),64);
        tracep->chgQData(oldp+471,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x17U]),64);
        tracep->chgQData(oldp+473,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x18U]),64);
        tracep->chgQData(oldp+475,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x19U]),64);
        tracep->chgQData(oldp+477,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x1aU]),64);
        tracep->chgQData(oldp+479,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x1bU]),64);
        tracep->chgQData(oldp+481,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x1cU]),64);
        tracep->chgQData(oldp+483,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x1dU]),64);
        tracep->chgQData(oldp+485,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x1eU]),64);
        tracep->chgQData(oldp+487,(vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                   [0x1fU]),64);
        tracep->chgCData(oldp+489,((7U & (IData)(vlSelf->SimTop__DOT__trap_code))),3);
        tracep->chgIData(oldp+490,(vlSelf->SimTop__DOT__intrNO1_dff__DOT__qout_r),32);
        tracep->chgIData(oldp+491,(vlSelf->SimTop__DOT__intrNO
                                   [0U]),32);
        tracep->chgIData(oldp+492,(vlSelf->SimTop__DOT__intrNO2_dff__DOT__qout_r),32);
        tracep->chgIData(oldp+493,(vlSelf->SimTop__DOT__intrNO
                                   [1U]),32);
        tracep->chgIData(oldp+494,(vlSelf->SimTop__DOT__intrNO3_dff__DOT__qout_r),32);
        tracep->chgIData(oldp+495,(vlSelf->SimTop__DOT__it_instr1_dff__DOT__qout_r),32);
        tracep->chgIData(oldp+496,(vlSelf->SimTop__DOT__it_instr
                                   [0U]),32);
        tracep->chgIData(oldp+497,(vlSelf->SimTop__DOT__it_instr2_dff__DOT__qout_r),32);
        tracep->chgIData(oldp+498,(vlSelf->SimTop__DOT__it_instr
                                   [1U]),32);
        tracep->chgIData(oldp+499,(vlSelf->SimTop__DOT__it_instr3_dff__DOT__qout_r),32);
        tracep->chgQData(oldp+500,(vlSelf->SimTop__DOT__it_pc1_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+502,(vlSelf->SimTop__DOT__it_pc
                                   [0U]),64);
        tracep->chgQData(oldp+504,(vlSelf->SimTop__DOT__it_pc2_dff__DOT__qout_r),64);
        tracep->chgQData(oldp+506,(vlSelf->SimTop__DOT__it_pc
                                   [1U]),64);
        tracep->chgQData(oldp+508,(vlSelf->SimTop__DOT__it_pc3_dff__DOT__qout_r),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgQData(oldp+510,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r),64);
        tracep->chgQData(oldp+512,(((0x1000U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                     : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r)
                                         ? ((0ULL != vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                             ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                                             : ((0ULL 
                                                 != vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r)
                                                 ? vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r
                                                 : 
                                                ((0ULL 
                                                  != vlSelf->SimTop__DOT__pc)
                                                  ? vlSelf->SimTop__DOT__pc
                                                  : 0ULL)))
                                         : 0ULL))),64);
        tracep->chgQData(oldp+514,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                    << (0x3fU & ((1U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                  ? 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))
                                                  : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))))),64);
        tracep->chgBit(oldp+516,((1U & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                         >> 5U) & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)))));
        tracep->chgQData(oldp+517,(((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r)
                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                                     : 0ULL)),64);
        tracep->chgIData(oldp+519,(((- (IData)((1U 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)))) 
                                    & vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r)),32);
        tracep->chgQData(oldp+520,(((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r))))) 
                                    & vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+522,(((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                     ? 0U : ((1U & (IData)(
                                                           (vlSelf->SimTop__DOT__pc 
                                                            >> 2U)))
                                              ? (IData)(
                                                        (vlSelf->SimTop__DOT__ReadData 
                                                         >> 0x20U))
                                              : (IData)(vlSelf->SimTop__DOT__ReadData)))),32);
        tracep->chgQData(oldp+523,(vlSelf->SimTop__DOT__pc),64);
        tracep->chgBit(oldp+525,(vlSelf->SimTop__DOT__RamReadEnable));
        tracep->chgBit(oldp+526,(vlSelf->SimTop__DOT__RamWriteEnable));
        tracep->chgQData(oldp+527,(((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                     ? vlSelf->SimTop__DOT__ReadData
                                     : 0ULL)),64);
        tracep->chgQData(oldp+529,(vlSelf->SimTop__DOT__RamReadAddr),64);
        tracep->chgQData(oldp+531,(vlSelf->SimTop__DOT__RamWriteAddr),64);
        tracep->chgQData(oldp+533,(vlSelf->SimTop__DOT__RamWriteData),64);
        tracep->chgQData(oldp+535,(vlSelf->SimTop__DOT__RamWriteMask),64);
        tracep->chgQData(oldp+537,(vlSelf->SimTop__DOT__ReadData),64);
        tracep->chgQData(oldp+539,(((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                     ? vlSelf->SimTop__DOT__RamReadAddr
                                     : vlSelf->SimTop__DOT__pc)),64);
        tracep->chgBit(oldp+541,(vlSelf->SimTop__DOT__Rvcpu__DOT__jump));
        tracep->chgBit(oldp+542,(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD));
        tracep->chgBit(oldp+543,(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE));
        tracep->chgQData(oldp+544,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr),64);
        tracep->chgQData(oldp+546,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr),64);
        tracep->chgQData(oldp+548,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadData),64);
        tracep->chgQData(oldp+550,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteData),64);
        tracep->chgBit(oldp+552,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadEnable));
        tracep->chgBit(oldp+553,(vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteEnable));
        tracep->chgQData(oldp+554,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr),64);
        tracep->chgQData(oldp+556,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr),64);
        tracep->chgQData(oldp+558,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData),64);
        tracep->chgBit(oldp+560,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadEnable));
        tracep->chgBit(oldp+561,(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable));
        tracep->chgBit(oldp+562,(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreM));
        tracep->chgBit(oldp+563,(vlSelf->SimTop__DOT__Rvcpu__DOT__itTime));
        tracep->chgBit(oldp+564,(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF));
        tracep->chgQData(oldp+565,(vlSelf->SimTop__DOT__Rvcpu__DOT__jAddr),64);
        tracep->chgQData(oldp+567,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r),64);
        tracep->chgQData(oldp+569,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r),64);
        tracep->chgQData(oldp+571,(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r),64);
        tracep->chgCData(oldp+573,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r),2);
        tracep->chgBit(oldp+574,(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r));
        tracep->chgQData(oldp+575,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1),64);
        tracep->chgQData(oldp+577,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2),64);
        tracep->chgQData(oldp+579,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                    - vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+581,((QData)((IData)(
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                    < vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+583,((QData)((IData)(
                                                   VL_LTS_IQQ(64, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+585,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                    >> (0x3fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+587,(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgIData(oldp+589,(((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1) 
                                    >> (0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),32);
        tracep->chgIData(oldp+590,(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1), 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),32);
        tracep->chgQData(oldp+591,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                    ^ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+593,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                    | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+595,((vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                    & vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)),64);
        tracep->chgQData(oldp+597,((QData)((IData)(
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                    >= vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+599,((QData)((IData)(
                                                   VL_GTES_IQQ(64, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+601,((QData)((IData)(
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                    == vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+603,((QData)((IData)(
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                    != vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))),64);
        tracep->chgQData(oldp+605,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result),64);
        tracep->chgBit(oldp+607,(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r));
        tracep->chgBit(oldp+608,((1U & (~ (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF)))));
        tracep->chgQData(oldp+609,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8),64);
        tracep->chgQData(oldp+611,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16),64);
        tracep->chgQData(oldp+613,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32),64);
        tracep->chgQData(oldp+615,(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r),64);
        tracep->chgIData(oldp+617,((7U & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)))))),32);
        tracep->chgQData(oldp+618,((vlSelf->SimTop__DOT__RamWriteAddr 
                                    - 0x80000000ULL)),64);
        tracep->chgQData(oldp+620,((((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                      ? vlSelf->SimTop__DOT__RamReadAddr
                                      : vlSelf->SimTop__DOT__pc) 
                                    - 0x80000000ULL)),64);
    }
    tracep->chgBit(oldp+622,(vlSelf->clock));
    tracep->chgBit(oldp+623,(vlSelf->reset));
    tracep->chgQData(oldp+624,(vlSelf->io_logCtrl_log_begin),64);
    tracep->chgQData(oldp+626,(vlSelf->io_logCtrl_log_end),64);
    tracep->chgQData(oldp+628,(vlSelf->io_logCtrl_log_level),64);
    tracep->chgBit(oldp+630,(vlSelf->io_perfInfo_clean));
    tracep->chgBit(oldp+631,(vlSelf->io_perfInfo_dump));
    tracep->chgBit(oldp+632,(vlSelf->io_uart_out_valid));
    tracep->chgCData(oldp+633,(vlSelf->io_uart_out_ch),8);
    tracep->chgBit(oldp+634,(vlSelf->io_uart_in_valid));
    tracep->chgCData(oldp+635,(vlSelf->io_uart_in_ch),8);
    tracep->chgBit(oldp+636,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->chgQData(oldp+637,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable) 
                                            & (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)))
                                            ? (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr) 
                                                == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                : vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                               [vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr])
                                            : 0ULL))),64);
    tracep->chgQData(oldp+639,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable) 
                                            & (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)))
                                            ? (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr) 
                                                == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                                                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                                                : vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                               [vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr])
                                            : 0ULL))),64);
    tracep->chgBit(oldp+641,((1U & ((~ (IData)(vlSelf->reset)) 
                                    & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                        >> 0xeU) | 
                                       ((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)) 
                                        | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r)))))));
    tracep->chgQData(oldp+642,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                            ? 0xffffffffffffffffULL
                                            : ((2U 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                ? (0xffffffffULL 
                                                   << 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                       << 3U)))
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                    ? 
                                                   (0xffffULL 
                                                    << 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                        << 3U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                     ? 
                                                    (0xffULL 
                                                     << 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                         << 3U)))
                                                     : 0ULL)))))),64);
    tracep->chgQData(oldp+644,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0x200bff8ULL 
                                            == vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr)
                                            ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime
                                            : ((0x2004000ULL 
                                                == vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr)
                                                ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp
                                                : 0ULL)))),64);
    tracep->chgQData(oldp+646,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0x73U == 
                                            (0x7fU 
                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
                                            ? (((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                 >> 0x14U) 
                                                == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r))
                                                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                                : ((IData)(vlSelf->reset)
                                                    ? 0ULL
                                                    : 
                                                   ((0xb00U 
                                                     == 
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x14U))
                                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle
                                                     : 
                                                    ((0x300U 
                                                      == 
                                                      (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                       >> 0x14U))
                                                      ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus
                                                      : 
                                                     ((0x342U 
                                                       == 
                                                       (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                        >> 0x14U))
                                                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause
                                                       : 
                                                      ((0x305U 
                                                        == 
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                         >> 0x14U))
                                                        ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec
                                                        : 
                                                       ((0x341U 
                                                         == 
                                                         (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                          >> 0x14U))
                                                         ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc
                                                         : 
                                                        ((0xb02U 
                                                          == 
                                                          (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                           >> 0x14U))
                                                          ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret
                                                          : 0ULL))))))))
                                            : 0ULL))),64);
    tracep->chgQData(oldp+648,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((0xb00U 
                                            == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                >> 0x14U))
                                            ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle
                                            : ((0x300U 
                                                == 
                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                 >> 0x14U))
                                                ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus
                                                : (
                                                   (0x342U 
                                                    == 
                                                    (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                     >> 0x14U))
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0x14U))
                                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                       >> 0x14U))
                                                      ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc
                                                      : 
                                                     ((0xb02U 
                                                       == 
                                                       (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                        >> 0x14U))
                                                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret
                                                       : 0ULL)))))))),64);
    tracep->chgBit(oldp+650,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))));
    tracep->chgQData(oldp+651,(((IData)(vlSelf->reset)
                                 ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD)),64);
    tracep->chgQData(oldp+653,(((IData)(vlSelf->reset)
                                 ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data)),64);
    tracep->chgBit(oldp+655,(((~ (IData)(vlSelf->reset)) 
                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r))));
    tracep->chgQData(oldp+656,(((IData)(vlSelf->reset)
                                 ? 0ULL : ((IData)(
                                                   (0U 
                                                    != 
                                                    (0xc0U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                            ? (4ULL 
                                               + vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                                            : ((1U 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)))
                                                : (
                                                   (0x100U 
                                                    & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                     ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc00U 
                                                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                                      ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r
                                                      : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result))))))),64);
    tracep->chgBit(oldp+658,(((IData)(vlSelf->reset) 
                              | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))));
    tracep->chgQData(oldp+659,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8 
                                                                           >> 7U)))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8))))))),64);
    tracep->chgQData(oldp+661,(((IData)(vlSelf->reset)
                                 ? 0ULL : (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8)))))),64);
    tracep->chgQData(oldp+663,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16 
                                                                           >> 0xfU)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16))))))),64);
    tracep->chgQData(oldp+665,(((IData)(vlSelf->reset)
                                 ? 0ULL : (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16)))))),64);
    tracep->chgQData(oldp+667,(((IData)(vlSelf->reset)
                                 ? 0ULL : (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32))))),64);
    tracep->chgQData(oldp+669,(((IData)(vlSelf->reset)
                                 ? 0ULL : (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32)))),64);
    tracep->chgQData(oldp+671,(((IData)(vlSelf->reset)
                                 ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadData)),64);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
