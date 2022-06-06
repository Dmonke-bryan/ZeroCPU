// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___initial__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->SimTop__DOT__mip = 0ULL;
}

VL_ATTR_COLD void VSimTop___024root___initial__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->SimTop__DOT__mtvec = (0xfffffffffffffffcULL 
                                  & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t);
    vlSelf->SimTop__DOT__mie = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r;
    vlSelf->SimTop__DOT__mscratch = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r;
    vlSelf->SimTop__DOT__mepc = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r;
    vlSelf->SimTop__DOT__mcause = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r;
    vlSelf->SimTop__DOT__mstatus = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r;
    vlSelf->SimTop__DOT__sstatus = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r;
}

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    VSimTop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VSimTop___024root___initial__TOP__1(vlSelf);
}

VL_ATTR_COLD void VSimTop___024root___settle__TOP__0(VSimTop___024root* vlSelf);

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__RamReadEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__RamWriteEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__RamReadAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__RamWriteAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__RamWriteData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__RamWriteMask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__ReadEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__ReadData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__r_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__r_instr = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__r_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__r_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__r_wdest = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__r_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__instrCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__skip = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__BusReadAddrW = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__BusWriteAddrW = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__inst_vaild = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__sstatus = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mscratch = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__it_pc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__it_instr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__intrNO[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__instVaild = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__RamReadVaild = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddrE = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddrE = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteDataE = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__op1E = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__op2E = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__flushD = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__flushE = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteMask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__ClintReadEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreE = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreM = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__LoadRedirect = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__IRQcause = VL_RAND_RESET_Q(63);
    vlSelf->SimTop__DOT__Rvcpu__DOT__itTime = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__stallF = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__jAddr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcEnableF_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_r = VL_RAND_RESET_I(15);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_r = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_r = VL_RAND_RESET_I(14);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r = VL_RAND_RESET_I(15);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r = VL_RAND_RESET_I(14);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteAddrM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteDataM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteEnableM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(11);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instTypeM_dff__DOT__qout_r = VL_RAND_RESET_I(15);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instTypeW_dff__DOT__qout_r = VL_RAND_RESET_I(15);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mvendorid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__marchid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mimpid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mhartid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__misa = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__medeleg = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mideleg = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcounteren = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__intrNO1_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__it_pc1_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__it_instr1_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__intrNO2_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__it_pc2_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__it_instr2_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__intrNO3_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__it_pc3_dff__DOT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__it_instr3_dff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_ram_read_helper__0__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
