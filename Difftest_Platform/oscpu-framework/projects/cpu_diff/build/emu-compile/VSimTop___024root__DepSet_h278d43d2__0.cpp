// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchEvent_TOP____024unit(CData/*7:0*/ coreid, IData/*31:0*/ intrNo, IData/*31:0*/ cause, QData/*63:0*/ exceptionPC, QData/*63:0*/ exceptionInst);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype;
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype;
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype;
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t;
    CData/*0:0*/ __Vdly__SimTop__DOT__trap;
    QData/*63:0*/ __Vdly__SimTop__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__instrCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    IData/*31:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r;
    QData/*63:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r;
    CData/*4:0*/ __Vdlyvdim0__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0;
    QData/*63:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp;
    QData/*63:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime;
    QData/*63:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle;
    QData/*63:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret;
    CData/*2:0*/ __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv;
    // Body
    __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    __Vdlyvset__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0 = 0U;
    __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r;
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle;
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv;
    __Vdly__SimTop__DOT__instrCnt = vlSelf->SimTop__DOT__instrCnt;
    __Vdly__SimTop__DOT__cycleCnt = vlSelf->SimTop__DOT__cycleCnt;
    __Vdly__SimTop__DOT__trap = vlSelf->SimTop__DOT__trap;
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret;
    __Vdly__SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r;
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp;
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime;
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                    ((vlSelf->SimTop__DOT__RamWriteAddr 
                                                                      - 0x80000000ULL) 
                                                                     >> 3U), vlSelf->SimTop__DOT__RamWriteData, vlSelf->SimTop__DOT__RamWriteMask, (IData)(vlSelf->SimTop__DOT__RamWriteEnable));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[1U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[2U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[3U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[4U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[5U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[6U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[7U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[8U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[9U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0x1fU] = 0ULL;
    }
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchEvent_TOP____024unit(0U, 
                                                                        vlSelf->SimTop__DOT__intrNO
                                                                        [2U], 0U, 
                                                                        vlSelf->SimTop__DOT__it_pc
                                                                        [2U], (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__it_instr
                                                                                [2U])));
    if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
                  & (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))))) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[0U] = 0ULL;
    }
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__trap_code)), vlSelf->SimTop__DOT__r_pc, vlSelf->SimTop__DOT__cycleCnt, vlSelf->SimTop__DOT__instrCnt);
    if (vlSelf->SimTop__DOT__r_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__r_valid), vlSelf->SimTop__DOT__r_pc, vlSelf->SimTop__DOT__r_instr, (IData)(vlSelf->SimTop__DOT__skip), 0U, 0U, (IData)(vlSelf->SimTop__DOT__r_wen), vlSelf->SimTop__DOT__r_wdest, vlSelf->SimTop__DOT__r_wdata);
    }
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, vlSelf->SimTop__DOT__mstatus, vlSelf->SimTop__DOT__sstatus, vlSelf->SimTop__DOT__mepc, 0ULL, 0ULL, 0ULL, vlSelf->SimTop__DOT__mtvec, 0ULL, vlSelf->SimTop__DOT__mcause, 0ULL, 0ULL, vlSelf->SimTop__DOT__mip, vlSelf->SimTop__DOT__mie, vlSelf->SimTop__DOT__mscratch, 0ULL, 0ULL, 0ULL);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus 
        = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__it_instr3_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__it_pc3_dff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__it_instr2_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__it_pc2_dff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__intrNO3_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__intrNO2_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch = 0ULL;
    } else {
        vlSelf->SimTop__DOT__it_instr3_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__it_instr[1U];
        vlSelf->SimTop__DOT__it_pc3_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__it_pc[1U];
        vlSelf->SimTop__DOT__it_instr2_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__it_instr[0U];
        vlSelf->SimTop__DOT__it_pc2_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__it_pc[0U];
        vlSelf->SimTop__DOT__intrNO3_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__intrNO[1U];
        vlSelf->SimTop__DOT__intrNO2_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__intrNO[0U];
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r;
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))
            ? 0U : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_r));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
        if (vlSelf->reset) {
            vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r = 0ULL;
            vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r = 0ULL;
        } else {
            vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data;
            vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r 
                = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD;
        }
    }
    __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF)
                                             ? vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r
                                             : vlSelf->SimTop__DOT__pc));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))
            ? 0U : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r 
        = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))) 
           & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r));
    vlSelf->SimTop__DOT__intrNO1_dff__DOT__qout_r = 
        ((IData)(vlSelf->reset) ? 0U : (7U & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))
            ? 0U : (((~ (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r)) 
                     & (((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                         << 1U) | (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)))) 
                    & (((((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                          == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                         & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable)) 
                        << 1U) | (((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r)) 
                                   == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)) 
                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable)))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = 0ULL;
    } else if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r 
            = (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable) 
                & (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)))
                ? (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr) 
                    == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                    : vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                   [vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr])
                : 0ULL);
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r 
            = (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable) 
                & (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)))
                ? (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr) 
                    == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r))
                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                    : vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                   [vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr])
                : 0ULL);
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))
            ? 0ULL : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r)
                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                       : 0ULL));
    vlSelf->SimTop__DOT__it_instr1_dff__DOT__qout_r 
        = ((IData)(vlSelf->reset) ? 0U : ((- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)))) 
                                          & vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r));
    if (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r) 
         & (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r)))) {
        __Vdlyvval__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r;
        __Vdlyvset__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc = 0x80000000ULL;
        __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r = 0U;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc 
            = ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__jump)
                ? (4ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__jAddr)
                : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF)
                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc
                    : (4ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc)));
        __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
            = ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__stallF)
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r
                : ((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                    ? 0U : ((1U & (IData)((vlSelf->SimTop__DOT__pc 
                                           >> 2U)))
                             ? (IData)((vlSelf->SimTop__DOT__ReadData 
                                        >> 0x20U)) : (IData)(vlSelf->SimTop__DOT__ReadData))));
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r 
        = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))) 
           & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))
            ? 0ULL : ((IData)(vlSelf->reset) ? 0ULL
                       : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle = 0ULL;
    }
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle 
        = (((0xb00U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : (1ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__it_pc1_dff__DOT__qout_r = 0ULL;
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv = 0U;
    } else {
        vlSelf->SimTop__DOT__it_pc1_dff__DOT__qout_r 
            = ((- (QData)((IData)((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r))))) 
               & vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r);
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))
            ? 0ULL : ((IData)(vlSelf->reset) ? 0ULL
                       : ((IData)((0U != (0xc0U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                           ? (4ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                           : ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                               ? (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)))
                               : ((0x100U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                   ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                                   : ((0x200U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                                       : ((IData)((0U 
                                                   != 
                                                   (0xc00U 
                                                    & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
                                           ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r
                                           : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)))))));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret = 0ULL;
    }
    if (((0xb02U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
         & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r;
    } else if ((0ULL != vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r)) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret 
            = (1ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r;
    }
    __Vdly__SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))
            ? 0ULL : ((IData)(vlSelf->reset) ? 0ULL
                       : ((0x73U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
                           ? (((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                >> 0x14U) == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r))
                               ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                               : ((IData)(vlSelf->reset)
                                   ? 0ULL : ((0xb00U 
                                              == (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                  >> 0x14U))
                                              ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle
                                              : ((0x300U 
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
                           : 0ULL)));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp = 0ULL;
    }
    __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp 
        = (((0x2004000ULL == vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr) 
            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData
            : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp);
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime = 0ULL;
    }
    if (((0x200bff8ULL == vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr) 
         & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable))) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData;
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv = 0U;
    } else if ((7U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv))) {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
            = (1ULL + vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime);
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv = 0U;
    } else {
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime;
        __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv 
            = (7U & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit 
            = (((0ULL == vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r) 
                | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r)) 
               & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit) 
                  | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__itTime)));
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime;
        __Vdly__SimTop__DOT__trap = 0U;
        vlSelf->SimTop__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__instrCnt = 0ULL;
        vlSelf->SimTop__DOT__skip = 0U;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
            = __Vdly__SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime;
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__trap)))) {
            __Vdly__SimTop__DOT__cycleCnt = (1ULL + vlSelf->SimTop__DOT__cycleCnt);
            __Vdly__SimTop__DOT__instrCnt = (vlSelf->SimTop__DOT__instrCnt 
                                             + (QData)((IData)(vlSelf->SimTop__DOT__inst_vaild)));
            vlSelf->SimTop__DOT__r_pc = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r;
            vlSelf->SimTop__DOT__r_instr = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r;
            vlSelf->SimTop__DOT__r_valid = vlSelf->SimTop__DOT__inst_vaild;
            vlSelf->SimTop__DOT__r_wen = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r;
            vlSelf->SimTop__DOT__r_wdest = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r;
            vlSelf->SimTop__DOT__r_wdata = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r;
            __Vdly__SimTop__DOT__trap = (0x6bU == vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r);
            vlSelf->SimTop__DOT__trap_code = (0xffU 
                                              & (IData)(
                                                        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs
                                                        [0xaU]));
            vlSelf->SimTop__DOT__skip = (((((0x7bU 
                                             == (0x7fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r)) 
                                            | (IData)(
                                                      (0xb0000073U 
                                                       == 
                                                       (0xfff0007fU 
                                                        & vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r)))) 
                                           | (0U != 
                                              vlSelf->SimTop__DOT__intrNO
                                              [2U])) 
                                          | ((3U == 
                                              (0x7fU 
                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r)) 
                                             & (0x80000000ULL 
                                                > vlSelf->SimTop__DOT__BusReadAddrW))) 
                                         | ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r)) 
                                            & (0x80000000ULL 
                                               > vlSelf->SimTop__DOT__BusWriteAddrW)));
            vlSelf->SimTop__DOT__mtvec = (0xfffffffffffffffcULL 
                                          & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t);
            vlSelf->SimTop__DOT__mcause = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r;
            vlSelf->SimTop__DOT__mip = 0ULL;
            vlSelf->SimTop__DOT__mie = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r;
            vlSelf->SimTop__DOT__mscratch = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r;
            vlSelf->SimTop__DOT__mstatus = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r;
            vlSelf->SimTop__DOT__sstatus = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r;
            vlSelf->SimTop__DOT__mepc = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r;
            vlSelf->SimTop__DOT__BusReadAddrW = vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr;
            vlSelf->SimTop__DOT__BusWriteAddrW = vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr;
        }
    }
    vlSelf->SimTop__DOT__it_instr[2U] = vlSelf->SimTop__DOT__it_instr3_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__it_pc[2U] = vlSelf->SimTop__DOT__it_pc3_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__it_instr[1U] = vlSelf->SimTop__DOT__it_instr2_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__it_pc[1U] = vlSelf->SimTop__DOT__it_pc2_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))
            ? 0U : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r 
        = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))) 
           & (0x23U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r));
    vlSelf->SimTop__DOT__it_instr[0U] = vlSelf->SimTop__DOT__it_instr1_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r 
        = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))) 
           & (3U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                         >> 0xeU));
    vlSelf->SimTop__DOT__it_pc[0U] = vlSelf->SimTop__DOT__it_pc1_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))
            ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_r);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteEnableM_clk_diff__DOT__qout_r));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r = 0U;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r 
            = ((0x1000U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r)
                    ? ((0ULL != vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r)
                        ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
                        : ((0ULL != vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r)
                            ? vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r
                            : ((0ULL != vlSelf->SimTop__DOT__pc)
                                ? vlSelf->SimTop__DOT__pc
                                : 0ULL))) : 0ULL));
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteDataM_clk_diff__DOT__qout_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteAddrM_clk_diff__DOT__qout_r;
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec 
        = (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r;
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r 
        = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))) 
           & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r));
    vlSelf->SimTop__DOT__trap = __Vdly__SimTop__DOT__trap;
    vlSelf->SimTop__DOT__cycleCnt = __Vdly__SimTop__DOT__cycleCnt;
    vlSelf->SimTop__DOT__instrCnt = __Vdly__SimTop__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs[__Vdlyvdim0__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0] 
            = __Vdlyvval__SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs__v0;
    }
    vlSelf->SimTop__DOT__intrNO[0U] = vlSelf->SimTop__DOT__intrNO1_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__intrNO[1U] = vlSelf->SimTop__DOT__intrNO2_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__intrNO[2U] = vlSelf->SimTop__DOT__intrNO3_dff__DOT__qout_r;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r = 0U;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r;
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r) 
                                         >> 5U));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r 
            = (0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r));
        vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r;
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreE = ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r) 
                                                   | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteEnableM_clk_diff__DOT__qout_r 
        = (1U & ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))) 
                 & (IData)((0U != (0xc00U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteDataM_clk_diff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))
            ? 0ULL : ((IData)((0U != (0x24U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2
                       : ((IData)((0U != (0x12U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                           ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                              | vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2)
                           : ((IData)((0U != (9U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r))))
                               ? (vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
                                  & (~ vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2))
                               : 0ULL))));
    SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t 
        = (((0x342U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteAddrM_clk_diff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))
            ? 0U : (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t 
        = (((0x305U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec);
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r 
        = ((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r
            : (((0x341U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc));
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
        = (((0x300U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r 
        = __Vdly__SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r 
        = (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r) 
                                   | ((~ ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r) 
                                          >> 1U)) & (IData)(
                                                            (SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t 
                                                             >> 0x3fU))))))) 
            << 0x3fU) | ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                          ? 7ULL : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                                     ? 0xbULL : (0x7fffffffffffffffULL 
                                                 & SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_t))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r 
        = ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r) 
           | (IData)((IData)(((0x80U & (((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                                          ? (IData)(
                                                    (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                     >> 3U))
                                          : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                             | (IData)(
                                                       (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                        >> 7U)))) 
                                        << 7U)) | (8U 
                                                   & ((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                                   >> 7U)))
                                                        ? (IData)(
                                                                  (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                                   >> 7U))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r)) 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                                   >> 3U)))) 
                                                      << 3U))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data 
        = ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
            : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data 
        = ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
            : ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r));
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r = 0U;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r;
    }
    vlSelf->SimTop__DOT__inst_vaild = ((0U != vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r) 
                                       & (vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r 
                                          != vlSelf->SimTop__DOT__r_pc));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r 
        = (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushE))
            ? 0ULL : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r);
    if (((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__flushD))) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r 
            = (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW) 
                << 5U) | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS) 
                           << 4U) | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC) 
                                      << 3U) | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI))))));
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r 
            = (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
               >> 0x14U);
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r 
            = (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r) 
                << 5U) | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r)
                           ? (0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                       >> 7U)) : 0U));
        vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2 
        = ((0x800U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
            ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
            : ((0x400U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data
                : 0ULL));
    vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
        = __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r 
        = __Vdly__SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_r 
        = (((IData)((3U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
            << 0xaU) | (((IData)((0x4003U == (0x707fU 
                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                         << 9U) | (((IData)((0x1003U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                    << 8U) | (((IData)(
                                                       (0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                               << 7U) 
                                              | (((IData)(
                                                          (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0x6003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0x3003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0x23U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0x2023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                 << 1U) 
                                                                | (IData)(
                                                                          (0x3023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))))))))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_r 
        = ((((((IData)((0x33U == (0xfe00707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
               | (IData)((0x13U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
              | (IData)((0x3bU == (0xfe00707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
             | (IData)((0x1bU == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
            << 0xdU) | ((((IData)((0x40000033U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                          | (IData)((0x4000003bU == 
                                     (0xfe00707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                         << 0xcU) | ((((((IData)((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                         | (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                        | (IData)((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                       | (IData)((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                      << 0xbU) | ((
                                                   (((IData)(
                                                             (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                     | (IData)(
                                                               (0x2013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                    | (IData)(
                                                              (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                   << 0xaU) 
                                                  | (((((IData)(
                                                                (0x3033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                        | (IData)(
                                                                  (0x3013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                       | (IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                      << 9U) 
                                                     | ((((((IData)(
                                                                    (0x5033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                            | (IData)(
                                                                      (0x5013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                           | (IData)(
                                                                     (0x503bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                          | (IData)(
                                                                    (0x501bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                         << 8U) 
                                                        | ((((((IData)(
                                                                       (0x40005033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                               | (IData)(
                                                                         (0x40005013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                              | (IData)(
                                                                        (0x4000503bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                             | (IData)(
                                                                       (0x4000501bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                            << 7U) 
                                                           | ((((IData)(
                                                                        (0x4033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                | (IData)(
                                                                          (0x4013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                               << 6U) 
                                                              | ((((IData)(
                                                                           (0x6033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                   | (IData)(
                                                                             (0x6013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                                  << 5U) 
                                                                 | ((((IData)(
                                                                              (0x7033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                      | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                              << 1U) 
                                                                             | (IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))))))))))))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI 
        = (IData)((0x5073U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI 
        = (IData)((0x7073U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype = 
        ((0x17U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
         | (0x37U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype = 
        (((((3U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
            | (0xfU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
           | (0x13U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
          | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
         | (0x67U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype = 
        ((0x33U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
         | (0x3bU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD 
        = (((IData)((0U != (0x1a0U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))))
             ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r
             : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data) 
           + ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
               ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data
               : vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_r 
        = ((0x63U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
            ? (((- (QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                    >> 0x1fU)))) << 0xdU) 
               | (QData)((IData)(((0x1000U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 7U))))))))
            : ((0x23U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
                ? (((- (QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 7U))))))
                : ((IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype)
                    ? (((- (QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 0x1fU)))) 
                        << 0xcU) | (QData)((IData)(
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                    >> 0x14U))))
                    : ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
                        ? (((- (QData)((IData)((vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
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
                                                                     >> 0x14U))))))))
                        : ((IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype)
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))))
                            : ((0x73U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))
                                ? (QData)((IData)((0x1fU 
                                                   & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0xfU))))
                                : 0ULL))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r 
        = (((((IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype) 
              | (IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype)) 
             | (IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Utype)) 
            | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
           | (0x73U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable 
        = (((IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype) 
            | (0x23U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
           | (0x63U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)));
    SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr = (
                                                   ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW) 
                                                    | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS)) 
                                                   | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC));
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr = 
        ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable)
          ? (0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                      >> 0x14U)) : 0U);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_r 
        = (((IData)((0x30200073U == (0xfff0707fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
            << 0xeU) | (((IData)((0x100073U == (0xfff0707fU 
                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                         << 0xdU) | (((IData)((0x73U 
                                               == (0xfff0707fU 
                                                   & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                      << 0xcU) | ((
                                                   (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI) 
                                                     | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI)) 
                                                    | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI)) 
                                                   << 0xbU) 
                                                  | (((IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr) 
                                                      << 0xaU) 
                                                     | (((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                         << 9U) 
                                                        | (((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                            << 8U) 
                                                           | (((0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0x67U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                  << 6U) 
                                                                 | (((0x63U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                     << 5U) 
                                                                    | (((3U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                        << 4U) 
                                                                       | (((0x23U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                           << 3U) 
                                                                          | ((((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                               | (0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                              << 2U) 
                                                                             | ((((0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                                | (0x3bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                                << 1U) 
                                                                                | ((0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                                | (0x3bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r)))))))))))))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable 
        = (((((IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Rtype) 
              | (IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__Itype)) 
             | (0x23U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
            | (0x63U == (0x7fU & vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r))) 
           | (IData)(SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csr));
    vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr = 
        ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable)
          ? (0x1fU & (vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r 
                      >> 0xfU)) : 0U);
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r 
        = ((((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
             << 1U) | (0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr))) 
           & (((((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                 == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadAddr)) 
                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs2ReadEnable)) 
               << 1U) | (((0x1fU & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r)) 
                          == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadAddr)) 
                         & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__rs1ReadEnable))));
}

void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

VL_INLINE_OPT void VSimTop___024root___combo__TOP__0(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__0\n"); );
    // Init
    QData/*63:0*/ SimTop__DOT__RamReadAddr;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__BusReadData;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__BusWriteData;
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__BusReadEnable;
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__BusWriteEnable;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__ClintReadAddr;
    CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__LoadStoreM;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16;
    QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32;
    // Body
    SimTop__DOT__Rvcpu__DOT__BusWriteData = ((IData)(vlSelf->reset)
                                              ? 0ULL
                                              : ((1U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                   ? 
                                                  (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                   << 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                       << 3U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                    ? 
                                                   (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                    << 
                                                    (0x38U 
                                                     & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                        << 3U)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                     ? 
                                                    (vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r 
                                                     << 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                         << 3U)))
                                                     : 0ULL)))));
    SimTop__DOT__Rvcpu__DOT__BusWriteEnable = ((~ (IData)(vlSelf->reset)) 
                                               & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r));
    SimTop__DOT__Rvcpu__DOT__BusReadEnable = ((~ (IData)(vlSelf->reset)) 
                                              & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r = 0ULL;
    } else {
        vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r;
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r 
            = (((0x304U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie);
        vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r 
            = (((0x340U == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch);
    }
    vlSelf->SimTop__DOT__Rvcpu__DOT__itTime = ((~ (IData)(vlSelf->reset)) 
                                               & (((IData)(
                                                           (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus 
                                                            >> 3U)) 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie 
                                                              >> 7U))) 
                                                  & (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime 
                                                     >= vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r 
        = ((0x1ffULL & vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r) 
           | (((QData)((IData)(((~ (IData)(vlSelf->reset)) 
                                & ((3U == (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                         >> 0xfU)))) 
                                   | (3U == (3U & (IData)(
                                                          (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                           >> 0xdU)))))))) 
               << 0x3fU) | ((((IData)(vlSelf->reset)
                               ? 0ULL : (0x3ffffffffffffULL 
                                         & (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                            >> 0xdU))) 
                             << 0xdU) | ((QData)((IData)(
                                                         (((0U 
                                                            != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                                                            ? 3U
                                                            : 
                                                           ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r)
                                                             ? 0U
                                                             : 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                                        >> 0xbU))))) 
                                                          << 2U))) 
                                         << 9U))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r 
        = (((QData)((IData)(((~ (IData)(vlSelf->reset)) 
                             & ((3U == (3U & (IData)(
                                                     ((((0x100U 
                                                         == (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                                                        & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                                                        ? vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                                                        : vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus) 
                                                      >> 0xfU)))) 
                                | (3U == (3U & (IData)(
                                                       (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                        >> 0xdU)))))))) 
            << 0x3fU) | ((QData)((IData)(((IData)(vlSelf->reset)
                                           ? 0U : (0xfU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t 
                                                              >> 0xdU)))))) 
                         << 0xdU));
    if (vlSelf->reset) {
        SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 = 0ULL;
        SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2 = 0ULL;
    } else {
        SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data;
        SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2 
            = ((4U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                ? vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r
                : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data);
    }
    SimTop__DOT__Rvcpu__DOT__LoadStoreM = ((~ (IData)(vlSelf->reset)) 
                                           & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r) 
                                              | (IData)(SimTop__DOT__Rvcpu__DOT__BusReadEnable)));
    if ((0x80000000ULL > vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr)) {
        vlSelf->SimTop__DOT__RamWriteAddr = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr 
            = vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr;
    } else {
        vlSelf->SimTop__DOT__RamWriteAddr = vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr;
        vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteAddr = 0ULL;
    }
    vlSelf->SimTop__DOT__RamWriteEnable = ((0x80000000ULL 
                                            <= vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr) 
                                           & (IData)(SimTop__DOT__Rvcpu__DOT__BusWriteEnable));
    if ((0x80000000ULL > vlSelf->SimTop__DOT__Rvcpu__DOT__BusWriteAddr)) {
        vlSelf->SimTop__DOT__RamWriteData = 0ULL;
        vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable 
            = SimTop__DOT__Rvcpu__DOT__BusWriteEnable;
        vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData 
            = SimTop__DOT__Rvcpu__DOT__BusWriteData;
        vlSelf->SimTop__DOT__RamWriteMask = 0ULL;
    } else {
        vlSelf->SimTop__DOT__RamWriteData = SimTop__DOT__Rvcpu__DOT__BusWriteData;
        vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteEnable = 0U;
        vlSelf->SimTop__DOT__Rvcpu__DOT__ClintWriteData = 0ULL;
        vlSelf->SimTop__DOT__RamWriteMask = ((IData)(vlSelf->reset)
                                              ? 0ULL
                                              : ((1U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                  ? 0xffffffffffffffffULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                                   ? 
                                                  (0xffffffffULL 
                                                   << 
                                                   (0x38U 
                                                    & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r) 
                                                       << 3U)))
                                                   : 
                                                  ((4U 
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
                                                     : 0ULL)))));
    }
    if ((0x80000000ULL > vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr)) {
        SimTop__DOT__Rvcpu__DOT__ClintReadAddr = vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr;
        SimTop__DOT__RamReadAddr = 0ULL;
    } else {
        SimTop__DOT__Rvcpu__DOT__ClintReadAddr = 0ULL;
        SimTop__DOT__RamReadAddr = vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr;
    }
    vlSelf->SimTop__DOT__RamReadEnable = ((0x80000000ULL 
                                           <= vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr) 
                                          & (IData)(SimTop__DOT__Rvcpu__DOT__BusReadEnable));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r 
        = ((~ (IData)(vlSelf->reset)) & (((0ULL != vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r))) 
                                         & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit) 
                                            | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__itTime))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result 
        = ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
            ? (QData)((IData)((SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                               != SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))
            : ((2U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                ? (QData)((IData)((SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                   == SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))
                : ((4U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                    ? (QData)((IData)((SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                       >= SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))
                    : ((8U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                        ? (QData)((IData)(VL_GTES_IQQ(64, SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))
                        : ((0x10U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                            ? (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                               & SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)
                            : ((0x20U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                ? (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                   | SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)
                                : ((0x40U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                    ? (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                       ^ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)
                                    : ((0x80U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                        ? ((1U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                            ? (QData)((IData)(
                                                              VL_SHIFTRS_III(32,32,5, (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1), 
                                                                             (0x1fU 
                                                                              & (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))))
                                            : VL_SHIFTRS_QQI(64,64,6, SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, 
                                                             (0x3fU 
                                                              & (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))))
                                        : ((0x100U 
                                            & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                            ? ((1U 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                ? (QData)((IData)(
                                                                  ((IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))))
                                                : (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))))
                                            : ((0x200U 
                                                & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                ? (QData)((IData)(
                                                                  (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                                   < SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                    ? (QData)((IData)(
                                                                      VL_LTS_IQQ(64, SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1, SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)))
                                                    : 
                                                   ((0x800U 
                                                     & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                     ? 
                                                    (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                     << 
                                                     (0x3fU 
                                                      & ((1U 
                                                          & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))
                                                          : (IData)(SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2))))
                                                     : 
                                                    ((0x1000U 
                                                      & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                      ? 
                                                     (SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op1 
                                                      - SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__op2)
                                                      : 
                                                     ((0x2000U 
                                                       & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r))
                                                       ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD
                                                       : 0ULL))))))))))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__jump = (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r) 
                                              | (0U 
                                                 != 
                                                 (0x5000U 
                                                  & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r)))) 
                                             | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r 
        = ((2U & (((~ (IData)(vlSelf->reset)) << 1U) 
                  & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                     >> 0xbU))) | ((~ (IData)(vlSelf->reset)) 
                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                  >> 5U) 
                                                 & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result)) 
                                                | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                  >> 7U))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__flushE = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & ((IData)(SimTop__DOT__Rvcpu__DOT__LoadStoreM) 
                                                   | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r) 
                                                      | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r)))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__stallF = ((~ (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                       >> 0xeU) 
                                                      | ((0U 
                                                          != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)) 
                                                         | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r))))) 
                                               & ((~ (IData)(vlSelf->reset)) 
                                                  & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreE) 
                                                      | (IData)(SimTop__DOT__Rvcpu__DOT__LoadStoreM)) 
                                                     | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r) 
                                                        | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                                           | ((0U 
                                                               != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r)) 
                                                              | (0U 
                                                                 != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r))))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__flushD = (1U & 
                                               ((~ (IData)(vlSelf->reset)) 
                                                & (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r) 
                                                    >> 0xeU) 
                                                   | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r) 
                                                      | ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r) 
                                                         | ((0U 
                                                             != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r)) 
                                                            | ((0U 
                                                                != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r)) 
                                                               | ((0U 
                                                                   != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r)) 
                                                                  | (((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__LoadStoreE) 
                                                                      | (IData)(SimTop__DOT__Rvcpu__DOT__LoadStoreM)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r))))))))));
    vlSelf->SimTop__DOT__Rvcpu__DOT__jAddr = ((0U != (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r))
                                               ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec
                                               : ((0x4000U 
                                                   & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r))
                                                   ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r)
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r
                                                    : 0ULL)));
    vlSelf->SimTop__DOT__pc = ((IData)(vlSelf->reset)
                                ? 0x80000000ULL : ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__jump)
                                                    ? vlSelf->SimTop__DOT__Rvcpu__DOT__jAddr
                                                    : vlSelf->SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc));
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 
                                                                   ((((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                                                       ? SimTop__DOT__RamReadAddr
                                                                       : vlSelf->SimTop__DOT__pc) 
                                                                     - 0x80000000ULL) 
                                                                    >> 3U), vlSelf->__Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__ReadData = vlSelf->__Vfunc_ram_read_helper__0__Vfuncout;
    SimTop__DOT__Rvcpu__DOT__BusReadData = ((0x80000000ULL 
                                             > vlSelf->SimTop__DOT__Rvcpu__DOT__BusReadAddr)
                                             ? ((IData)(vlSelf->reset)
                                                 ? 0ULL
                                                 : 
                                                ((0x200bff8ULL 
                                                  == SimTop__DOT__Rvcpu__DOT__ClintReadAddr)
                                                  ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime
                                                  : 
                                                 ((0x2004000ULL 
                                                   == SimTop__DOT__Rvcpu__DOT__ClintReadAddr)
                                                   ? vlSelf->SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp
                                                   : 0ULL)))
                                             : ((IData)(vlSelf->SimTop__DOT__RamReadEnable)
                                                 ? vlSelf->SimTop__DOT__ReadData
                                                 : 0ULL));
    SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8 
        = (SimTop__DOT__Rvcpu__DOT__BusReadData >> 
           (0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r) 
                     << 3U)));
    SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16 
        = (SimTop__DOT__Rvcpu__DOT__BusReadData >> 
           (0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r) 
                     << 3U)));
    SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32 
        = (SimTop__DOT__Rvcpu__DOT__BusReadData >> 
           (0x38U & ((IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r) 
                     << 3U)));
    vlSelf->SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r 
        = ((0x400U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
            ? ((IData)(vlSelf->reset) ? 0ULL : (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8))))))
            : ((0x200U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                ? ((IData)(vlSelf->reset) ? 0ULL : (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes8)))))
                : ((0x100U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                    ? ((IData)(vlSelf->reset) ? 0ULL
                        : (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16 
                                                           >> 0xfU)))))) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16))))))
                    : ((0x80U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                        ? ((IData)(vlSelf->reset) ? 0ULL
                            : (QData)((IData)((0xffffU 
                                               & (IData)(SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes16)))))
                        : ((0x40U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                            ? ((IData)(vlSelf->reset)
                                ? 0ULL : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32))))
                            : ((0x20U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                ? ((IData)(vlSelf->reset)
                                    ? 0ULL : (QData)((IData)(SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__loadRes32)))
                                : ((0x10U & (IData)(vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r))
                                    ? ((IData)(vlSelf->reset)
                                        ? 0ULL : SimTop__DOT__Rvcpu__DOT__BusReadData)
                                    : vlSelf->SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r)))))));
}
