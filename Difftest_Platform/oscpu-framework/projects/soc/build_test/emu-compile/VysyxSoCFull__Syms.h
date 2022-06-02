// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYXSOCFULL__SYMS_H_
#define VERILATED_VYSYXSOCFULL__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VysyxSoCFull__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;

    // SUBCELL STATE
    VysyxSoCFull*                  TOPp;
    VysyxSoCFull___024unit         TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_TestHarness__ldut__asic__axi42apb;
    VerilatedScope __Vscope_TestHarness__ldut__asic__axi4xbar;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__atomics;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__atomics__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__axi42tl;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__axi4frag;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__axi4yank;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__mbypass__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__mbypass__monitor_1;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__rx;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__sbypass__bar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__sbypass__error;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__sbypass__error__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__tx;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__err;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__err__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__ferr;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__ferr__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__fixer_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__hints__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__tl2axi4;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__tl2axi4__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__widget_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__widget_2__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__widget__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__xbar;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__xbar_1;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__xbar_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__chipMaster__xbar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__asic__lspi__mspi;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__atomics;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__atomics__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__axi42tl;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__axi4deint;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__axi4frag;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__axi4yank;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__axi4yank_1;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__axi4yank_2;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__mbypass__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__mbypass__monitor_1;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__rx;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__sbypass__bar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__sbypass__error;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__sbypass__error__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__chiplink__tx;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__err;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__err__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__ferr;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__ferr__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__fixer_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__fixer__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__hints__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__tl2axi4;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__tl2axi4_1;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__tl2axi4_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__tl2axi4__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__widget_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__widget_2__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__widget__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__xbar;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__xbar_1;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__xbar_1__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__fpga__xbar__monitor;
    VerilatedScope __Vscope_TestHarness__ldut__mem__axi4frag;
    VerilatedScope __Vscope_TestHarness__ldut__mem__axi4xbar;
    VerilatedScope __Vscope_TestHarness__ldut__spiFlash;

    // CREATORS
    VysyxSoCFull__Syms(VerilatedContext* contextp, VysyxSoCFull* topp, const char* namep);
    ~VysyxSoCFull__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
