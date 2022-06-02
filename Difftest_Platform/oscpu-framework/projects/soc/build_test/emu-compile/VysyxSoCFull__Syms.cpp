// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"



// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, VysyxSoCFull* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP____024unit(Verilated::catName(topp->name(), "$unit"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TestHarness__ldut__asic__axi42apb.configure(this, name(), "TestHarness.ldut.asic.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__axi4xbar.configure(this, name(), "TestHarness.ldut.asic.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__atomics.configure(this, name(), "TestHarness.ldut.asic.chipMaster.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__atomics__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__axi42tl.configure(this, name(), "TestHarness.ldut.asic.chipMaster.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__axi4frag.configure(this, name(), "TestHarness.ldut.asic.chipMaster.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__axi4yank.configure(this, name(), "TestHarness.ldut.asic.chipMaster.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__mbypass__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.mbypass.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__mbypass__monitor_1.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.mbypass.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__rx.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.rx", "rx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__sbypass__bar__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.sbypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__sbypass__error.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.sbypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__sbypass__error__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.sbypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__chiplink__tx.configure(this, name(), "TestHarness.ldut.asic.chipMaster.chiplink.tx", "tx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__err.configure(this, name(), "TestHarness.ldut.asic.chipMaster.err", "err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__err__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.err.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__ferr.configure(this, name(), "TestHarness.ldut.asic.chipMaster.ferr", "ferr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__ferr__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.ferr.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__fixer_1__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.fixer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__fixer__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__hints__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.hints.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__tl2axi4.configure(this, name(), "TestHarness.ldut.asic.chipMaster.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__tl2axi4__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__widget_1__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.widget_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__widget_2__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.widget_2.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__widget__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.widget.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__xbar.configure(this, name(), "TestHarness.ldut.asic.chipMaster.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__xbar_1.configure(this, name(), "TestHarness.ldut.asic.chipMaster.xbar_1", "xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__xbar_1__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.xbar_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__chipMaster__xbar__monitor.configure(this, name(), "TestHarness.ldut.asic.chipMaster.xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__asic__lspi__mspi.configure(this, name(), "TestHarness.ldut.asic.lspi.mspi", "mspi", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__atomics.configure(this, name(), "TestHarness.ldut.fpga.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__atomics__monitor.configure(this, name(), "TestHarness.ldut.fpga.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__axi42tl.configure(this, name(), "TestHarness.ldut.fpga.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__axi4deint.configure(this, name(), "TestHarness.ldut.fpga.axi4deint", "axi4deint", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__axi4frag.configure(this, name(), "TestHarness.ldut.fpga.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__axi4yank.configure(this, name(), "TestHarness.ldut.fpga.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__axi4yank_1.configure(this, name(), "TestHarness.ldut.fpga.axi4yank_1", "axi4yank_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__axi4yank_2.configure(this, name(), "TestHarness.ldut.fpga.axi4yank_2", "axi4yank_2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__mbypass__monitor.configure(this, name(), "TestHarness.ldut.fpga.chiplink.mbypass.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__mbypass__monitor_1.configure(this, name(), "TestHarness.ldut.fpga.chiplink.mbypass.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__monitor.configure(this, name(), "TestHarness.ldut.fpga.chiplink.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__rx.configure(this, name(), "TestHarness.ldut.fpga.chiplink.rx", "rx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__sbypass__bar__monitor.configure(this, name(), "TestHarness.ldut.fpga.chiplink.sbypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__sbypass__error.configure(this, name(), "TestHarness.ldut.fpga.chiplink.sbypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__sbypass__error__monitor.configure(this, name(), "TestHarness.ldut.fpga.chiplink.sbypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__chiplink__tx.configure(this, name(), "TestHarness.ldut.fpga.chiplink.tx", "tx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__err.configure(this, name(), "TestHarness.ldut.fpga.err", "err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__err__monitor.configure(this, name(), "TestHarness.ldut.fpga.err.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__ferr.configure(this, name(), "TestHarness.ldut.fpga.ferr", "ferr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__ferr__monitor.configure(this, name(), "TestHarness.ldut.fpga.ferr.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__fixer_1__monitor.configure(this, name(), "TestHarness.ldut.fpga.fixer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__fixer__monitor.configure(this, name(), "TestHarness.ldut.fpga.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__hints__monitor.configure(this, name(), "TestHarness.ldut.fpga.hints.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__tl2axi4.configure(this, name(), "TestHarness.ldut.fpga.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__tl2axi4_1.configure(this, name(), "TestHarness.ldut.fpga.tl2axi4_1", "tl2axi4_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__tl2axi4_1__monitor.configure(this, name(), "TestHarness.ldut.fpga.tl2axi4_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__tl2axi4__monitor.configure(this, name(), "TestHarness.ldut.fpga.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__widget_1__monitor.configure(this, name(), "TestHarness.ldut.fpga.widget_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__widget_2__monitor.configure(this, name(), "TestHarness.ldut.fpga.widget_2.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__widget__monitor.configure(this, name(), "TestHarness.ldut.fpga.widget.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__xbar.configure(this, name(), "TestHarness.ldut.fpga.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__xbar_1.configure(this, name(), "TestHarness.ldut.fpga.xbar_1", "xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__xbar_1__monitor.configure(this, name(), "TestHarness.ldut.fpga.xbar_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__fpga__xbar__monitor.configure(this, name(), "TestHarness.ldut.fpga.xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__mem__axi4frag.configure(this, name(), "TestHarness.ldut.mem.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__mem__axi4xbar.configure(this, name(), "TestHarness.ldut.mem.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__ldut__spiFlash.configure(this, name(), "TestHarness.ldut.spiFlash", "spiFlash", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
