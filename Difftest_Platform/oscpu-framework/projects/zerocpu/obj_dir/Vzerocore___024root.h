// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vzerocore.h for the primary calling header

#ifndef VERILATED_VZEROCORE___024ROOT_H_
#define VERILATED_VZEROCORE___024ROOT_H_  // guard

#include "verilated.h"

class Vzerocore__Syms;
VL_MODULE(Vzerocore___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(RamReadEnable,0,0);
    CData/*0:0*/ zerocore__DOT__rs1ReadEnable;
    CData/*4:0*/ zerocore__DOT__rs1ReadAddr;
    CData/*4:0*/ zerocore__DOT__rs2ReadAddr;
    CData/*0:0*/ zerocore__DOT__rdWriteEnableM;
    CData/*0:0*/ zerocore__DOT__u_id__DOT__Rtype;
    CData/*4:0*/ zerocore__DOT__u_ex__DOT__rdWriteAddr_E2M__DOT__dout_r;
    CData/*0:0*/ zerocore__DOT__u_mem__DOT__rdWriteEnable_M2W__DOT__dout_r;
    CData/*4:0*/ zerocore__DOT__u_mem__DOT__rdWriteAddr_M2W__DOT__dout_r;
    CData/*1:0*/ zerocore__DOT__u_ctrl__DOT__Redirect1_r;
    CData/*1:0*/ zerocore__DOT__u_ctrl__DOT__Redirect1_dff__DOT__dout_r;
    CData/*1:0*/ zerocore__DOT__u_ctrl__DOT__Redirect2_dff__DOT__dout_r;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ zerocore__DOT__instM;
    IData/*31:0*/ zerocore__DOT__instW;
    IData/*31:0*/ zerocore__DOT__instE;
    VL_IN64(RamReadData,63,0);
    VL_OUT64(RamReadAddr,63,0);
    QData/*63:0*/ zerocore__DOT__pcF;
    QData/*63:0*/ zerocore__DOT__pcM;
    QData/*63:0*/ zerocore__DOT__pcD;
    QData/*63:0*/ zerocore__DOT__pcW;
    QData/*63:0*/ zerocore__DOT__pcE;
    QData/*63:0*/ zerocore__DOT__rs1Data_D2E__DOT__dout_r;
    QData/*63:0*/ zerocore__DOT__rs2Data_D2E__DOT__dout_r;
    QData/*63:0*/ zerocore__DOT__u_ex__DOT__resADD;
    VlUnpacked<QData/*63:0*/, 32> zerocore__DOT__u_regs__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vzerocore__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vzerocore___024root(const char* name);
    ~Vzerocore___024root();
    VL_UNCOPYABLE(Vzerocore___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vzerocore__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
