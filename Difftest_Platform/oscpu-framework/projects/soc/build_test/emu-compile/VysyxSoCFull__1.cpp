// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__24(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__24\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<4>/*127:0*/ __Vtemp2135;
    VlWide<4>/*127:0*/ __Vtemp2136;
    VlWide<4>/*127:0*/ __Vtemp2137;
    VlWide<4>/*127:0*/ __Vtemp2138;
    VlWide<16>/*511:0*/ __Vtemp2141;
    VlWide<16>/*511:0*/ __Vtemp2142;
    VlWide<16>/*511:0*/ __Vtemp2145;
    VlWide<16>/*511:0*/ __Vtemp2146;
    VlWide<16>/*511:0*/ __Vtemp2149;
    VlWide<16>/*511:0*/ __Vtemp2150;
    VlWide<16>/*511:0*/ __Vtemp2153;
    VlWide<16>/*511:0*/ __Vtemp2154;
    VlWide<16>/*511:0*/ __Vtemp2157;
    VlWide<16>/*511:0*/ __Vtemp2158;
    VlWide<16>/*511:0*/ __Vtemp2161;
    VlWide<16>/*511:0*/ __Vtemp2162;
    VlWide<16>/*511:0*/ __Vtemp2165;
    VlWide<16>/*511:0*/ __Vtemp2166;
    VlWide<16>/*511:0*/ __Vtemp2169;
    VlWide<16>/*511:0*/ __Vtemp2170;
    VlWide<16>/*511:0*/ __Vtemp2171;
    VlWide<16>/*511:0*/ __Vtemp2174;
    VlWide<16>/*511:0*/ __Vtemp2175;
    VlWide<16>/*511:0*/ __Vtemp2176;
    VlWide<16>/*511:0*/ __Vtemp2179;
    VlWide<16>/*511:0*/ __Vtemp2180;
    VlWide<4>/*127:0*/ __Vtemp2181;
    VlWide<4>/*127:0*/ __Vtemp2182;
    VlWide<4>/*127:0*/ __Vtemp2186;
    VlWide<4>/*127:0*/ __Vtemp2187;
    VlWide<4>/*127:0*/ __Vtemp2191;
    VlWide<4>/*127:0*/ __Vtemp2192;
    VlWide<4>/*127:0*/ __Vtemp2193;
    VlWide<4>/*127:0*/ __Vtemp2194;
    VlWide<16>/*511:0*/ __Vtemp2195;
    VlWide<16>/*511:0*/ __Vtemp2198;
    VlWide<16>/*511:0*/ __Vtemp2199;
    VlWide<16>/*511:0*/ __Vtemp2200;
    VlWide<16>/*511:0*/ __Vtemp2203;
    VlWide<16>/*511:0*/ __Vtemp2204;
    VlWide<4>/*127:0*/ __Vtemp2205;
    VlWide<4>/*127:0*/ __Vtemp2206;
    VlWide<4>/*127:0*/ __Vtemp2210;
    VlWide<4>/*127:0*/ __Vtemp2211;
    VlWide<4>/*127:0*/ __Vtemp2215;
    VlWide<4>/*127:0*/ __Vtemp2216;
    VlWide<4>/*127:0*/ __Vtemp2220;
    VlWide<4>/*127:0*/ __Vtemp2221;
    VlWide<4>/*127:0*/ __Vtemp2225;
    VlWide<4>/*127:0*/ __Vtemp2226;
    VlWide<4>/*127:0*/ __Vtemp2230;
    VlWide<4>/*127:0*/ __Vtemp2231;
    VlWide<4>/*127:0*/ __Vtemp2235;
    VlWide<4>/*127:0*/ __Vtemp2236;
    VlWide<4>/*127:0*/ __Vtemp2237;
    VlWide<4>/*127:0*/ __Vtemp2238;
    VlWide<16>/*511:0*/ __Vtemp2241;
    VlWide<16>/*511:0*/ __Vtemp2242;
    VlWide<16>/*511:0*/ __Vtemp2245;
    VlWide<16>/*511:0*/ __Vtemp2246;
    VlWide<16>/*511:0*/ __Vtemp2249;
    VlWide<16>/*511:0*/ __Vtemp2250;
    VlWide<16>/*511:0*/ __Vtemp2253;
    VlWide<16>/*511:0*/ __Vtemp2254;
    VlWide<16>/*511:0*/ __Vtemp2257;
    VlWide<16>/*511:0*/ __Vtemp2258;
    VlWide<16>/*511:0*/ __Vtemp2261;
    VlWide<16>/*511:0*/ __Vtemp2262;
    VlWide<16>/*511:0*/ __Vtemp2265;
    VlWide<16>/*511:0*/ __Vtemp2266;
    VlWide<16>/*511:0*/ __Vtemp2269;
    VlWide<16>/*511:0*/ __Vtemp2270;
    VlWide<32>/*1023:0*/ __Vtemp2273;
    VlWide<32>/*1023:0*/ __Vtemp2276;
    VlWide<32>/*1023:0*/ __Vtemp2277;
    VlWide<32>/*1023:0*/ __Vtemp2278;
    VlWide<32>/*1023:0*/ __Vtemp2281;
    VlWide<32>/*1023:0*/ __Vtemp2282;
    VlWide<4>/*127:0*/ __Vtemp2283;
    VlWide<4>/*127:0*/ __Vtemp2284;
    VlWide<4>/*127:0*/ __Vtemp2288;
    VlWide<4>/*127:0*/ __Vtemp2289;
    VlWide<4>/*127:0*/ __Vtemp2293;
    VlWide<4>/*127:0*/ __Vtemp2294;
    VlWide<4>/*127:0*/ __Vtemp2295;
    VlWide<4>/*127:0*/ __Vtemp2296;
    VlWide<32>/*1023:0*/ __Vtemp2297;
    VlWide<32>/*1023:0*/ __Vtemp2300;
    VlWide<32>/*1023:0*/ __Vtemp2301;
    VlWide<32>/*1023:0*/ __Vtemp2302;
    VlWide<32>/*1023:0*/ __Vtemp2305;
    VlWide<32>/*1023:0*/ __Vtemp2306;
    VlWide<4>/*127:0*/ __Vtemp2307;
    VlWide<4>/*127:0*/ __Vtemp2308;
    VlWide<4>/*127:0*/ __Vtemp2312;
    VlWide<4>/*127:0*/ __Vtemp2313;
    VlWide<4>/*127:0*/ __Vtemp2317;
    VlWide<4>/*127:0*/ __Vtemp2318;
    VlWide<4>/*127:0*/ __Vtemp2322;
    VlWide<4>/*127:0*/ __Vtemp2323;
    VlWide<4>/*127:0*/ __Vtemp2327;
    VlWide<4>/*127:0*/ __Vtemp2328;
    VlWide<4>/*127:0*/ __Vtemp2332;
    VlWide<4>/*127:0*/ __Vtemp2333;
    // Body
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77113: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77113, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77137: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77137, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77161: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77161, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77185: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77185, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77209: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77209, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77233: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77233, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77257: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77257, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77281: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77281, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77305: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77305, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77329: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77329, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77353: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77353, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77377: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77377, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77401: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77401, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77425: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77425, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77449: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77449, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77473: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77473, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77497: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77497, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77521: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77521, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77545: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77545, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77569: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77569, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77593: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77593, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__address)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__address)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77617: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77617, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77641: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77641, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77665: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77665, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77689: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77689, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77713: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77713, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77737: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77737, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77761: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77761, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77785: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77785, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77809: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77809, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77833: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77833, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__address_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__address_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77857: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77857, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2135, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2135[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2136, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2136[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77881: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77881, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2137, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2137[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2138, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2138[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77905: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77905, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77929: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77929, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77953: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77953, "");
    }
    __Vtemp2141[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2141[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2141[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2141[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2141[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2141[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2141[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2141[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2141[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2141[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2141[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2141[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2141[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2141[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2141[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2141[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2142, __Vtemp2141);
    __Vtemp2145[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2145[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2145[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2145[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2145[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2145[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2145[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2145[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2145[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2145[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2145[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2145[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2145[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2145[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2145[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2145[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2146, __Vtemp2145);
    __Vtemp2149[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2149[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2149[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2149[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2149[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2149[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2149[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2149[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2149[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2149[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2149[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2149[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2149[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2149[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2149[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2149[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2150, __Vtemp2149);
    __Vtemp2153[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2153[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2153[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2153[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2153[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2153[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2153[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2153[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2153[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2153[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2153[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2153[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2153[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2153[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2153[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2153[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2154, __Vtemp2153);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2142[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2146[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2150[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2154[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2157[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2157[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2157[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2157[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2157[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2157[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2157[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2157[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2157[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2157[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2157[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2157[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2157[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2157[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2157[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2157[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2158, __Vtemp2157);
    __Vtemp2161[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2161[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2161[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2161[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2161[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2161[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2161[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2161[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2161[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2161[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2161[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2161[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2161[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2161[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2161[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2161[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2162, __Vtemp2161);
    __Vtemp2165[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2165[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2165[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2165[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2165[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2165[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2165[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2165[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2165[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2165[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2165[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2165[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2165[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2165[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2165[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2165[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2166, __Vtemp2165);
    __Vtemp2169[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2169[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2169[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2169[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2169[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2169[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2169[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2169[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2169[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2169[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2169[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2169[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2169[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2169[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2169[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2169[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2170, __Vtemp2169);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2158[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2162[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2166[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2170[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:77977: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 77977, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2171, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2174[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2171[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2171[0U]) 
                                             >> 1U)));
    __Vtemp2174[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2171[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2171[1U]) 
                                             >> 1U)));
    __Vtemp2174[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2171[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2171[2U]) 
                                             >> 1U)));
    __Vtemp2174[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2171[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2171[3U]) 
                                             >> 1U)));
    __Vtemp2174[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2171[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2171[4U]) 
                                             >> 1U)));
    __Vtemp2174[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2171[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2171[5U]) 
                                             >> 1U)));
    __Vtemp2174[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2171[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2171[6U]) 
                                             >> 1U)));
    __Vtemp2174[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2171[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2171[7U]) 
                                             >> 1U)));
    __Vtemp2174[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2171[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2171[8U]) 
                                             >> 1U)));
    __Vtemp2174[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2171[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2171[9U]) 
                                             >> 1U)));
    __Vtemp2174[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2171[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2171[0xaU]) 
                                                 >> 1U)));
    __Vtemp2174[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2171[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2171[0xbU]) 
                                                 >> 1U)));
    __Vtemp2174[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2171[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2171[0xcU]) 
                                                 >> 1U)));
    __Vtemp2174[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2171[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2171[0xdU]) 
                                                 >> 1U)));
    __Vtemp2174[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2171[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2171[0xeU]) 
                                                 >> 1U)));
    __Vtemp2174[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2171[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2175, __Vtemp2174);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2175[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2176, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2179[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2176[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2176[0U]) 
                                             >> 1U)));
    __Vtemp2179[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2176[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2176[1U]) 
                                             >> 1U)));
    __Vtemp2179[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2176[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2176[2U]) 
                                             >> 1U)));
    __Vtemp2179[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2176[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2176[3U]) 
                                             >> 1U)));
    __Vtemp2179[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2176[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2176[4U]) 
                                             >> 1U)));
    __Vtemp2179[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2176[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2176[5U]) 
                                             >> 1U)));
    __Vtemp2179[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2176[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2176[6U]) 
                                             >> 1U)));
    __Vtemp2179[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2176[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2176[7U]) 
                                             >> 1U)));
    __Vtemp2179[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2176[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2176[8U]) 
                                             >> 1U)));
    __Vtemp2179[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2176[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2176[9U]) 
                                             >> 1U)));
    __Vtemp2179[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2176[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2176[0xaU]) 
                                                 >> 1U)));
    __Vtemp2179[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2176[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2176[0xbU]) 
                                                 >> 1U)));
    __Vtemp2179[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2176[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2176[0xcU]) 
                                                 >> 1U)));
    __Vtemp2179[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2176[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2176[0xdU]) 
                                                 >> 1U)));
    __Vtemp2179[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2176[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2176[0xeU]) 
                                                 >> 1U)));
    __Vtemp2179[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2176[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2180, __Vtemp2179);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2180[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78001: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78001, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78023: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78023, "");
    }
    __Vtemp2181[0U] = 1U;
    __Vtemp2181[1U] = 0U;
    __Vtemp2181[2U] = 0U;
    __Vtemp2181[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2182, __Vtemp2181, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2182[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp2182[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                               ? __Vtemp2182[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2182[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2186[0U] = 1U;
    __Vtemp2186[1U] = 0U;
    __Vtemp2186[2U] = 0U;
    __Vtemp2186[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2187, __Vtemp2186, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2187[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp2187[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                               ? __Vtemp2187[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2187[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78047: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78047, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78071: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78071, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2191, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                     & (~ ((~ __Vtemp2191[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2192, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                     & (~ ((~ __Vtemp2192[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78095: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78095, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2193, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2193[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2194, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2194[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78119: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78119, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78143: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78143, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2195, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2198[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2195[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2195[0U]) 
                                             >> 1U)));
    __Vtemp2198[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2195[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2195[1U]) 
                                             >> 1U)));
    __Vtemp2198[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2195[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2195[2U]) 
                                             >> 1U)));
    __Vtemp2198[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2195[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2195[3U]) 
                                             >> 1U)));
    __Vtemp2198[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2195[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2195[4U]) 
                                             >> 1U)));
    __Vtemp2198[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2195[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2195[5U]) 
                                             >> 1U)));
    __Vtemp2198[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2195[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2195[6U]) 
                                             >> 1U)));
    __Vtemp2198[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2195[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2195[7U]) 
                                             >> 1U)));
    __Vtemp2198[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2195[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2195[8U]) 
                                             >> 1U)));
    __Vtemp2198[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2195[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2195[9U]) 
                                             >> 1U)));
    __Vtemp2198[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2195[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2195[0xaU]) 
                                                 >> 1U)));
    __Vtemp2198[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2195[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2195[0xbU]) 
                                                 >> 1U)));
    __Vtemp2198[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2195[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2195[0xcU]) 
                                                 >> 1U)));
    __Vtemp2198[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2195[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2195[0xdU]) 
                                                 >> 1U)));
    __Vtemp2198[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2195[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2195[0xeU]) 
                                                 >> 1U)));
    __Vtemp2198[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2195[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2199, __Vtemp2198);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2199[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2200, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2203[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2200[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2200[0U]) 
                                             >> 1U)));
    __Vtemp2203[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2200[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2200[1U]) 
                                             >> 1U)));
    __Vtemp2203[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2200[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2200[2U]) 
                                             >> 1U)));
    __Vtemp2203[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2200[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2200[3U]) 
                                             >> 1U)));
    __Vtemp2203[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2200[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2200[4U]) 
                                             >> 1U)));
    __Vtemp2203[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2200[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2200[5U]) 
                                             >> 1U)));
    __Vtemp2203[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2200[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2200[6U]) 
                                             >> 1U)));
    __Vtemp2203[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2200[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2200[7U]) 
                                             >> 1U)));
    __Vtemp2203[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2200[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2200[8U]) 
                                             >> 1U)));
    __Vtemp2203[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2200[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2200[9U]) 
                                             >> 1U)));
    __Vtemp2203[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2200[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2200[0xaU]) 
                                                 >> 1U)));
    __Vtemp2203[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2200[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2200[0xbU]) 
                                                 >> 1U)));
    __Vtemp2203[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2200[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2200[0xcU]) 
                                                 >> 1U)));
    __Vtemp2203[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2200[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2200[0xdU]) 
                                                 >> 1U)));
    __Vtemp2203[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2200[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2200[0xeU]) 
                                                 >> 1U)));
    __Vtemp2203[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2200[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2204, __Vtemp2203);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2204[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78167: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78167, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78189: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78189, "");
    }
    __Vtemp2205[0U] = 1U;
    __Vtemp2205[1U] = 0U;
    __Vtemp2205[2U] = 0U;
    __Vtemp2205[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2206, __Vtemp2205, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2210[0U] = 1U;
    __Vtemp2210[1U] = 0U;
    __Vtemp2210[2U] = 0U;
    __Vtemp2210[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2211, __Vtemp2210, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2215[0U] = 1U;
    __Vtemp2215[1U] = 0U;
    __Vtemp2215[2U] = 0U;
    __Vtemp2215[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2216, __Vtemp2215, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2206[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp2206[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                              ? __Vtemp2206[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2206[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2211[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2216[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                          ? __Vtemp2211[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2216[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                         ? __Vtemp2211[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2216[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2211[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2216[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2220[0U] = 1U;
    __Vtemp2220[1U] = 0U;
    __Vtemp2220[2U] = 0U;
    __Vtemp2220[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2221, __Vtemp2220, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2225[0U] = 1U;
    __Vtemp2225[1U] = 0U;
    __Vtemp2225[2U] = 0U;
    __Vtemp2225[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2226, __Vtemp2225, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2230[0U] = 1U;
    __Vtemp2230[1U] = 0U;
    __Vtemp2230[2U] = 0U;
    __Vtemp2230[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2231, __Vtemp2230, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2221[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp2221[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                              ? __Vtemp2221[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2221[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2226[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2231[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                          ? __Vtemp2226[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2231[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                         ? __Vtemp2226[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2231[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2226[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2231[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78213: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78213, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78237: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78237, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2406)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2406)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78261: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78261, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_84) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:152:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_84) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:78285: Assertion failed in %NTestHarness.ldut.asic.chipMaster.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 78285, "");
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:86917: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 86917, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:86941: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 86941, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:86965: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 86965, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:86989: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 86989, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87013: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87013, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87037: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87037, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87061: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87061, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87085: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87085, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87109: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87109, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87133: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87133, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87157: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87157, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87181: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87181, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87205: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87205, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87229: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87229, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87253: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87253, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87277: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87277, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87301: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87301, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87325: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87325, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87349: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87349, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87373: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87373, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87397: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87397, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87421: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87421, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87445: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87445, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87469: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87469, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87493: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87493, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87517: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87517, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87541: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87541, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87565: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87565, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87589: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87589, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                & ((0ULL == (0x1fffff000ULL 
                                             & (QData)((IData)(
                                                               (0x1000U 
                                                                ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                                   | (0ULL == (0x180000000ULL 
                                               & (QData)((IData)(
                                                                 (0x80000000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                               | ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                  & (0ULL == (0x1c0000000ULL 
                                              & (QData)((IData)(
                                                                (0x40000000U 
                                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87613: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87613, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87637: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87637, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87661: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87661, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87685: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87685, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87709: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87709, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87733: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87733, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87757: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87757, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87781: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87781, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87805: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87805, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87829: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87829, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87853: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87853, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87877: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87877, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87901: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87901, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87925: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87925, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87949: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87949, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0ULL == (0x1fffff000ULL 
                                           & (QData)((IData)(
                                                             (0x1000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87973: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87973, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:87997: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 87997, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88021: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88021, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88045: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88045, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88069: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88069, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88093: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88093, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88117: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88117, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88141: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88141, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88165: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88165, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88189: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88189, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88213: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88213, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88237: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88237, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88261: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88261, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88285: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88285, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88309: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88309, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88333: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88333, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88357: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88357, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88381: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88381, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88405: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88405, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88429: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88429, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88453: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88453, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88477: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88477, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88501: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88501, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88525: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88525, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88549: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88549, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88573: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88573, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88597: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88597, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                            | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88621: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88621, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88645: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88645, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88669: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88669, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_corrupt)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_corrupt))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_bits_corrupt)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88693: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88693, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88717: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88717, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88741: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88741, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88765: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88765, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88789: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88789, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88813: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88813, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88837: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88837, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88861: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88861, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88885: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88885, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88909: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88909, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88933: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88933, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88957: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88957, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:88981: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 88981, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89005: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89005, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89029: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89029, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89053: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89053, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89077: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89077, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89101: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89101, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89125: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89125, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89149: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89149, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89173: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89173, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89197: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89197, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89221: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89221, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89245: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89245, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89269: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89269, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89293: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89293, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89317: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89317, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89341: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89341, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89365: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89365, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89389: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89389, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89413: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89413, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89437: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89437, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89461: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89461, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89485: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89485, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89509: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89509, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid) 
                     & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89533: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89533, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89557: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89557, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89581: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89581, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89605: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89605, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89629: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89629, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89653: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89653, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89677: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89677, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89701: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89701, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89725: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89725, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89749: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89749, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89773: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89773, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89797: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89797, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89821: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89821, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89845: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89845, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89869: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89869, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__address_2) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__address_2) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89893: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89893, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2235, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2235[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2236, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2236[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89917: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89917, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2237, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2237[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2238, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2238[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89941: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89941, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89965: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89965, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:89989: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 89989, "");
    }
    __Vtemp2241[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2241[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2241[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2241[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2241[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2241[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2241[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2241[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2241[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2241[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2241[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2241[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2241[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2241[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2241[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2241[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2242, __Vtemp2241);
    __Vtemp2245[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2245[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2245[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2245[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2245[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2245[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2245[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2245[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2245[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2245[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2245[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2245[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2245[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2245[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2245[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2245[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2246, __Vtemp2245);
    __Vtemp2249[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2249[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2249[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2249[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2249[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2249[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2249[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2249[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2249[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2249[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2249[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2249[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2249[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2249[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2249[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2249[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2250, __Vtemp2249);
    __Vtemp2253[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2253[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2253[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2253[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2253[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2253[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2253[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2253[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2253[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2253[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2253[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2253[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2253[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2253[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2253[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2253[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2254, __Vtemp2253);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2242[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2246[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2250[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2254[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2257[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2257[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2257[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2257[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2257[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2257[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2257[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2257[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2257[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2257[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2257[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2257[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2257[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2257[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2257[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2257[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2258, __Vtemp2257);
    __Vtemp2261[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2261[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2261[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2261[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2261[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2261[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2261[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2261[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2261[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2261[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2261[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2261[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2261[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2261[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2261[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2261[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2262, __Vtemp2261);
    __Vtemp2265[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2265[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2265[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2265[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2265[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2265[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2265[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2265[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2265[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2265[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2265[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2265[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2265[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2265[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2265[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2265[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2266, __Vtemp2265);
    __Vtemp2269[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2269[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2269[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2269[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2269[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2269[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2269[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2269[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2269[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2269[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2269[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2269[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2269[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2269[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2269[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2269[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2270, __Vtemp2269);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2258[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2262[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2266[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2270[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90013: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90013, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2273, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2276[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2273[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2273[0U]) 
                                              >> 1U)));
    __Vtemp2276[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2273[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2273[1U]) 
                                              >> 1U)));
    __Vtemp2276[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2273[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2273[2U]) 
                                              >> 1U)));
    __Vtemp2276[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2273[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2273[3U]) 
                                              >> 1U)));
    __Vtemp2276[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2273[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2273[4U]) 
                                              >> 1U)));
    __Vtemp2276[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2273[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2273[5U]) 
                                              >> 1U)));
    __Vtemp2276[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2273[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2273[6U]) 
                                              >> 1U)));
    __Vtemp2276[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2273[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2273[7U]) 
                                              >> 1U)));
    __Vtemp2276[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2273[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2273[8U]) 
                                              >> 1U)));
    __Vtemp2276[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2273[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2273[9U]) 
                                              >> 1U)));
    __Vtemp2276[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2273[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2273[0xaU]) 
                                                  >> 1U)));
    __Vtemp2276[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2273[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2273[0xbU]) 
                                                  >> 1U)));
    __Vtemp2276[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2273[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2273[0xcU]) 
                                                  >> 1U)));
    __Vtemp2276[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2273[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2273[0xdU]) 
                                                  >> 1U)));
    __Vtemp2276[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2273[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2273[0xeU]) 
                                                  >> 1U)));
    __Vtemp2276[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2273[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2273[0xfU]) 
                                                  >> 1U)));
    __Vtemp2276[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2273[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2273[0x10U]) 
                                                    >> 1U)));
    __Vtemp2276[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2273[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2273[0x11U]) 
                                                    >> 1U)));
    __Vtemp2276[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2273[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2273[0x12U]) 
                                                    >> 1U)));
    __Vtemp2276[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2273[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2273[0x13U]) 
                                                    >> 1U)));
    __Vtemp2276[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2273[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2273[0x14U]) 
                                                    >> 1U)));
    __Vtemp2276[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2273[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2273[0x15U]) 
                                                    >> 1U)));
    __Vtemp2276[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2273[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2273[0x16U]) 
                                                    >> 1U)));
    __Vtemp2276[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2273[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2273[0x17U]) 
                                                    >> 1U)));
    __Vtemp2276[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2273[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2273[0x18U]) 
                                                    >> 1U)));
    __Vtemp2276[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2273[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2273[0x19U]) 
                                                    >> 1U)));
    __Vtemp2276[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2273[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2273[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2276[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2273[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2273[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2276[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2273[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2273[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2276[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2273[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2273[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2276[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2273[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2273[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2276[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2273[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2277, __Vtemp2276);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp2277[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2278, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2281[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2278[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2278[0U]) 
                                              >> 1U)));
    __Vtemp2281[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2278[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2278[1U]) 
                                              >> 1U)));
    __Vtemp2281[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2278[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2278[2U]) 
                                              >> 1U)));
    __Vtemp2281[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2278[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2278[3U]) 
                                              >> 1U)));
    __Vtemp2281[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2278[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2278[4U]) 
                                              >> 1U)));
    __Vtemp2281[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2278[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2278[5U]) 
                                              >> 1U)));
    __Vtemp2281[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2278[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2278[6U]) 
                                              >> 1U)));
    __Vtemp2281[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2278[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2278[7U]) 
                                              >> 1U)));
    __Vtemp2281[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2278[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2278[8U]) 
                                              >> 1U)));
    __Vtemp2281[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2278[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2278[9U]) 
                                              >> 1U)));
    __Vtemp2281[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2278[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2278[0xaU]) 
                                                  >> 1U)));
    __Vtemp2281[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2278[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2278[0xbU]) 
                                                  >> 1U)));
    __Vtemp2281[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2278[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2278[0xcU]) 
                                                  >> 1U)));
    __Vtemp2281[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2278[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2278[0xdU]) 
                                                  >> 1U)));
    __Vtemp2281[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2278[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2278[0xeU]) 
                                                  >> 1U)));
    __Vtemp2281[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2278[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2278[0xfU]) 
                                                  >> 1U)));
    __Vtemp2281[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2278[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2278[0x10U]) 
                                                    >> 1U)));
    __Vtemp2281[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2278[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2278[0x11U]) 
                                                    >> 1U)));
    __Vtemp2281[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2278[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2278[0x12U]) 
                                                    >> 1U)));
    __Vtemp2281[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2278[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2278[0x13U]) 
                                                    >> 1U)));
    __Vtemp2281[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2278[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2278[0x14U]) 
                                                    >> 1U)));
    __Vtemp2281[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2278[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2278[0x15U]) 
                                                    >> 1U)));
    __Vtemp2281[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2278[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2278[0x16U]) 
                                                    >> 1U)));
    __Vtemp2281[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2278[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2278[0x17U]) 
                                                    >> 1U)));
    __Vtemp2281[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2278[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2278[0x18U]) 
                                                    >> 1U)));
    __Vtemp2281[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2278[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2278[0x19U]) 
                                                    >> 1U)));
    __Vtemp2281[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2278[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2278[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2281[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2278[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2278[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2281[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2278[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2278[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2281[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2278[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2278[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2281[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2278[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2278[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2281[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2278[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2282, __Vtemp2281);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp2282[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90037: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90037, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90059: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90059, "");
    }
    __Vtemp2283[0U] = 1U;
    __Vtemp2283[1U] = 0U;
    __Vtemp2283[2U] = 0U;
    __Vtemp2283[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2284, __Vtemp2283, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2284[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp2284[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp2284[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2284[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2288[0U] = 1U;
    __Vtemp2288[1U] = 0U;
    __Vtemp2288[2U] = 0U;
    __Vtemp2288[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2289, __Vtemp2288, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2289[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp2289[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp2289[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2289[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90083: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90083, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90107: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90107, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2293, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                     & (~ ((~ __Vtemp2293[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2294, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                     & (~ ((~ __Vtemp2294[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90131: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90131, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2295, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2295[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2296, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2296[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90155: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90155, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90179: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90179, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2297, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2300[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2297[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2297[0U]) 
                                              >> 1U)));
    __Vtemp2300[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2297[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2297[1U]) 
                                              >> 1U)));
    __Vtemp2300[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2297[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2297[2U]) 
                                              >> 1U)));
    __Vtemp2300[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2297[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2297[3U]) 
                                              >> 1U)));
    __Vtemp2300[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2297[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2297[4U]) 
                                              >> 1U)));
    __Vtemp2300[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2297[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2297[5U]) 
                                              >> 1U)));
    __Vtemp2300[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2297[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2297[6U]) 
                                              >> 1U)));
    __Vtemp2300[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2297[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2297[7U]) 
                                              >> 1U)));
    __Vtemp2300[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2297[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2297[8U]) 
                                              >> 1U)));
    __Vtemp2300[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2297[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2297[9U]) 
                                              >> 1U)));
    __Vtemp2300[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2297[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2297[0xaU]) 
                                                  >> 1U)));
    __Vtemp2300[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2297[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2297[0xbU]) 
                                                  >> 1U)));
    __Vtemp2300[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2297[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2297[0xcU]) 
                                                  >> 1U)));
    __Vtemp2300[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2297[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2297[0xdU]) 
                                                  >> 1U)));
    __Vtemp2300[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2297[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2297[0xeU]) 
                                                  >> 1U)));
    __Vtemp2300[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2297[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2297[0xfU]) 
                                                  >> 1U)));
    __Vtemp2300[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2297[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2297[0x10U]) 
                                                    >> 1U)));
    __Vtemp2300[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2297[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2297[0x11U]) 
                                                    >> 1U)));
    __Vtemp2300[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2297[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2297[0x12U]) 
                                                    >> 1U)));
    __Vtemp2300[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2297[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2297[0x13U]) 
                                                    >> 1U)));
    __Vtemp2300[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2297[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2297[0x14U]) 
                                                    >> 1U)));
    __Vtemp2300[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2297[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2297[0x15U]) 
                                                    >> 1U)));
    __Vtemp2300[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2297[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2297[0x16U]) 
                                                    >> 1U)));
    __Vtemp2300[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2297[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2297[0x17U]) 
                                                    >> 1U)));
    __Vtemp2300[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2297[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2297[0x18U]) 
                                                    >> 1U)));
    __Vtemp2300[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2297[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2297[0x19U]) 
                                                    >> 1U)));
    __Vtemp2300[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2297[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2297[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2300[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2297[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2297[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2300[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2297[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2297[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2300[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2297[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2297[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2300[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2297[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2297[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2300[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2297[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2301, __Vtemp2300);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp2301[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2302, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2305[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2302[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2302[0U]) 
                                              >> 1U)));
    __Vtemp2305[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2302[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2302[1U]) 
                                              >> 1U)));
    __Vtemp2305[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2302[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2302[2U]) 
                                              >> 1U)));
    __Vtemp2305[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2302[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2302[3U]) 
                                              >> 1U)));
    __Vtemp2305[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2302[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2302[4U]) 
                                              >> 1U)));
    __Vtemp2305[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2302[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2302[5U]) 
                                              >> 1U)));
    __Vtemp2305[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2302[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2302[6U]) 
                                              >> 1U)));
    __Vtemp2305[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2302[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2302[7U]) 
                                              >> 1U)));
    __Vtemp2305[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2302[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2302[8U]) 
                                              >> 1U)));
    __Vtemp2305[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2302[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2302[9U]) 
                                              >> 1U)));
    __Vtemp2305[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2302[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2302[0xaU]) 
                                                  >> 1U)));
    __Vtemp2305[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2302[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2302[0xbU]) 
                                                  >> 1U)));
    __Vtemp2305[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2302[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2302[0xcU]) 
                                                  >> 1U)));
    __Vtemp2305[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2302[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2302[0xdU]) 
                                                  >> 1U)));
    __Vtemp2305[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2302[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2302[0xeU]) 
                                                  >> 1U)));
    __Vtemp2305[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2302[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2302[0xfU]) 
                                                  >> 1U)));
    __Vtemp2305[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2302[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2302[0x10U]) 
                                                    >> 1U)));
    __Vtemp2305[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2302[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2302[0x11U]) 
                                                    >> 1U)));
    __Vtemp2305[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2302[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2302[0x12U]) 
                                                    >> 1U)));
    __Vtemp2305[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2302[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2302[0x13U]) 
                                                    >> 1U)));
    __Vtemp2305[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2302[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2302[0x14U]) 
                                                    >> 1U)));
    __Vtemp2305[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2302[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2302[0x15U]) 
                                                    >> 1U)));
    __Vtemp2305[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2302[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2302[0x16U]) 
                                                    >> 1U)));
    __Vtemp2305[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2302[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2302[0x17U]) 
                                                    >> 1U)));
    __Vtemp2305[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2302[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2302[0x18U]) 
                                                    >> 1U)));
    __Vtemp2305[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2302[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2302[0x19U]) 
                                                    >> 1U)));
    __Vtemp2305[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2302[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2302[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2305[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2302[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2302[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2305[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2302[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2302[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2305[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2302[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2302[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2305[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2302[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2302[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2305[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2302[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2306, __Vtemp2305);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)) 
                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp2306[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90203: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90203, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid)) 
                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                           << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90225: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90225, "");
    }
    __Vtemp2307[0U] = 1U;
    __Vtemp2307[1U] = 0U;
    __Vtemp2307[2U] = 0U;
    __Vtemp2307[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2308, __Vtemp2307, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2312[0U] = 1U;
    __Vtemp2312[1U] = 0U;
    __Vtemp2312[2U] = 0U;
    __Vtemp2312[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2313, __Vtemp2312, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2317[0U] = 1U;
    __Vtemp2317[1U] = 0U;
    __Vtemp2317[2U] = 0U;
    __Vtemp2317[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2318, __Vtemp2317, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                 ? __Vtemp2308[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp2308[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                              ? __Vtemp2308[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                 ? __Vtemp2308[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                        ? __Vtemp2313[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2318[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                          ? __Vtemp2313[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2318[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                         ? __Vtemp2313[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2318[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                        ? __Vtemp2313[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2318[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2322[0U] = 1U;
    __Vtemp2322[1U] = 0U;
    __Vtemp2322[2U] = 0U;
    __Vtemp2322[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2323, __Vtemp2322, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2327[0U] = 1U;
    __Vtemp2327[1U] = 0U;
    __Vtemp2327[2U] = 0U;
    __Vtemp2327[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2328, __Vtemp2327, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp2332[0U] = 1U;
    __Vtemp2332[1U] = 0U;
    __Vtemp2332[2U] = 0U;
    __Vtemp2332[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2333, __Vtemp2332, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                 ? __Vtemp2323[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                   ? __Vtemp2323[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                              ? __Vtemp2323[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                 ? __Vtemp2323[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                        ? __Vtemp2328[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2333[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                          ? __Vtemp2328[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2333[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                         ? __Vtemp2328[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2333[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611))
                                        ? __Vtemp2328[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2333[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90249: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90249, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90273: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90273, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2682)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2682)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90297: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90297, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:170:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_valid)) 
                     & (~ (((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_84) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_2))) 
                            >> (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90321: Assertion failed in %NTestHarness.ldut.fpga.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90321, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7429: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7429, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_valid))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_valid))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7453: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7453, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___T_10)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr_auto_in_d_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___T_10)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:7477: Assertion failed in %NTestHarness.ldut.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 7477, "");
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    if (VL_UNLIKELY((1U & (~ (((~ (0xffffU & ((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffffU & ((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103309: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103309, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffffU & ((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffffU & ((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103331: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103331, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103353: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103353, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                                >> 1U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103375: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103375, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                                >> 2U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                                >> 2U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103397: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103397, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                                >> 2U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                                >> 2U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103419: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103419, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                                >> 3U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                                >> 3U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103441: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103441, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                                >> 3U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & (((((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                                >> 3U) 
                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103463: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103463, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 4U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 4U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103485: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103485, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 4U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 4U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103507: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103507, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 5U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 5U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103529: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103529, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 5U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 5U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103551: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103551, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 6U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 6U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103573: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103573, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 6U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 6U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103595: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103595, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 7U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                               >> 7U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103617: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103617, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 7U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & (((((IData)(1U) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 7U) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103639: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103639, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 8U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 8U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103661: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103661, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 8U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 8U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103683: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103683, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 9U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 9U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103705: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103705, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 9U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 9U) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103727: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103727, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 0xaU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 0xaU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103749: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103749, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 0xaU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 0xaU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103771: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103771, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 0xbU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                              >> 0xbU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103793: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103793, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 0xbU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & (((((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 0xbU) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103815: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103815, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & (((((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                             >> 0xcU) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & (((((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                             >> 0xcU) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103837: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103837, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & (((((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 0xcU) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & (((((IData)(1U) 
                                              << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 0xcU) 
                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103859: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103859, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                           >> 0xdU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                           >> 0xdU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103881: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103881, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                           >> 0xdU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                           >> 0xdU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103903: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103903, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                           >> 0xeU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                           >> 0xeU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103925: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103925, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                           >> 0xeU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                           >> 0xeU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103947: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103947, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (1U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                           >> 0xfU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (1U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                                           >> 0xfU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103969: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103969, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (1U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                           >> 0xfU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (1U & (((((IData)(1U) 
                                            << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                           >> 0xfU) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___pending_inc_T_1)) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))) 
                               | (8U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:103991: Assertion failed in %NTestHarness.ldut.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 103991, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:143442: Assertion failed in %NTestHarness.ldut.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 143442, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:143464: Assertion failed in %NTestHarness.ldut.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 143464, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:143486: Assertion failed in %NTestHarness.ldut.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 143486, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:143508: Assertion failed in %NTestHarness.ldut.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 143508, "");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty) 
                               | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ptr_match) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full))))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ptr_match) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full))))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ptr_match) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__maybe_full))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full))))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full))))
                                                             : 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)))))))))))))))))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:63 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty) 
                               | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ptr_match) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full))))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ptr_match) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full))))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ptr_match) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__maybe_full))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full))))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full))))
                                                             : 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full)))))))))))))))))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42953: Assertion failed in %NTestHarness.ldut.fpga.axi4yank\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 42953, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bvalid)) 
                               | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ptr_match) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__maybe_full))))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ptr_match) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__maybe_full))))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ptr_match) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__maybe_full))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match) 
                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full))))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full))))
                                                             : 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full)))))))))))))))))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:84 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bvalid)) 
                               | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ 
                                                        ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ptr_match) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__maybe_full))))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ 
                                                         ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ptr_match) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__maybe_full))))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ 
                                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ptr_match) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__maybe_full))))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ 
                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match) 
                                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full))))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ 
                                                            ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match) 
                                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full))))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full))))
                                                             : 
                                                            (~ 
                                                             ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match) 
                                                              & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full)))))))))))))))))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:42977: Assertion failed in %NTestHarness.ldut.fpga.axi4yank\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 42977, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:107978: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 107978, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108001: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108001, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108024: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108024, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108047: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108047, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108070: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108070, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108093: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108093, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108116: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108116, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108139: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108139, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108162: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108162, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108185: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108185, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108208: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108208, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108231: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108231, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108254: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108254, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108277: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108277, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_8)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_8)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108300: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108300, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108323: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108323, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_9)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_9)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108346: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108346, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108369: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108369, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_10)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_10)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108392: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108392, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108415: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108415, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_11)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_11)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108438: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108438, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108461: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108461, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_12)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_12)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108484: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108484, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108507: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108507, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_13)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_13)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108530: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108530, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108553: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108553, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_14)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_14)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108576: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108576, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108599: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108599, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_15)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_15)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108622: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108622, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108645: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108645, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_16)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_16)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108668: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108668, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_16))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_16))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108691: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108691, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_17)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_17)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108714: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108714, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_17))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_17))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108737: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108737, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_18)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_18)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108760: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108760, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_18))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_18))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108783: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108783, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_19)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_19)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108806: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108806, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_19))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_19))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108829: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108829, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_20)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_20)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108852: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108852, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_20))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_20))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108875: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108875, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_21)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_21)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108898: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108898, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_21))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_21))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108921: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108921, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_22)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_22)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108944: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108944, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_22))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_22))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108967: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108967, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_23)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                     >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_23)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:108990: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 108990, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_23))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__count_23))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:109013: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 109013, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47028: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47028, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47051: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47051, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47074: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47074, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_1)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_1)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47097: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47097, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47120: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47120, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_2)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_2)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47143: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47143, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47166: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47166, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_3)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_3)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47189: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47189, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47212: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47212, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_4)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_4)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47235: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47235, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47258: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47258, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_5)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_5)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47281: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47281, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47304: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47304, "");
    }
}
