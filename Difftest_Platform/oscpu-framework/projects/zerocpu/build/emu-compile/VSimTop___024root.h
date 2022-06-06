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
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_perfInfo_clean,0,0);
    VL_IN8(io_perfInfo_dump,0,0);
    VL_OUT8(io_uart_out_valid,0,0);
    VL_OUT8(io_uart_out_ch,7,0);
    VL_OUT8(io_uart_in_valid,0,0);
    VL_IN8(io_uart_in_ch,7,0);
    CData/*0:0*/ SimTop__DOT__WriteEnable;
    CData/*3:0*/ SimTop__DOT__u_zerocore__DOT__u_id__DOT__aluCtl__out__out0;
    CData/*0:0*/ SimTop__DOT__U_inst_commit__DOT__wen;
    CData/*7:0*/ SimTop__DOT__U_inst_commit__DOT__wdest;
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    QData/*63:0*/ SimTop__DOT__ReadData;
    QData/*63:0*/ SimTop__DOT__WriteAddr;
    QData/*63:0*/ SimTop__DOT__WriteData;
    QData/*63:0*/ SimTop__DOT__WriteMask;
    QData/*63:0*/ SimTop__DOT__u_zerocore__DOT__pc;
    QData/*63:0*/ SimTop__DOT__u_zerocore__DOT__ra;
    QData/*63:0*/ SimTop__DOT__u_zerocore__DOT__res;
    QData/*63:0*/ SimTop__DOT__U_inst_commit__DOT__wdata;
    QData/*63:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
    QData/*63:0*/ __Vchglast__TOP__SimTop__DOT__u_zerocore__DOT__ra;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_zerocore__DOT__u_regs__DOT__regsheap;

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
