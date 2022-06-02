// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__32(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__32\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<8>/*255:0*/ __Vtemp3391;
    VlWide<8>/*255:0*/ __Vtemp3392;
    VlWide<8>/*255:0*/ __Vtemp3395;
    VlWide<8>/*255:0*/ __Vtemp3396;
    VlWide<8>/*255:0*/ __Vtemp3399;
    VlWide<8>/*255:0*/ __Vtemp3400;
    VlWide<8>/*255:0*/ __Vtemp3403;
    VlWide<8>/*255:0*/ __Vtemp3404;
    VlWide<8>/*255:0*/ __Vtemp3407;
    VlWide<8>/*255:0*/ __Vtemp3408;
    VlWide<8>/*255:0*/ __Vtemp3411;
    VlWide<8>/*255:0*/ __Vtemp3412;
    VlWide<8>/*255:0*/ __Vtemp3415;
    VlWide<8>/*255:0*/ __Vtemp3416;
    VlWide<8>/*255:0*/ __Vtemp3419;
    VlWide<8>/*255:0*/ __Vtemp3420;
    VlWide<8>/*255:0*/ __Vtemp3421;
    VlWide<8>/*255:0*/ __Vtemp3424;
    VlWide<8>/*255:0*/ __Vtemp3425;
    VlWide<8>/*255:0*/ __Vtemp3426;
    VlWide<8>/*255:0*/ __Vtemp3429;
    VlWide<8>/*255:0*/ __Vtemp3430;
    VlWide<8>/*255:0*/ __Vtemp3431;
    VlWide<8>/*255:0*/ __Vtemp3434;
    VlWide<8>/*255:0*/ __Vtemp3435;
    VlWide<8>/*255:0*/ __Vtemp3436;
    VlWide<8>/*255:0*/ __Vtemp3439;
    VlWide<8>/*255:0*/ __Vtemp3440;
    // Body
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:12712: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 12712, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5040: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5040, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5064: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5064, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5088: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5088, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5112: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5112, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5136: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5136, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5160: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5160, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5184: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5184, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5208: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5208, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5232: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5232, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5256: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5256, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5280: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5280, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5304: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5304, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5328: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5328, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5352: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5352, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5376: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5376, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5400: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5400, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5424: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5424, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5448: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5448, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5472: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5472, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5496: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5496, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5520: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5520, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5544: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5544, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5568: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5568, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5592: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5592, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5616: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5616, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5640: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5640, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5664: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5664, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5688: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5688, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5712: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5712, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5736: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5736, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5760: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5760, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5784: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5784, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5808: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5808, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5832: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5832, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5856: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5856, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5880: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5880, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5904: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5904, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5928: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5928, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5952: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5952, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:5976: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 5976, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6000: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6000, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6024: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6024, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6048: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6048, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6072: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6072, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6096: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6096, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6120: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6120, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6144: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6144, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6168: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6168, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6192: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6192, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6216: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6216, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6240: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6240, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6264: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6264, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6288: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6288, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6312: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6312, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6336: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6336, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6360: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6360, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6384: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6384, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6408: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6408, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6432: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6432, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6456: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6456, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6480: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6480, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6504: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6504, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6528: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6528, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6552: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6552, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_corrupt)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6576: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6576, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6600: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6600, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6624: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6624, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6648: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6648, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6672: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6672, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6696: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6696, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6720: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6720, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6744: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6744, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6768: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6768, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6792: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6792, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6816: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6816, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6840: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6840, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6864: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6864, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6888: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6888, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6912: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6912, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6936: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6936, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6960: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6960, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:6982: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 6982, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7006: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7006, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7030: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7030, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7054: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7054, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:100:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7078: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7078, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65125: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65125, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65149: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65149, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65173: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65173, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65197: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65197, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65221: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65221, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65245: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65245, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65269: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65269, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65293: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65293, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65317: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65317, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65341: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65341, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65365: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65365, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65389: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65389, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65413: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65413, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65437: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65437, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65461: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65461, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65485: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65485, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65509: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65509, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65533: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65533, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65557: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65557, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65581: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65581, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65605: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65605, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65629: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65629, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65653: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65653, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65677: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65677, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65701: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65701, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65725: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65725, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65749: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65749, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65773: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65773, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65797: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65797, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65821: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65821, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65845: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65845, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65869: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65869, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65893: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65893, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65917: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65917, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65941: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65941, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65965: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65965, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:65989: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 65989, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66013: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66013, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66037: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66037, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66061: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66061, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66085: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66085, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66109: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66109, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66133: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66133, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66157: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66157, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66181: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66181, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66205: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66205, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66229: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66229, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66253: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66253, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66277: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66277, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66301: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66301, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66325: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66325, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66349: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66349, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66373: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66373, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66397: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66397, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66421: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66421, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66445: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66445, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66469: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66469, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66493: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66493, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66517: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66517, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66541: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66541, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66565: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66565, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66589: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66589, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66613: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66613, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66637: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66637, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66661: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66661, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66685: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66685, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66709: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66709, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66733: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66733, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66757: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66757, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66781: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66781, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66805: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66805, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66829: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66829, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66853: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66853, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66877: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66877, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66901: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66901, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66925: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66925, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66949: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66949, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66973: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66973, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:66997: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 66997, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67021: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67021, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67045: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67045, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67069: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67069, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67093: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67093, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67117: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67117, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67141: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67141, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67165: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67165, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67189: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67189, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67213: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67213, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0ULL == (0x1fffff000ULL 
                                         & (QData)((IData)(
                                                           (0x1000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67237: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67237, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67261: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67261, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67285: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67285, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67309: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67309, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67333: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67333, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67357: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67357, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67381: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67381, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67405: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67405, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67429: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67429, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67453: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67453, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67477: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67477, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67501: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67501, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67525: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67525, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67549: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67549, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67573: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67573, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67597: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67597, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67621: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67621, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67645: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67645, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67669: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67669, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67693: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67693, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67717: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67717, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67741: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67741, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67765: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67765, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67789: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67789, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67813: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67813, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67837: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67837, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                      >> 1U)) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                      >> 1U)) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67861: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67861, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67885: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67885, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67909: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67909, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67933: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67933, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67957: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67957, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:67981: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 67981, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68005: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68005, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68029: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68029, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                     >> (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                     >> (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68053: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68053, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68077: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68077, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68101: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68101, "");
    }
    __Vtemp3391[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3391[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3391[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3391[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3391[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3391[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3391[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3391[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3392, __Vtemp3391);
    __Vtemp3395[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3395[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3395[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3395[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3395[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3395[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3395[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3395[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3396, __Vtemp3395);
    __Vtemp3399[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3399[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3399[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3399[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3399[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3399[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3399[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3399[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3400, __Vtemp3399);
    __Vtemp3403[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3403[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3403[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3403[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3403[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3403[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3403[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3403[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3404, __Vtemp3403);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp3392[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp3396[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp3400[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp3404[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp3407[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3407[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3407[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3407[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3407[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3407[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3407[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3407[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3408, __Vtemp3407);
    __Vtemp3411[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3411[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3411[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3411[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3411[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3411[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3411[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3411[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3412, __Vtemp3411);
    __Vtemp3415[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3415[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3415[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3415[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3415[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3415[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3415[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3415[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3416, __Vtemp3415);
    __Vtemp3419[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3419[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3419[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3419[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3419[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3419[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3419[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3419[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3420, __Vtemp3419);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp3408[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp3412[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp3416[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp3420[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68125: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68125, "");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp3421, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes, 
                  (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    __Vtemp3424[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & __Vtemp3421[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & __Vtemp3421[0U]) 
                                             >> 1U)));
    __Vtemp3424[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & __Vtemp3421[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & __Vtemp3421[1U]) 
                                             >> 1U)));
    __Vtemp3424[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & __Vtemp3421[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & __Vtemp3421[2U]) 
                                             >> 1U)));
    __Vtemp3424[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & __Vtemp3421[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & __Vtemp3421[3U]) 
                                             >> 1U)));
    __Vtemp3424[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & __Vtemp3421[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & __Vtemp3421[4U]) 
                                             >> 1U)));
    __Vtemp3424[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & __Vtemp3421[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & __Vtemp3421[5U]) 
                                             >> 1U)));
    __Vtemp3424[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & __Vtemp3421[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & __Vtemp3421[6U]) 
                                             >> 1U)));
    __Vtemp3424[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & __Vtemp3421[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3425, __Vtemp3424);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp3425[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp3426, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes, 
                  (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    __Vtemp3429[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & __Vtemp3426[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & __Vtemp3426[0U]) 
                                             >> 1U)));
    __Vtemp3429[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & __Vtemp3426[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & __Vtemp3426[1U]) 
                                             >> 1U)));
    __Vtemp3429[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & __Vtemp3426[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & __Vtemp3426[2U]) 
                                             >> 1U)));
    __Vtemp3429[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & __Vtemp3426[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & __Vtemp3426[3U]) 
                                             >> 1U)));
    __Vtemp3429[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & __Vtemp3426[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & __Vtemp3426[4U]) 
                                             >> 1U)));
    __Vtemp3429[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & __Vtemp3426[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & __Vtemp3426[5U]) 
                                             >> 1U)));
    __Vtemp3429[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & __Vtemp3426[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & __Vtemp3426[6U]) 
                                             >> 1U)));
    __Vtemp3429[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & __Vtemp3426[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3430, __Vtemp3429);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp3430[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68149: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68149, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                          == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                          == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68171: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68171, "");
    }
    if (VL_UNLIKELY((1U & (~ (((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
                                != ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? (1ULL << (0x3fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                    >> 1U)))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready 
                                != ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))) 
                                     & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                     ? (1ULL << (0x3fU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                    >> 1U)))
                                     : 0ULL)) | (~ (IData)(
                                                           (0U 
                                                            != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_set_wo_ready)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68195: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68195, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68219: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68219, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                     & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                     & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68243: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68243, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                     >> (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                     >> (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68267: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68267, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68291: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68291, "");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp3431, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, 
                  (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    __Vtemp3434[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & __Vtemp3431[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & __Vtemp3431[0U]) 
                                             >> 1U)));
    __Vtemp3434[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & __Vtemp3431[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & __Vtemp3431[1U]) 
                                             >> 1U)));
    __Vtemp3434[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & __Vtemp3431[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & __Vtemp3431[2U]) 
                                             >> 1U)));
    __Vtemp3434[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & __Vtemp3431[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & __Vtemp3431[3U]) 
                                             >> 1U)));
    __Vtemp3434[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & __Vtemp3431[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & __Vtemp3431[4U]) 
                                             >> 1U)));
    __Vtemp3434[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & __Vtemp3431[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & __Vtemp3431[5U]) 
                                             >> 1U)));
    __Vtemp3434[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & __Vtemp3431[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & __Vtemp3431[6U]) 
                                             >> 1U)));
    __Vtemp3434[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & __Vtemp3431[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3435, __Vtemp3434);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp3435[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(256,256,9, __Vtemp3436, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, 
                  (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                            << 1U)));
    __Vtemp3439[0U] = (__Vconst345[0U] & (((__Vconst346[1U] 
                                            & __Vtemp3436[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[0U] 
                                              & __Vtemp3436[0U]) 
                                             >> 1U)));
    __Vtemp3439[1U] = (__Vconst345[1U] & (((__Vconst346[2U] 
                                            & __Vtemp3436[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[1U] 
                                              & __Vtemp3436[1U]) 
                                             >> 1U)));
    __Vtemp3439[2U] = (__Vconst345[2U] & (((__Vconst346[3U] 
                                            & __Vtemp3436[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[2U] 
                                              & __Vtemp3436[2U]) 
                                             >> 1U)));
    __Vtemp3439[3U] = (__Vconst345[3U] & (((__Vconst346[4U] 
                                            & __Vtemp3436[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[3U] 
                                              & __Vtemp3436[3U]) 
                                             >> 1U)));
    __Vtemp3439[4U] = (__Vconst345[4U] & (((__Vconst346[5U] 
                                            & __Vtemp3436[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[4U] 
                                              & __Vtemp3436[4U]) 
                                             >> 1U)));
    __Vtemp3439[5U] = (__Vconst345[5U] & (((__Vconst346[6U] 
                                            & __Vtemp3436[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[5U] 
                                              & __Vtemp3436[5U]) 
                                             >> 1U)));
    __Vtemp3439[6U] = (__Vconst345[6U] & (((__Vconst346[7U] 
                                            & __Vtemp3436[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst346[6U] 
                                              & __Vtemp3436[6U]) 
                                             >> 1U)));
    __Vtemp3439[7U] = (__Vconst345[7U] & ((__Vconst346[7U] 
                                           & __Vtemp3436[7U]) 
                                          >> 1U));
    VL_EXTEND_WW(256,255, __Vtemp3440, __Vtemp3439);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp3440[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68315: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68315, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                          == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                          == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                       >> 1U)))) & 
                      (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68337: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68337, "");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                              ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL)) & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                                ? (1ULL 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << 
                                                   (0x3fU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                       >> 1U)))
                                                   : 0ULL)) 
                                             | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((0U != ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                              ? (1ULL << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL)) & (~ ((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2469))
                                                ? (1ULL 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                                : 0ULL) 
                                              != ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  (1ULL 
                                                   << 
                                                   (0x3fU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_source) 
                                                       >> 1U)))
                                                   : 0ULL)) 
                                             | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68361: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68361, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68385: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68385, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2540)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2540)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68409: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68409, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:151:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:68433: Assertion failed in %NTestHarness.ldut.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 68433, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69592: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69592, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69616: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69616, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69640: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69640, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69664: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69664, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69688: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69688, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69712: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69712, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69736: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69736, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69760: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69760, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69784: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69784, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69808: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69808, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69832: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69832, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69856: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69856, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69880: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69880, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69904: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69904, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69928: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69928, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69952: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69952, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:69976: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 69976, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70000: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70000, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70024: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70024, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70048: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70048, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70072: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70072, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70096: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70096, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70120: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70120, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70144: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70144, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70168: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70168, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70192: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70192, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70216: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70216, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70240: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70240, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70264: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70264, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70288: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70288, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70312: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70312, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70336: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70336, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70360: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70360, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70384: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70384, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70408: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70408, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70432: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70432, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70456: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70456, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70480: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70480, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70504: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70504, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70528: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70528, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70552: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70552, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70576: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70576, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70600: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70600, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70624: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70624, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70648: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70648, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70672: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70672, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70696: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70696, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70720: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70720, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70744: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70744, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70768: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70768, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70792: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70792, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70816: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70816, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70840: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70840, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70864: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70864, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70888: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70888, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70912: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70912, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70936: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70936, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70960: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70960, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:70984: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 70984, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71008: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71008, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71032: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71032, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71056: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71056, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71080: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71080, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71104: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71104, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71128: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71128, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71152: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71152, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71176: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71176, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71200: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71200, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71224: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71224, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71248: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71248, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71272: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71272, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71296: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71296, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71320: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71320, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71344: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71344, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71368: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71368, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71392: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71392, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((0ULL == (0x180000000ULL 
                                      & (QData)((IData)(
                                                        (0x80000000U 
                                                         ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71416: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71416, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71440: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71440, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71464: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71464, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71488: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71488, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:151:118)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:71512: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 71512, "");
    }
}
