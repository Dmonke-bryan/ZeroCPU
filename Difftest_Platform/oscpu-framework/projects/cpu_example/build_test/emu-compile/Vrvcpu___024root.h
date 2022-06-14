// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrvcpu.h for the primary calling header

#ifndef VERILATED_VRVCPU___024ROOT_H_
#define VERILATED_VRVCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vrvcpu__Syms;
VL_MODULE(Vrvcpu___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(RamReadEnable,0,0);
        VL_OUT8(RamWriteEnable,0,0);
        VL_OUT8(pcEnableF,0,0);
        CData/*0:0*/ rvcpu__DOT__rs1ReadEnable;
        CData/*0:0*/ rvcpu__DOT__rs2ReadEnable;
        CData/*4:0*/ rvcpu__DOT__rs1ReadAddr;
        CData/*4:0*/ rvcpu__DOT__rs2ReadAddr;
        CData/*0:0*/ rvcpu__DOT__flushD;
        CData/*0:0*/ rvcpu__DOT__If_stage__DOT__pcEnableF_dff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__Rtype;
        CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__Itype;
        CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__Utype;
        CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__rdWriteEnableE_r;
        CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__RamReadEnableE_dff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Id_stage__DOT__RamWriteEnableE_dff__DOT__qout_r;
        CData/*5:0*/ rvcpu__DOT__Id_stage__DOT__rd_dff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Exe_stage__DOT__jump_r;
        CData/*0:0*/ rvcpu__DOT__Exe_stage__DOT__RamReadEnableM_clk_diff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Exe_stage__DOT__RamWriteEnableM_clk_diff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Exe_stage__DOT__jump_dff__DOT__qout_r;
        CData/*5:0*/ rvcpu__DOT__Exe_stage__DOT__rd_r_clk_diff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Mem_stage__DOT__rdWriteEnableW_clk_diff__DOT__qout_r;
        CData/*4:0*/ rvcpu__DOT__Mem_stage__DOT__rdWriteAddrW_clk_diff__DOT__qout_r;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__Redirect1_r;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__ReadLoad;
        CData/*0:0*/ rvcpu__DOT__Ctrl__DOT__stallF_dff__DOT__qout_r;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__ReadLoad2_dff__DOT__qout_r;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*9:0*/ rvcpu__DOT__instTypeM;
        SData/*10:0*/ rvcpu__DOT__Id_stage__DOT__memFuncE_r;
        SData/*13:0*/ rvcpu__DOT__Id_stage__DOT__instFuncE_r;
        SData/*9:0*/ rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r;
        SData/*10:0*/ rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
        SData/*13:0*/ rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r;
        SData/*10:0*/ rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r;
        VL_IN(instF,31,0);
        IData/*31:0*/ rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r;
        VL_IN64(RamReadData,63,0);
        VL_OUT64(RamReadAddr,63,0);
        VL_OUT64(RamWriteMask,63,0);
        VL_OUT64(RamWriteAddr,63,0);
        VL_OUT64(RamWriteData,63,0);
        VL_OUT64(pcF,63,0);
        QData/*63:0*/ rvcpu__DOT__RamReadAddrE;
        QData/*63:0*/ rvcpu__DOT__RamWriteAddrE;
        QData/*63:0*/ rvcpu__DOT__RamWriteDataE;
        QData/*63:0*/ rvcpu__DOT__op1E;
        QData/*63:0*/ rvcpu__DOT__op2E;
        QData/*63:0*/ rvcpu__DOT__If_stage__DOT__pc;
        QData/*63:0*/ rvcpu__DOT__If_stage__DOT__pcD_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Id_stage__DOT__imm_r;
        QData/*63:0*/ rvcpu__DOT__Id_stage__DOT__pcE_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Id_stage__DOT__imm_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Id_stage__DOT__rs1DataE_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Id_stage__DOT__rs2DataE_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__rs1Data;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__rs2Data;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__op2;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__resADD;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__result;
    };
    struct {
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__RamWriteAddrM_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__result;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__RamWriteMask_r;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r;
        VL_OUT64(regs_o[32],63,0);
        VlUnpacked<QData/*63:0*/, 32> rvcpu__DOT____Vcellout__Regfile__regs_o;
        VlUnpacked<QData/*63:0*/, 32> rvcpu__DOT__Regfile__DOT__regs;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vrvcpu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vrvcpu___024root(const char* name);
    ~Vrvcpu___024root();
    VL_UNCOPYABLE(Vrvcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vrvcpu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
