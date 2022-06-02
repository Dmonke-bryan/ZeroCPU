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
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    CData/*3:0*/ core__DOT__u_contrGen__DOT__aluCtl__out__out0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    SData/*11:0*/ core__DOT__u_pcgen__DOT__pc;
    IData/*31:0*/ core__DOT__inst;
    IData/*31:0*/ core__DOT__u_regs__DOT__i;
    QData/*63:0*/ core__DOT__res;
    VlUnpacked<IData/*31:0*/, 4096> core__DOT__iram_inst__DOT__iram;
    VlUnpacked<QData/*63:0*/, 32> core__DOT__u_regs__DOT__regsheap;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
