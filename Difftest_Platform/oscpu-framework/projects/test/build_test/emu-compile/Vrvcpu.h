// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRVCPU_H_
#define VERILATED_VRVCPU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vrvcpu__Syms;
class Vrvcpu_VerilatedVcd;


//----------

VL_MODULE(Vrvcpu) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(RamReadEnable,0,0);
    VL_OUT8(RamWriteEnable,0,0);
    VL_OUT8(pcEnableF,0,0);
    VL_IN(instF,31,0);
    VL_IN64(RamReadData,63,0);
    VL_OUT64(RamReadAddr,63,0);
    VL_OUT64(RamWriteMask,63,0);
    VL_OUT64(RamWriteAddr,63,0);
    VL_OUT64(RamWriteData,63,0);
    VL_OUT64(pcF,63,0);
    VL_OUT64(regs_o[32],63,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ rvcpu__DOT__rs1ReadEnable;
        CData/*0:0*/ rvcpu__DOT__rs2ReadEnable;
        CData/*4:0*/ rvcpu__DOT__rs1ReadAddr;
        CData/*4:0*/ rvcpu__DOT__rs2ReadAddr;
        CData/*0:0*/ rvcpu__DOT__flushD;
        CData/*0:0*/ rvcpu__DOT__flushE;
        CData/*1:0*/ rvcpu__DOT__LoadRedirect;
        CData/*0:0*/ rvcpu__DOT__stallF;
        CData/*0:0*/ rvcpu__DOT__stallD;
        CData/*0:0*/ rvcpu__DOT__stallE;
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
        CData/*0:0*/ rvcpu__DOT__Ctrl__DOT__flushC;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__Redirect1_dff__DOT__qout_r;
        CData/*1:0*/ rvcpu__DOT__Ctrl__DOT__Redirect2_dff__DOT__qout_r;
        CData/*0:0*/ rvcpu__DOT__Wb_stage__DOT__rdWriteEnableO_clk_diff__DOT__qout_r;
        CData/*4:0*/ rvcpu__DOT__Wb_stage__DOT__rdWriteAddrO_clk_diff__DOT__qout_r;
        SData/*9:0*/ rvcpu__DOT__instTypeM;
        SData/*10:0*/ rvcpu__DOT__Id_stage__DOT__memFuncE_r;
        SData/*13:0*/ rvcpu__DOT__Id_stage__DOT__instFuncE_r;
        SData/*9:0*/ rvcpu__DOT__Id_stage__DOT__instTypeE_dff__DOT__qout_r;
        SData/*10:0*/ rvcpu__DOT__Id_stage__DOT__memFuncE_dff__DOT__qout_r;
        SData/*13:0*/ rvcpu__DOT__Id_stage__DOT__instFuncE_dff__DOT__qout_r;
        SData/*10:0*/ rvcpu__DOT__Exe_stage__DOT__memFuncM_clk_diff__DOT__qout_r;
        IData/*31:0*/ rvcpu__DOT__If_stage__DOT__instE_dff__DOT__qout_r;
        IData/*31:0*/ rvcpu__DOT__Id_stage__DOT__instE_dff__DOT__qout_r;
        IData/*31:0*/ rvcpu__DOT__Exe_stage__DOT__instM_dff__DOT__qout_r;
        IData/*31:0*/ rvcpu__DOT__Mem_stage__DOT__instW_dff__DOT__qout_r;
        IData/*31:0*/ rvcpu__DOT__Wb_stage__DOT__instO_dff__DOT__qout_r;
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
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__RamWriteDataM_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__RamReadAddrM_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__jumpAddr_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r;
    };
    struct {
        QData/*63:0*/ rvcpu__DOT__Exe_stage__DOT__pcM_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__loadRes8;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__rdWriteDataM_r;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Mem_stage__DOT__pcW_dff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Wb_stage__DOT__rdWriteDataO_clk_diff__DOT__qout_r;
        QData/*63:0*/ rvcpu__DOT__Wb_stage__DOT__pcO_dff__DOT__qout_r;
        VlUnpacked<QData/*63:0*/, 32> rvcpu__DOT__Regfile__DOT__regs;
    };

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<QData/*63:0*/, 32> rvcpu__DOT____Vcellout__Regfile__regs_o;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vrvcpu__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vrvcpu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vrvcpu(VerilatedContext* contextp, const char* name = "TOP");
    Vrvcpu(const char* name = "TOP")
      : Vrvcpu(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vrvcpu();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);

    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();

    // INTERNAL METHODS
    static void _eval_initial_loop(Vrvcpu__Syms* __restrict vlSymsp);
    void __Vconfigure(Vrvcpu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vrvcpu__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vrvcpu__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vrvcpu__Syms* __restrict vlSymsp);
  private:
    static void _ctor_var_reset(Vrvcpu* self) VL_ATTR_COLD;
  public:
    static void _eval(Vrvcpu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vrvcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vrvcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vrvcpu__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vrvcpu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
