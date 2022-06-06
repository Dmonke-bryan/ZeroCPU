// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated.h"

class VSimTop__Syms;
class VSimTop___024unit;

VL_MODULE(VSimTop___024root) {
  public:
    // CELLS
    VSimTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_perfInfo_clean,0,0);
        VL_IN8(io_perfInfo_dump,0,0);
        VL_OUT8(io_uart_out_valid,0,0);
        VL_OUT8(io_uart_out_ch,7,0);
        VL_OUT8(io_uart_in_valid,0,0);
        VL_IN8(io_uart_in_ch,7,0);
        CData/*0:0*/ SimTop__DOT__RamWriteEnable;
        CData/*0:0*/ SimTop__DOT__r_valid;
        CData/*0:0*/ SimTop__DOT__r_wen;
        CData/*7:0*/ SimTop__DOT__r_wdest;
        CData/*0:0*/ SimTop__DOT__trap;
        CData/*7:0*/ SimTop__DOT__trap_code;
        CData/*0:0*/ SimTop__DOT__skip;
        CData/*0:0*/ SimTop__DOT__inst_vaild;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__jump;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__rs1ReadEnable;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__rs2ReadEnable;
        CData/*4:0*/ SimTop__DOT__Rvcpu__DOT__rs1ReadAddr;
        CData/*4:0*/ SimTop__DOT__Rvcpu__DOT__rs2ReadAddr;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__flushD;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__flushE;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__ClintWriteEnable;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__LoadStoreE;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__itTime;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__stallF;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRW;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRS;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRC;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRWI;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRSI;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__CSRRCI;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r;
        CData/*5:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrFuncE_dff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusReadEnableE_dff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r;
        CData/*5:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteEnableM_clk_diff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadEnableM_clk_diff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteEnableM_clk_diff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jalbranch_dff__DOT__qout_r;
        CData/*5:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r;
        CData/*4:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r;
        CData/*2:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__timediv;
        CData/*1:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_r;
        CData/*1:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itTime_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__itWhit;
        CData/*1:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r;
        CData/*1:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r;
        CData/*1:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtype_dff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQret_dff__DOT__qout_r;
        CData/*1:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQtypeW_dff__DOT__qout_r;
        CData/*0:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__IRQretW_dff__DOT__qout_r;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*14:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_r;
        SData/*10:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_r;
        SData/*13:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_r;
        SData/*14:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r;
        SData/*10:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
    };
    struct {
        SData/*13:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r;
        SData/*11:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrWriteAddrE_dff__DOT__qout_r;
        SData/*11:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteAddrM_clk_diff__DOT__qout_r;
        SData/*10:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r;
        SData/*11:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__inst;
        IData/*31:0*/ SimTop__DOT__r_instr;
        IData/*31:0*/ SimTop__DOT__Rvcpu__DOT__If_stage__DOT__instD_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__intrNO1_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__it_instr1_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__intrNO2_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__it_instr2_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__intrNO3_dff__DOT__qout_r;
        IData/*31:0*/ SimTop__DOT__it_instr3_dff__DOT__qout_r;
        VL_IN64(io_logCtrl_log_begin,63,0);
        VL_IN64(io_logCtrl_log_end,63,0);
        VL_IN64(io_logCtrl_log_level,63,0);
        QData/*63:0*/ SimTop__DOT__pc;
        QData/*63:0*/ SimTop__DOT__RamWriteAddr;
        QData/*63:0*/ SimTop__DOT__RamWriteData;
        QData/*63:0*/ SimTop__DOT__RamWriteMask;
        QData/*63:0*/ SimTop__DOT__r_pc;
        QData/*63:0*/ SimTop__DOT__r_wdata;
        QData/*63:0*/ SimTop__DOT__cycleCnt;
        QData/*63:0*/ SimTop__DOT__instrCnt;
        QData/*63:0*/ SimTop__DOT__BusReadAddrW;
        QData/*63:0*/ SimTop__DOT__BusWriteAddrW;
        QData/*63:0*/ SimTop__DOT__mstatus;
        QData/*63:0*/ SimTop__DOT__sstatus;
        QData/*63:0*/ SimTop__DOT__mepc;
        QData/*63:0*/ SimTop__DOT__mtvec;
        QData/*63:0*/ SimTop__DOT__mcause;
        QData/*63:0*/ SimTop__DOT__mip;
        QData/*63:0*/ SimTop__DOT__mie;
        QData/*63:0*/ SimTop__DOT__mscratch;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__BusReadAddr;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__BusWriteAddr;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__ClintWriteAddr;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__ClintWriteData;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__jAddr;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pc;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__csrReadDataE_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs1Data;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rs2Data;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrop2;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__resADD;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__result;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__csrWriteDataM_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusReadAddrM_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteAddrM_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__BusWriteDataM_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r;
    };
    struct {
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcycle;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__minstret;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_t;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mstatus_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__sstatus_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtvec_t;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mie_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mepc_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mscratch_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mcause_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtime;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__CSRfile_u__DOT__mtimecmp;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteData_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__Rvcpu__DOT__Ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__it_pc1_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__it_pc2_dff__DOT__qout_r;
        QData/*63:0*/ SimTop__DOT__it_pc3_dff__DOT__qout_r;
        QData/*63:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
        VlUnpacked<QData/*63:0*/, 4> SimTop__DOT__it_pc;
        VlUnpacked<IData/*31:0*/, 4> SimTop__DOT__it_instr;
        VlUnpacked<IData/*31:0*/, 4> SimTop__DOT__intrNO;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__Rvcpu__DOT__Regfile__DOT__regs;
    };

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSimTop___024root(const char* name);
    ~VSimTop___024root();
    VL_UNCOPYABLE(VSimTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
