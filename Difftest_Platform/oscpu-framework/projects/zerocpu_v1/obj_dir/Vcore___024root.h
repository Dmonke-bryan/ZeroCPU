// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"

class Vcore__Syms;
VL_MODULE(Vcore___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(iram__02Eclk,0,0);
    VL_IN8(core__02Eclk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(rd_en,0,0);
    VL_IN8(wr_en,0,0);
    VL_OUT8(ReadEnable,0,0);
    VL_OUT8(WriteEnable,0,0);
    CData/*3:0*/ core__DOT__u_contrGen__DOT__aluCtl__out__out0;
    CData/*0:0*/ __Vclklast__TOP__core__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    CData/*0:0*/ __Vclklast__TOP__iram__02Eclk;
    VL_IN16(rd_addr,11,0);
    VL_IN16(wr_addr,11,0);
    SData/*11:0*/ core__DOT__u_pcgen__DOT__pc;
    VL_OUT(rd_data,31,0);
    VL_IN(wr_data,31,0);
    IData/*31:0*/ core__DOT__u_regs__DOT__i;
    VL_IN64(ReadData,63,0);
    VL_OUT64(ReadAddr,63,0);
    VL_OUT64(WriteAddr,63,0);
    VL_OUT64(WriteMask,63,0);
    VL_OUT64(WriteData,63,0);
    QData/*63:0*/ core__DOT__res;
    VlUnpacked<IData/*31:0*/, 4096> iram__DOT__iram;
    VlUnpacked<QData/*63:0*/, 32> core__DOT__u_regs__DOT__regsheap;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcore__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcore___024root(const char* name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vcore__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
