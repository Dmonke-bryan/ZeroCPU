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
    VL_OUT8(RamWriteEnable,0,0);
    CData/*3:0*/ zerocore__DOT__u_id__DOT__aluCtl__out__out0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ zerocore__DOT__u_regs__DOT__i;
    VL_IN64(RamReadData,63,0);
    VL_OUT64(RamReadAddr,63,0);
    VL_OUT64(RamWriteAddr,63,0);
    VL_OUT64(RamWriteMask,63,0);
    VL_OUT64(RamWriteData,63,0);
    QData/*63:0*/ zerocore__DOT__pc;
    QData/*63:0*/ zerocore__DOT__ra;
    QData/*63:0*/ zerocore__DOT__res;
    QData/*63:0*/ __Vchglast__TOP__zerocore__DOT__ra;
    VlUnpacked<QData/*63:0*/, 32> zerocore__DOT__u_regs__DOT__regsheap;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
