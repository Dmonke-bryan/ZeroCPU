// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__30(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__30\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<4>/*127:0*/ __Vtemp3131;
    VlWide<4>/*127:0*/ __Vtemp3132;
    VlWide<4>/*127:0*/ __Vtemp3133;
    VlWide<4>/*127:0*/ __Vtemp3134;
    VlWide<16>/*511:0*/ __Vtemp3137;
    VlWide<16>/*511:0*/ __Vtemp3138;
    VlWide<16>/*511:0*/ __Vtemp3141;
    VlWide<16>/*511:0*/ __Vtemp3142;
    VlWide<16>/*511:0*/ __Vtemp3145;
    VlWide<16>/*511:0*/ __Vtemp3146;
    VlWide<16>/*511:0*/ __Vtemp3149;
    VlWide<16>/*511:0*/ __Vtemp3150;
    VlWide<16>/*511:0*/ __Vtemp3153;
    VlWide<16>/*511:0*/ __Vtemp3154;
    VlWide<16>/*511:0*/ __Vtemp3157;
    VlWide<16>/*511:0*/ __Vtemp3158;
    VlWide<16>/*511:0*/ __Vtemp3161;
    VlWide<16>/*511:0*/ __Vtemp3162;
    VlWide<16>/*511:0*/ __Vtemp3165;
    VlWide<16>/*511:0*/ __Vtemp3166;
    VlWide<32>/*1023:0*/ __Vtemp3167;
    VlWide<32>/*1023:0*/ __Vtemp3170;
    VlWide<32>/*1023:0*/ __Vtemp3171;
    VlWide<32>/*1023:0*/ __Vtemp3172;
    VlWide<32>/*1023:0*/ __Vtemp3175;
    VlWide<32>/*1023:0*/ __Vtemp3176;
    VlWide<4>/*127:0*/ __Vtemp3177;
    VlWide<4>/*127:0*/ __Vtemp3178;
    VlWide<4>/*127:0*/ __Vtemp3182;
    VlWide<4>/*127:0*/ __Vtemp3183;
    VlWide<4>/*127:0*/ __Vtemp3187;
    VlWide<4>/*127:0*/ __Vtemp3188;
    VlWide<4>/*127:0*/ __Vtemp3189;
    VlWide<4>/*127:0*/ __Vtemp3190;
    VlWide<32>/*1023:0*/ __Vtemp3191;
    VlWide<32>/*1023:0*/ __Vtemp3194;
    VlWide<32>/*1023:0*/ __Vtemp3195;
    VlWide<32>/*1023:0*/ __Vtemp3196;
    VlWide<32>/*1023:0*/ __Vtemp3199;
    VlWide<32>/*1023:0*/ __Vtemp3200;
    VlWide<4>/*127:0*/ __Vtemp3201;
    VlWide<4>/*127:0*/ __Vtemp3202;
    VlWide<4>/*127:0*/ __Vtemp3206;
    VlWide<4>/*127:0*/ __Vtemp3207;
    VlWide<4>/*127:0*/ __Vtemp3211;
    VlWide<4>/*127:0*/ __Vtemp3212;
    VlWide<4>/*127:0*/ __Vtemp3216;
    VlWide<4>/*127:0*/ __Vtemp3217;
    VlWide<4>/*127:0*/ __Vtemp3221;
    VlWide<4>/*127:0*/ __Vtemp3222;
    VlWide<4>/*127:0*/ __Vtemp3226;
    VlWide<4>/*127:0*/ __Vtemp3227;
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:117748: Assertion failed in %NTestHarness.ldut.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 117748, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119585: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119585, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119609: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119609, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119633: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119633, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119657: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119657, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119681: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119681, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119705: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119705, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119729: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119729, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119753: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119753, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119777: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119777, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119801: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119801, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119825: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119825, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119849: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119849, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119873: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119873, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119897: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119897, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119921: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119921, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119945: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119945, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119969: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119969, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:119993: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 119993, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120017: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120017, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120041: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120041, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120065: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120065, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120089: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120089, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120113: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120113, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120137: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120137, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120161: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120161, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120185: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120185, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120209: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120209, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120233: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120233, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120257: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120257, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120281: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120281, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120305: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120305, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120329: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120329, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120353: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120353, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120377: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120377, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120401: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120401, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120425: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120425, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120449: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120449, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120473: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120473, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120497: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120497, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120521: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120521, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120545: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120545, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120569: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120569, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120593: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120593, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120617: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120617, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120641: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120641, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120665: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120665, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120689: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120689, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120713: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120713, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120737: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120737, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120761: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120761, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120785: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120785, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120809: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120809, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120833: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120833, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120857: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120857, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120881: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120881, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120905: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120905, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120929: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120929, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120953: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120953, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:120977: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 120977, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121001: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121001, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121025: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121025, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121049: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121049, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121073: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121073, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121097: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121097, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121121: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121121, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121145: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121145, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121169: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121169, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121193: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121193, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121217: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121217, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121241: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121241, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121265: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121265, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121289: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121289, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121313: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121313, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121337: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121337, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121361: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121361, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121385: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121385, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121409: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121409, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121433: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121433, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121457: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121457, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121481: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121481, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121505: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121505, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121529: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121529, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121553: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121553, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121577: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121577, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121601: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121601, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121625: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121625, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121649: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121649, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   >> 3U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121673: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121673, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121697: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121697, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121721: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121721, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121745: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121745, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121769: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121769, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121793: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121793, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121817: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121817, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121841: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121841, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121865: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121865, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121889: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121889, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121913: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121913, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121937: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121937, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121961: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121961, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:121985: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 121985, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0ULL == (0x180000000ULL 
                                       & (QData)((IData)(
                                                         (0x80000000U 
                                                          ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                             | (0ULL == (0x1c0000000ULL 
                                         & (QData)((IData)(
                                                           (0x40000000U 
                                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                            | (0ULL == (0x1fffff000ULL 
                                        & (QData)((IData)(
                                                          (0x1000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122009: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122009, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                  >> 3U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                 >> 3U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                >> 3U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                               >> 3U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                              >> 3U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                             >> 3U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                            >> 3U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122033: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122033, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122057: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122057, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122081: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122081, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122105: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122105, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122129: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122129, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122153: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122153, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122177: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122177, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122201: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122201, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122225: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122225, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122249: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122249, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122273: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122273, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122297: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122297, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122321: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122321, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122345: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122345, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122369: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122369, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122393: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122393, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122417: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122417, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122441: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122441, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address_2) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address_2) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122465: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122465, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3131, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp3131[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3132, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp3132[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122489: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122489, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3133, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp3133[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3134, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp3134[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122513: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122513, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122537: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122537, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122561: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122561, "");
    }
    __Vtemp3137[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3137[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3137[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3137[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3137[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3137[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3137[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3137[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3137[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3137[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3137[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3137[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3137[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3137[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3137[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3137[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3138, __Vtemp3137);
    __Vtemp3141[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3141[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3141[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3141[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3141[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3141[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3141[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3141[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3141[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3141[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3141[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3141[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3141[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3141[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3141[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3141[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3142, __Vtemp3141);
    __Vtemp3145[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3145[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3145[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3145[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3145[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3145[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3145[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3145[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3145[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3145[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3145[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3145[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3145[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3145[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3145[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3145[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3146, __Vtemp3145);
    __Vtemp3149[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3149[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3149[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3149[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3149[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3149[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3149[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3149[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3149[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3149[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3149[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3149[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3149[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3149[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3149[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3149[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3150, __Vtemp3149);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp3138[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp3142[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp3146[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp3150[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp3153[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3153[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3153[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3153[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3153[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3153[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3153[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3153[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3153[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3153[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3153[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3153[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3153[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3153[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3153[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3153[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3154, __Vtemp3153);
    __Vtemp3157[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3157[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3157[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3157[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3157[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3157[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3157[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3157[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3157[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3157[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3157[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3157[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3157[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3157[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3157[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3157[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3158, __Vtemp3157);
    __Vtemp3161[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3161[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3161[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3161[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3161[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3161[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3161[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3161[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3161[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3161[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3161[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3161[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3161[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3161[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3161[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3161[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3162, __Vtemp3161);
    __Vtemp3165[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp3165[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp3165[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp3165[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp3165[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp3165[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp3165[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp3165[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp3165[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp3165[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp3165[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp3165[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp3165[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp3165[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp3165[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp3165[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp3166, __Vtemp3165);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp3154[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp3158[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp3162[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp3166[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122585: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122585, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp3167, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    __Vtemp3170[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp3167[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp3167[0U]) 
                                              >> 1U)));
    __Vtemp3170[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp3167[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp3167[1U]) 
                                              >> 1U)));
    __Vtemp3170[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp3167[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp3167[2U]) 
                                              >> 1U)));
    __Vtemp3170[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp3167[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp3167[3U]) 
                                              >> 1U)));
    __Vtemp3170[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp3167[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp3167[4U]) 
                                              >> 1U)));
    __Vtemp3170[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp3167[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp3167[5U]) 
                                              >> 1U)));
    __Vtemp3170[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp3167[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp3167[6U]) 
                                              >> 1U)));
    __Vtemp3170[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp3167[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp3167[7U]) 
                                              >> 1U)));
    __Vtemp3170[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp3167[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp3167[8U]) 
                                              >> 1U)));
    __Vtemp3170[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp3167[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp3167[9U]) 
                                              >> 1U)));
    __Vtemp3170[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp3167[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp3167[0xaU]) 
                                                  >> 1U)));
    __Vtemp3170[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp3167[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp3167[0xbU]) 
                                                  >> 1U)));
    __Vtemp3170[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp3167[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp3167[0xcU]) 
                                                  >> 1U)));
    __Vtemp3170[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp3167[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp3167[0xdU]) 
                                                  >> 1U)));
    __Vtemp3170[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp3167[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp3167[0xeU]) 
                                                  >> 1U)));
    __Vtemp3170[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp3167[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp3167[0xfU]) 
                                                  >> 1U)));
    __Vtemp3170[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp3167[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp3167[0x10U]) 
                                                    >> 1U)));
    __Vtemp3170[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp3167[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp3167[0x11U]) 
                                                    >> 1U)));
    __Vtemp3170[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp3167[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp3167[0x12U]) 
                                                    >> 1U)));
    __Vtemp3170[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp3167[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp3167[0x13U]) 
                                                    >> 1U)));
    __Vtemp3170[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp3167[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp3167[0x14U]) 
                                                    >> 1U)));
    __Vtemp3170[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp3167[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp3167[0x15U]) 
                                                    >> 1U)));
    __Vtemp3170[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp3167[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp3167[0x16U]) 
                                                    >> 1U)));
    __Vtemp3170[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp3167[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp3167[0x17U]) 
                                                    >> 1U)));
    __Vtemp3170[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp3167[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp3167[0x18U]) 
                                                    >> 1U)));
    __Vtemp3170[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp3167[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp3167[0x19U]) 
                                                    >> 1U)));
    __Vtemp3170[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp3167[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp3167[0x1aU]) 
                                                    >> 1U)));
    __Vtemp3170[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp3167[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp3167[0x1bU]) 
                                                    >> 1U)));
    __Vtemp3170[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp3167[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp3167[0x1cU]) 
                                                    >> 1U)));
    __Vtemp3170[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp3167[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp3167[0x1dU]) 
                                                    >> 1U)));
    __Vtemp3170[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp3167[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp3167[0x1eU]) 
                                                    >> 1U)));
    __Vtemp3170[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp3167[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp3171, __Vtemp3170);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp3171[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp3172, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    __Vtemp3175[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp3172[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp3172[0U]) 
                                              >> 1U)));
    __Vtemp3175[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp3172[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp3172[1U]) 
                                              >> 1U)));
    __Vtemp3175[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp3172[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp3172[2U]) 
                                              >> 1U)));
    __Vtemp3175[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp3172[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp3172[3U]) 
                                              >> 1U)));
    __Vtemp3175[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp3172[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp3172[4U]) 
                                              >> 1U)));
    __Vtemp3175[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp3172[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp3172[5U]) 
                                              >> 1U)));
    __Vtemp3175[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp3172[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp3172[6U]) 
                                              >> 1U)));
    __Vtemp3175[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp3172[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp3172[7U]) 
                                              >> 1U)));
    __Vtemp3175[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp3172[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp3172[8U]) 
                                              >> 1U)));
    __Vtemp3175[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp3172[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp3172[9U]) 
                                              >> 1U)));
    __Vtemp3175[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp3172[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp3172[0xaU]) 
                                                  >> 1U)));
    __Vtemp3175[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp3172[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp3172[0xbU]) 
                                                  >> 1U)));
    __Vtemp3175[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp3172[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp3172[0xcU]) 
                                                  >> 1U)));
    __Vtemp3175[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp3172[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp3172[0xdU]) 
                                                  >> 1U)));
    __Vtemp3175[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp3172[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp3172[0xeU]) 
                                                  >> 1U)));
    __Vtemp3175[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp3172[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp3172[0xfU]) 
                                                  >> 1U)));
    __Vtemp3175[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp3172[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp3172[0x10U]) 
                                                    >> 1U)));
    __Vtemp3175[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp3172[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp3172[0x11U]) 
                                                    >> 1U)));
    __Vtemp3175[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp3172[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp3172[0x12U]) 
                                                    >> 1U)));
    __Vtemp3175[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp3172[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp3172[0x13U]) 
                                                    >> 1U)));
    __Vtemp3175[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp3172[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp3172[0x14U]) 
                                                    >> 1U)));
    __Vtemp3175[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp3172[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp3172[0x15U]) 
                                                    >> 1U)));
    __Vtemp3175[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp3172[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp3172[0x16U]) 
                                                    >> 1U)));
    __Vtemp3175[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp3172[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp3172[0x17U]) 
                                                    >> 1U)));
    __Vtemp3175[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp3172[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp3172[0x18U]) 
                                                    >> 1U)));
    __Vtemp3175[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp3172[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp3172[0x19U]) 
                                                    >> 1U)));
    __Vtemp3175[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp3172[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp3172[0x1aU]) 
                                                    >> 1U)));
    __Vtemp3175[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp3172[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp3172[0x1bU]) 
                                                    >> 1U)));
    __Vtemp3175[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp3172[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp3172[0x1cU]) 
                                                    >> 1U)));
    __Vtemp3175[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp3172[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp3172[0x1dU]) 
                                                    >> 1U)));
    __Vtemp3175[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp3172[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp3172[0x1eU]) 
                                                    >> 1U)));
    __Vtemp3175[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp3172[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp3176, __Vtemp3175);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp3176[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122609: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122609, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122631: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122631, "");
    }
    __Vtemp3177[0U] = 1U;
    __Vtemp3177[1U] = 0U;
    __Vtemp3177[2U] = 0U;
    __Vtemp3177[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3178, __Vtemp3177, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp3178[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp3178[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                               ? __Vtemp3178[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp3178[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp3182[0U] = 1U;
    __Vtemp3182[1U] = 0U;
    __Vtemp3182[2U] = 0U;
    __Vtemp3182[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3183, __Vtemp3182, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp3183[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                ? __Vtemp3183[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                               ? __Vtemp3183[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                              ? __Vtemp3183[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122655: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122655, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122679: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122679, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3187, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                     & (~ ((~ __Vtemp3187[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3188, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                     & (~ ((~ __Vtemp3188[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122703: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122703, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3189, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp3189[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp3190, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp3190[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122727: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122727, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122751: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122751, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp3191, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    __Vtemp3194[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp3191[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp3191[0U]) 
                                              >> 1U)));
    __Vtemp3194[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp3191[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp3191[1U]) 
                                              >> 1U)));
    __Vtemp3194[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp3191[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp3191[2U]) 
                                              >> 1U)));
    __Vtemp3194[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp3191[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp3191[3U]) 
                                              >> 1U)));
    __Vtemp3194[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp3191[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp3191[4U]) 
                                              >> 1U)));
    __Vtemp3194[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp3191[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp3191[5U]) 
                                              >> 1U)));
    __Vtemp3194[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp3191[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp3191[6U]) 
                                              >> 1U)));
    __Vtemp3194[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp3191[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp3191[7U]) 
                                              >> 1U)));
    __Vtemp3194[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp3191[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp3191[8U]) 
                                              >> 1U)));
    __Vtemp3194[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp3191[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp3191[9U]) 
                                              >> 1U)));
    __Vtemp3194[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp3191[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp3191[0xaU]) 
                                                  >> 1U)));
    __Vtemp3194[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp3191[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp3191[0xbU]) 
                                                  >> 1U)));
    __Vtemp3194[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp3191[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp3191[0xcU]) 
                                                  >> 1U)));
    __Vtemp3194[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp3191[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp3191[0xdU]) 
                                                  >> 1U)));
    __Vtemp3194[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp3191[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp3191[0xeU]) 
                                                  >> 1U)));
    __Vtemp3194[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp3191[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp3191[0xfU]) 
                                                  >> 1U)));
    __Vtemp3194[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp3191[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp3191[0x10U]) 
                                                    >> 1U)));
    __Vtemp3194[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp3191[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp3191[0x11U]) 
                                                    >> 1U)));
    __Vtemp3194[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp3191[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp3191[0x12U]) 
                                                    >> 1U)));
    __Vtemp3194[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp3191[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp3191[0x13U]) 
                                                    >> 1U)));
    __Vtemp3194[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp3191[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp3191[0x14U]) 
                                                    >> 1U)));
    __Vtemp3194[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp3191[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp3191[0x15U]) 
                                                    >> 1U)));
    __Vtemp3194[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp3191[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp3191[0x16U]) 
                                                    >> 1U)));
    __Vtemp3194[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp3191[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp3191[0x17U]) 
                                                    >> 1U)));
    __Vtemp3194[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp3191[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp3191[0x18U]) 
                                                    >> 1U)));
    __Vtemp3194[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp3191[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp3191[0x19U]) 
                                                    >> 1U)));
    __Vtemp3194[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp3191[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp3191[0x1aU]) 
                                                    >> 1U)));
    __Vtemp3194[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp3191[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp3191[0x1bU]) 
                                                    >> 1U)));
    __Vtemp3194[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp3191[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp3191[0x1cU]) 
                                                    >> 1U)));
    __Vtemp3194[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp3191[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp3191[0x1dU]) 
                                                    >> 1U)));
    __Vtemp3194[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp3191[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp3191[0x1eU]) 
                                                    >> 1U)));
    __Vtemp3194[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp3191[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp3195, __Vtemp3194);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp3195[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp3196, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source) 
                   << 3U));
    __Vtemp3199[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp3196[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp3196[0U]) 
                                              >> 1U)));
    __Vtemp3199[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp3196[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp3196[1U]) 
                                              >> 1U)));
    __Vtemp3199[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp3196[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp3196[2U]) 
                                              >> 1U)));
    __Vtemp3199[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp3196[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp3196[3U]) 
                                              >> 1U)));
    __Vtemp3199[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp3196[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp3196[4U]) 
                                              >> 1U)));
    __Vtemp3199[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp3196[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp3196[5U]) 
                                              >> 1U)));
    __Vtemp3199[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp3196[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp3196[6U]) 
                                              >> 1U)));
    __Vtemp3199[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp3196[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp3196[7U]) 
                                              >> 1U)));
    __Vtemp3199[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp3196[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp3196[8U]) 
                                              >> 1U)));
    __Vtemp3199[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp3196[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp3196[9U]) 
                                              >> 1U)));
    __Vtemp3199[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp3196[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp3196[0xaU]) 
                                                  >> 1U)));
    __Vtemp3199[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp3196[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp3196[0xbU]) 
                                                  >> 1U)));
    __Vtemp3199[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp3196[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp3196[0xcU]) 
                                                  >> 1U)));
    __Vtemp3199[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp3196[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp3196[0xdU]) 
                                                  >> 1U)));
    __Vtemp3199[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp3196[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp3196[0xeU]) 
                                                  >> 1U)));
    __Vtemp3199[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp3196[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp3196[0xfU]) 
                                                  >> 1U)));
    __Vtemp3199[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp3196[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp3196[0x10U]) 
                                                    >> 1U)));
    __Vtemp3199[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp3196[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp3196[0x11U]) 
                                                    >> 1U)));
    __Vtemp3199[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp3196[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp3196[0x12U]) 
                                                    >> 1U)));
    __Vtemp3199[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp3196[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp3196[0x13U]) 
                                                    >> 1U)));
    __Vtemp3199[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp3196[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp3196[0x14U]) 
                                                    >> 1U)));
    __Vtemp3199[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp3196[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp3196[0x15U]) 
                                                    >> 1U)));
    __Vtemp3199[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp3196[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp3196[0x16U]) 
                                                    >> 1U)));
    __Vtemp3199[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp3196[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp3196[0x17U]) 
                                                    >> 1U)));
    __Vtemp3199[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp3196[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp3196[0x18U]) 
                                                    >> 1U)));
    __Vtemp3199[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp3196[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp3196[0x19U]) 
                                                    >> 1U)));
    __Vtemp3199[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp3196[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp3196[0x1aU]) 
                                                    >> 1U)));
    __Vtemp3199[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp3196[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp3196[0x1bU]) 
                                                    >> 1U)));
    __Vtemp3199[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp3196[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp3196[0x1cU]) 
                                                    >> 1U)));
    __Vtemp3199[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp3196[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp3196[0x1dU]) 
                                                    >> 1U)));
    __Vtemp3199[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp3196[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp3196[0x1eU]) 
                                                    >> 1U)));
    __Vtemp3199[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp3196[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp3200, __Vtemp3199);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607)) 
                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size) 
                            == (0xffU & __Vtemp3200[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122775: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122775, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122797: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122797, "");
    }
    __Vtemp3201[0U] = 1U;
    __Vtemp3201[1U] = 0U;
    __Vtemp3201[2U] = 0U;
    __Vtemp3201[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3202, __Vtemp3201, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp3206[0U] = 1U;
    __Vtemp3206[1U] = 0U;
    __Vtemp3206[2U] = 0U;
    __Vtemp3206[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3207, __Vtemp3206, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp3211[0U] = 1U;
    __Vtemp3211[1U] = 0U;
    __Vtemp3211[2U] = 0U;
    __Vtemp3211[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3212, __Vtemp3211, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                 ? __Vtemp3202[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp3202[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                              ? __Vtemp3202[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                 ? __Vtemp3202[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                        ? __Vtemp3207[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp3212[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                          ? __Vtemp3207[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp3212[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                         ? __Vtemp3207[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp3212[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                        ? __Vtemp3207[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp3212[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp3216[0U] = 1U;
    __Vtemp3216[1U] = 0U;
    __Vtemp3216[2U] = 0U;
    __Vtemp3216[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3217, __Vtemp3216, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp3221[0U] = 1U;
    __Vtemp3221[1U] = 0U;
    __Vtemp3221[2U] = 0U;
    __Vtemp3221[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3222, __Vtemp3221, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp3226[0U] = 1U;
    __Vtemp3226[1U] = 0U;
    __Vtemp3226[2U] = 0U;
    __Vtemp3226[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp3227, __Vtemp3226, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                 ? __Vtemp3217[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                   ? __Vtemp3217[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                              ? __Vtemp3217[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                 ? __Vtemp3217[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                        ? __Vtemp3222[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp3227[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                          ? __Vtemp3222[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp3227[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                         ? __Vtemp3222[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp3227[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2607))
                                        ? __Vtemp3222[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp3227[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122821: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122821, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122845: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122845, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2678)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2678)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122869: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122869, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:122893: Assertion failed in %NTestHarness.ldut.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 122893, "");
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_count;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_source__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36026: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36026, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36050: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36050, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36074: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36074, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36098: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36098, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36122: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36122, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36146: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36146, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & (0ULL == (0x180000000ULL 
                                            & (QData)((IData)(
                                                              (0x80000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36170: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36170, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36194: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36194, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36218: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36218, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36242: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36242, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36266: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36266, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36290: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36290, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36314: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36314, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36338: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36338, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                            & (((0ULL == (0x1fffff000ULL 
                                          & (QData)((IData)(
                                                            (0x1000U 
                                                             ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                | (0ULL == (0x1c0000000ULL 
                                            & (QData)((IData)(
                                                              (0x40000000U 
                                                               ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                               | (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36362: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36362, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36386: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36386, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36410: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36410, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36434: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36434, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36458: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36458, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36482: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36482, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36506: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36506, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36530: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36530, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36554: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36554, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36578: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36578, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36602: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36602, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36626: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36626, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36650: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36650, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36674: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36674, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36698: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36698, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36722: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36722, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & (((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1c0000000ULL 
                                             & (QData)((IData)(
                                                               (0x40000000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36746: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36746, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36770: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36770, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36794: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36794, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36818: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36818, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                               & (((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x1c0000000ULL 
                                               & (QData)((IData)(
                                                                 (0x40000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))) 
                                  | (0ULL == (0x180000000ULL 
                                              & (QData)((IData)(
                                                                (0x80000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36842: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36842, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36866: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36866, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36890: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36890, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36914: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36914, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36938: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36938, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36962: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36962, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:36986: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 36986, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37010: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37010, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37034: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37034, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37058: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37058, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37082: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37082, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37106: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37106, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37130: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37130, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37154: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37154, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37178: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37178, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37202: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37202, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37226: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37226, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37250: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37250, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37274: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37274, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37298: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37298, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37322: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37322, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37346: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37346, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37370: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37370, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37394: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37394, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37418: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37418, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37442: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37442, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37466: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37466, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37490: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37490, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37514: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37514, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37538: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37538, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37562: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37562, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37586: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37586, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37610: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37610, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37634: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37634, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37658: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37658, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37682: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37682, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37706: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37706, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37730: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37730, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37754: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37754, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_sink) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_sink) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37778: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37778, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37802: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37802, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37826: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37826, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37850: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37850, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37874: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37874, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37898: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37898, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37922: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37922, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37946: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37946, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37968: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37968, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:37992: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 37992, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38016: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 38016, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_sizes_1 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_sizes_1 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38040: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 38040, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:101:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__inflight_1)))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:38064: Assertion failed in %NTestHarness.ldut.fpga.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 38064, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21962: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 21962, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:21986: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 21986, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22010: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22010, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22034: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22034, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22058: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22058, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22082: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22082, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22106: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22106, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22130: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22130, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22154: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22154, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22178: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22178, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22202: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22202, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22226: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22226, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22250: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22250, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22274: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22274, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22298: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22298, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22322: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22322, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22346: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22346, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22370: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22370, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22394: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22394, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22418: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22418, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22442: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22442, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22466: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22466, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22490: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22490, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22514: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22514, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22538: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22538, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22562: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22562, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22586: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22586, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22610: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22610, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22634: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22634, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22658: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22658, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22682: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22682, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22706: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22706, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22730: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22730, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22754: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22754, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_88))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22778: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22778, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22802: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22802, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22826: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22826, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22850: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22850, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22874: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22874, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22898: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22898, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22922: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22922, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22946: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22946, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22970: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22970, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:22994: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 22994, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23018: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23018, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23042: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23042, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23066: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23066, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23090: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23090, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23114: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23114, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23138: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23138, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23162: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23162, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23186: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23186, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23210: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23210, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23234: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23234, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23258: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23258, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23282: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23282, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23306: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23306, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23330: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23330, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23354: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23354, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23378: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23378, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23402: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23402, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23426: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23426, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23450: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23450, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23474: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23474, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23498: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23498, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23522: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23522, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23546: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23546, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23570: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23570, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23594: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23594, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23618: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23618, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23642: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23642, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_sink) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23666: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23666, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23690: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23690, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23714: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23714, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23738: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23738, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23762: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23762, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23786: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23786, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23810: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23810, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((0x7fffffffffffffffULL 
                                                & (((0x3fU 
                                                     >= 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                      << 2U))
                                                     ? 
                                                    (0xfULL 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes 
                                                        >> 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source) 
                                                         << 2U)))
                                                     : 0ULL) 
                                                   >> 1U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:23834: Assertion failed in %NTestHarness.ldut.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 23834, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
}
