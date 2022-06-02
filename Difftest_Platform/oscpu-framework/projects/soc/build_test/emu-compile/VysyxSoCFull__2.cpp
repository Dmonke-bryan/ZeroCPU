// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__25(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__25\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<4>/*127:0*/ __Vtemp2337;
    VlWide<4>/*127:0*/ __Vtemp2338;
    VlWide<4>/*127:0*/ __Vtemp2339;
    VlWide<4>/*127:0*/ __Vtemp2340;
    VlWide<16>/*511:0*/ __Vtemp2343;
    VlWide<16>/*511:0*/ __Vtemp2344;
    VlWide<16>/*511:0*/ __Vtemp2347;
    VlWide<16>/*511:0*/ __Vtemp2348;
    VlWide<16>/*511:0*/ __Vtemp2351;
    VlWide<16>/*511:0*/ __Vtemp2352;
    VlWide<16>/*511:0*/ __Vtemp2355;
    VlWide<16>/*511:0*/ __Vtemp2356;
    VlWide<16>/*511:0*/ __Vtemp2359;
    VlWide<16>/*511:0*/ __Vtemp2360;
    VlWide<16>/*511:0*/ __Vtemp2363;
    VlWide<16>/*511:0*/ __Vtemp2364;
    VlWide<16>/*511:0*/ __Vtemp2367;
    VlWide<16>/*511:0*/ __Vtemp2368;
    VlWide<16>/*511:0*/ __Vtemp2371;
    VlWide<16>/*511:0*/ __Vtemp2372;
    VlWide<16>/*511:0*/ __Vtemp2373;
    VlWide<16>/*511:0*/ __Vtemp2376;
    VlWide<16>/*511:0*/ __Vtemp2377;
    VlWide<16>/*511:0*/ __Vtemp2378;
    VlWide<16>/*511:0*/ __Vtemp2381;
    VlWide<16>/*511:0*/ __Vtemp2382;
    VlWide<4>/*127:0*/ __Vtemp2383;
    VlWide<4>/*127:0*/ __Vtemp2384;
    VlWide<4>/*127:0*/ __Vtemp2388;
    VlWide<4>/*127:0*/ __Vtemp2389;
    VlWide<4>/*127:0*/ __Vtemp2393;
    VlWide<4>/*127:0*/ __Vtemp2394;
    VlWide<4>/*127:0*/ __Vtemp2395;
    VlWide<4>/*127:0*/ __Vtemp2396;
    VlWide<16>/*511:0*/ __Vtemp2397;
    VlWide<16>/*511:0*/ __Vtemp2400;
    VlWide<16>/*511:0*/ __Vtemp2401;
    VlWide<16>/*511:0*/ __Vtemp2402;
    VlWide<16>/*511:0*/ __Vtemp2405;
    VlWide<16>/*511:0*/ __Vtemp2406;
    VlWide<4>/*127:0*/ __Vtemp2407;
    VlWide<4>/*127:0*/ __Vtemp2408;
    VlWide<4>/*127:0*/ __Vtemp2412;
    VlWide<4>/*127:0*/ __Vtemp2413;
    VlWide<4>/*127:0*/ __Vtemp2417;
    VlWide<4>/*127:0*/ __Vtemp2418;
    VlWide<4>/*127:0*/ __Vtemp2422;
    VlWide<4>/*127:0*/ __Vtemp2423;
    VlWide<4>/*127:0*/ __Vtemp2427;
    VlWide<4>/*127:0*/ __Vtemp2428;
    VlWide<4>/*127:0*/ __Vtemp2432;
    VlWide<4>/*127:0*/ __Vtemp2433;
    VlWide<4>/*127:0*/ __Vtemp2437;
    VlWide<4>/*127:0*/ __Vtemp2438;
    VlWide<4>/*127:0*/ __Vtemp2439;
    VlWide<4>/*127:0*/ __Vtemp2440;
    VlWide<16>/*511:0*/ __Vtemp2443;
    VlWide<16>/*511:0*/ __Vtemp2444;
    VlWide<16>/*511:0*/ __Vtemp2447;
    VlWide<16>/*511:0*/ __Vtemp2448;
    VlWide<16>/*511:0*/ __Vtemp2451;
    VlWide<16>/*511:0*/ __Vtemp2452;
    VlWide<16>/*511:0*/ __Vtemp2455;
    VlWide<16>/*511:0*/ __Vtemp2456;
    // Body
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_6)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__inc_6)) 
                               | (0x10U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47327: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47327, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_8)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_8)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47350: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47350, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_8))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47373: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47373, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_9)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_9)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47396: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47396, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_9))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47419: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47419, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_10)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_10)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47442: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47442, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_10))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47465: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47465, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_11)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_11)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47488: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47488, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_11))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47511: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47511, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_12)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_12)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47534: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47534, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_12))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47557: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47557, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_13)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_13)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47580: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47580, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_13))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47603: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47603, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_14)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_14)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47626: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47626, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_14))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47649: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47649, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_15)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_15)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47672: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47672, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_15))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47695: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47695, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_16)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_16)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47718: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47718, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_16))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_16))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47741: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47741, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_17)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_17)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47764: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47764, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_17))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_17))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47787: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47787, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_18)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_18)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47810: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47810, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_18))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_18))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47833: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47833, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_19)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_19)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47856: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47856, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_19))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_19))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47879: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47879, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_20)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_20)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47902: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47902, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_20))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_20))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47925: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47925, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_21)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_21)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47948: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47948, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_21))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x14U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_21))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47971: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47971, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_22)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_22)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:47994: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 47994, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_22))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x15U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_22))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48017: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48017, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_23)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                     >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last)) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___dec_T_1))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_23)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48040: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48040, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_23))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__out_arw_bits_id)) 
                                    >> 0x16U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___inc_T))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__count_23))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48063: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48063, "");
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__count;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp__v0 = 0U;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__locked 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__locked;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48807: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48807, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                            & (0U == (0x3000U & (0x1000U 
                                                 ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                            & (0U == (0x3000U & (0x1000U 
                                                 ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48831: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48831, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48855: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48855, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48879: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48879, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48903: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48903, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48927: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48927, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48951: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48951, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48975: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48975, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:48999: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 48999, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                            & (0U == (0x3000U & (0x1000U 
                                                 ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))) 
                            & (0U == (0x3000U & (0x1000U 
                                                 ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49023: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49023, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49047: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49047, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49071: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49071, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49095: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49095, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49119: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49119, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49143: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49143, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49167: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49167, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49191: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49191, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49215: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49215, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x3000U & (0x1000U 
                                                 ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x3000U & (0x1000U 
                                                 ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49239: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49239, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49263: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49263, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49287: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49287, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49311: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49311, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49335: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49335, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49359: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49359, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49383: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49383, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49407: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49407, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49431: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49431, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49455: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49455, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49479: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49479, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49503: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49503, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49527: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49527, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49551: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49551, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49575: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49575, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49599: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49599, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49623: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49623, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49647: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49647, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49671: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49671, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((4U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((4U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49695: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49695, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49719: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49719, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49743: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49743, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49767: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49767, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49791: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49791, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((3U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((3U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49815: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49815, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49839: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49839, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                               & (0U == (0x3000U & 
                                         (0x1000U ^ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49863: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49863, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49887: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49887, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49911: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49911, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((1U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((1U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                                    : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49935: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49935, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49959: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49959, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:49983: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 49983, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50007: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50007, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50031: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50031, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50055: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50055, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50079: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50079, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50103: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50103, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50127: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50127, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50151: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50151, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50175: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50175, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50199: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50199, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50223: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50223, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50247: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50247, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50271: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50271, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50295: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50295, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50319: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50319, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50343: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50343, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50367: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50367, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50391: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50391, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50415: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50415, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50439: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50439, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50463: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50463, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50487: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50487, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50511: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50511, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50535: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50535, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50559: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50559, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_1) 
                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50583: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50583, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50607: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50607, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50631: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50631, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50655: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50655, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50679: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50679, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50703: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50703, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50727: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50727, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50751: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50751, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50775: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50775, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50799: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50799, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50823: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50823, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ 
                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ 
                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50847: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50847, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                   : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                   : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50871: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50871, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50895: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50895, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50919: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50919, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50943: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50943, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50967: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50967, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ 
                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                   >> 4U)))) 
                                  | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            & ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ 
                                          ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:50991: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 50991, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                   : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                   : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51015: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51015, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51039: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51039, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51063: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51063, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51087: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51087, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51111: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51111, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51135: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51135, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51159: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51159, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51183: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51183, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51207: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51207, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51231: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51231, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51255: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51255, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51279: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51279, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51303: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51303, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                                  : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51327: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51327, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51351: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51351, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                              : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51375: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51375, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51399: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51399, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51423: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51423, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param)
                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51447: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51447, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51471: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51471, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51495: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51495, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__address)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__address)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51519: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51519, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51543: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51543, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51567: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51567, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51591: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51591, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51615: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51615, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51639: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51639, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51663: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51663, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51687: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51687, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51711: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51711, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51735: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51735, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                         : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__address_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((0x1fffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address)
                                         : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__address_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51759: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51759, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2337, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2337[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2338, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2338[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51783: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51783, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2339, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2339[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2340, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2340[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51807: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51807, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51831: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51831, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51855: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51855, "");
    }
    __Vtemp2343[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2343[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2343[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2343[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2343[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2343[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2343[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2343[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2343[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2343[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2343[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2343[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2343[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2343[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2343[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2343[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2344, __Vtemp2343);
    __Vtemp2347[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2347[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2347[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2347[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2347[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2347[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2347[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2347[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2347[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2347[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2347[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2347[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2347[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2347[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2347[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2347[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2348, __Vtemp2347);
    __Vtemp2351[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2351[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2351[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2351[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2351[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2351[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2351[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2351[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2351[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2351[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2351[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2351[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2351[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2351[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2351[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2351[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2352, __Vtemp2351);
    __Vtemp2355[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2355[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2355[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2355[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2355[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2355[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2355[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2355[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2355[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2355[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2355[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2355[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2355[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2355[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2355[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2355[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2356, __Vtemp2355);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2344[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2348[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2352[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2356[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2359[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2359[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2359[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2359[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2359[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2359[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2359[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2359[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2359[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2359[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2359[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2359[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2359[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2359[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2359[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2359[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2360, __Vtemp2359);
    __Vtemp2363[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2363[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2363[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2363[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2363[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2363[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2363[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2363[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2363[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2363[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2363[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2363[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2363[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2363[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2363[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2363[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2364, __Vtemp2363);
    __Vtemp2367[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2367[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2367[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2367[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2367[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2367[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2367[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2367[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2367[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2367[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2367[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2367[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2367[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2367[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2367[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2367[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2368, __Vtemp2367);
    __Vtemp2371[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2371[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2371[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2371[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2371[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2371[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2371[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2371[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2371[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2371[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2371[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2371[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2371[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2371[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2371[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2371[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2372, __Vtemp2371);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2360[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2364[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2368[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2372[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51879: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51879, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2373, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2376[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2373[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2373[0U]) 
                                             >> 1U)));
    __Vtemp2376[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2373[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2373[1U]) 
                                             >> 1U)));
    __Vtemp2376[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2373[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2373[2U]) 
                                             >> 1U)));
    __Vtemp2376[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2373[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2373[3U]) 
                                             >> 1U)));
    __Vtemp2376[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2373[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2373[4U]) 
                                             >> 1U)));
    __Vtemp2376[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2373[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2373[5U]) 
                                             >> 1U)));
    __Vtemp2376[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2373[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2373[6U]) 
                                             >> 1U)));
    __Vtemp2376[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2373[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2373[7U]) 
                                             >> 1U)));
    __Vtemp2376[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2373[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2373[8U]) 
                                             >> 1U)));
    __Vtemp2376[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2373[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2373[9U]) 
                                             >> 1U)));
    __Vtemp2376[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2373[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2373[0xaU]) 
                                                 >> 1U)));
    __Vtemp2376[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2373[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2373[0xbU]) 
                                                 >> 1U)));
    __Vtemp2376[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2373[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2373[0xcU]) 
                                                 >> 1U)));
    __Vtemp2376[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2373[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2373[0xdU]) 
                                                 >> 1U)));
    __Vtemp2376[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2373[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2373[0xeU]) 
                                                 >> 1U)));
    __Vtemp2376[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2373[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2377, __Vtemp2376);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp2377[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2378, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2381[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2378[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2378[0U]) 
                                             >> 1U)));
    __Vtemp2381[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2378[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2378[1U]) 
                                             >> 1U)));
    __Vtemp2381[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2378[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2378[2U]) 
                                             >> 1U)));
    __Vtemp2381[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2378[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2378[3U]) 
                                             >> 1U)));
    __Vtemp2381[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2378[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2378[4U]) 
                                             >> 1U)));
    __Vtemp2381[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2378[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2378[5U]) 
                                             >> 1U)));
    __Vtemp2381[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2378[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2378[6U]) 
                                             >> 1U)));
    __Vtemp2381[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2378[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2378[7U]) 
                                             >> 1U)));
    __Vtemp2381[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2378[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2378[8U]) 
                                             >> 1U)));
    __Vtemp2381[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2378[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2378[9U]) 
                                             >> 1U)));
    __Vtemp2381[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2378[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2378[0xaU]) 
                                                 >> 1U)));
    __Vtemp2381[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2378[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2378[0xbU]) 
                                                 >> 1U)));
    __Vtemp2381[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2378[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2378[0xcU]) 
                                                 >> 1U)));
    __Vtemp2381[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2378[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2378[0xdU]) 
                                                 >> 1U)));
    __Vtemp2381[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2378[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2378[0xeU]) 
                                                 >> 1U)));
    __Vtemp2381[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2378[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2382, __Vtemp2381);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp2382[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51903: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51903, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_d_ready)) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_d_ready)) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51925: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51925, "");
    }
    __Vtemp2383[0U] = 1U;
    __Vtemp2383[1U] = 0U;
    __Vtemp2383[2U] = 0U;
    __Vtemp2383[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2384, __Vtemp2383, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2384[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp2384[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp2384[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2384[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2388[0U] = 1U;
    __Vtemp2388[1U] = 0U;
    __Vtemp2388[2U] = 0U;
    __Vtemp2388[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2389, __Vtemp2388, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2389[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                ? __Vtemp2389[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                               ? __Vtemp2389[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                              ? __Vtemp2389[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51949: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51949, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51973: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51973, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2393, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                     & (~ ((~ __Vtemp2393[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2394, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                     & (~ ((~ __Vtemp2394[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:51997: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 51997, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2395, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2395[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2396, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2396[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52021: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52021, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52045: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52045, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2397, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2400[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2397[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2397[0U]) 
                                             >> 1U)));
    __Vtemp2400[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2397[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2397[1U]) 
                                             >> 1U)));
    __Vtemp2400[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2397[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2397[2U]) 
                                             >> 1U)));
    __Vtemp2400[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2397[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2397[3U]) 
                                             >> 1U)));
    __Vtemp2400[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2397[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2397[4U]) 
                                             >> 1U)));
    __Vtemp2400[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2397[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2397[5U]) 
                                             >> 1U)));
    __Vtemp2400[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2397[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2397[6U]) 
                                             >> 1U)));
    __Vtemp2400[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2397[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2397[7U]) 
                                             >> 1U)));
    __Vtemp2400[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2397[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2397[8U]) 
                                             >> 1U)));
    __Vtemp2400[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2397[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2397[9U]) 
                                             >> 1U)));
    __Vtemp2400[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2397[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2397[0xaU]) 
                                                 >> 1U)));
    __Vtemp2400[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2397[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2397[0xbU]) 
                                                 >> 1U)));
    __Vtemp2400[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2397[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2397[0xcU]) 
                                                 >> 1U)));
    __Vtemp2400[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2397[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2397[0xdU]) 
                                                 >> 1U)));
    __Vtemp2400[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2397[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2397[0xeU]) 
                                                 >> 1U)));
    __Vtemp2400[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2397[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2401, __Vtemp2400);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp2401[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2402, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2405[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2402[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2402[0U]) 
                                             >> 1U)));
    __Vtemp2405[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2402[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2402[1U]) 
                                             >> 1U)));
    __Vtemp2405[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2402[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2402[2U]) 
                                             >> 1U)));
    __Vtemp2405[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2402[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2402[3U]) 
                                             >> 1U)));
    __Vtemp2405[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2402[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2402[4U]) 
                                             >> 1U)));
    __Vtemp2405[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2402[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2402[5U]) 
                                             >> 1U)));
    __Vtemp2405[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2402[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2402[6U]) 
                                             >> 1U)));
    __Vtemp2405[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2402[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2402[7U]) 
                                             >> 1U)));
    __Vtemp2405[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2402[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2402[8U]) 
                                             >> 1U)));
    __Vtemp2405[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2402[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2402[9U]) 
                                             >> 1U)));
    __Vtemp2405[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2402[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2402[0xaU]) 
                                                 >> 1U)));
    __Vtemp2405[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2402[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2402[0xbU]) 
                                                 >> 1U)));
    __Vtemp2405[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2402[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2402[0xcU]) 
                                                 >> 1U)));
    __Vtemp2405[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2402[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2402[0xdU]) 
                                                 >> 1U)));
    __Vtemp2405[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2402[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2402[0xeU]) 
                                                 >> 1U)));
    __Vtemp2405[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2402[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2406, __Vtemp2405);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp2406[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52069: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52069, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_d_ready)) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2_auto_out_d_ready)) 
                            | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52091: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52091, "");
    }
    __Vtemp2407[0U] = 1U;
    __Vtemp2407[1U] = 0U;
    __Vtemp2407[2U] = 0U;
    __Vtemp2407[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2408, __Vtemp2407, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    __Vtemp2412[0U] = 1U;
    __Vtemp2412[1U] = 0U;
    __Vtemp2412[2U] = 0U;
    __Vtemp2412[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2413, __Vtemp2412, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    __Vtemp2417[0U] = 1U;
    __Vtemp2417[1U] = 0U;
    __Vtemp2417[2U] = 0U;
    __Vtemp2417[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2418, __Vtemp2417, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2408[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp2408[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                              ? __Vtemp2408[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2408[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2413[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2418[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                          ? __Vtemp2413[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2418[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                         ? __Vtemp2413[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2418[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2413[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2418[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2422[0U] = 1U;
    __Vtemp2422[1U] = 0U;
    __Vtemp2422[2U] = 0U;
    __Vtemp2422[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2423, __Vtemp2422, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    __Vtemp2427[0U] = 1U;
    __Vtemp2427[1U] = 0U;
    __Vtemp2427[2U] = 0U;
    __Vtemp2427[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2428, __Vtemp2427, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_source));
    __Vtemp2432[0U] = 1U;
    __Vtemp2432[1U] = 0U;
    __Vtemp2432[2U] = 0U;
    __Vtemp2432[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2433, __Vtemp2432, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((0U != (((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2423[0U] : 0U) 
                               | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                   ? __Vtemp2423[1U]
                                   : 0U)) | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                              ? __Vtemp2423[2U]
                                              : 0U)) 
                             | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                 ? __Vtemp2423[3U] : 0U))) 
                     & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2428[0U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2433[0U]
                                                  : 0U)) 
                                     | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                          & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                          ? __Vtemp2428[1U]
                                          : 0U) ^ (
                                                   (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                    & (6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp2433[1U]
                                                    : 0U))) 
                                    | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                         ? __Vtemp2428[2U]
                                         : 0U) ^ ((
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                   & (6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp2433[2U]
                                                   : 0U))) 
                                   | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1))) 
                                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2335))
                                        ? __Vtemp2428[3U]
                                        : 0U) ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2))) 
                                                  & (6U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp2433[3U]
                                                  : 0U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52115: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52115, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52139: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52139, "");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2406)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2406)) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52163: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52163, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_84) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:152:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_out_1_e_valid) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_84) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52187: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52187, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52975: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52975, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:52999: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 52999, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:53023: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 53023, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_21)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT___T_21)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:53047: Assertion failed in %NTestHarness.ldut.asic.chipMaster.err\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 53047, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10182: Assertion failed in %NTestHarness.ldut.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 10182, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10206: Assertion failed in %NTestHarness.ldut.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 10206, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10230: Assertion failed in %NTestHarness.ldut.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 10230, "");
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value;
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43565: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43565, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43589: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43589, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43613: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43613, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43637: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43637, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43661: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43661, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43685: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43685, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43709: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43709, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43733: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43733, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43757: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43757, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43781: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43781, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43805: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43805, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43829: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43829, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43853: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43853, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43877: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43877, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43901: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43901, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43925: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43925, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43949: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43949, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43973: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43973, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & (0ULL == (0x180000000ULL 
                                        & (QData)((IData)(
                                                          (0x80000000U 
                                                           ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:43997: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 43997, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44021: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44021, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44045: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44045, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44069: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44069, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44093: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44093, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44117: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44117, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44141: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44141, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44165: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44165, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44189: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44189, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44213: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44213, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44237: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44237, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                               & (0ULL == (0x180000000ULL 
                                           & (QData)((IData)(
                                                             (0x80000000U 
                                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44261: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44261, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44285: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44285, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44309: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44309, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44333: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44333, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44357: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44357, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44381: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44381, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44405: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44405, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44429: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44429, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44453: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44453, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44477: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44477, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44501: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44501, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44525: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44525, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44549: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44549, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44573: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44573, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44597: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44597, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44621: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44621, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44645: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44645, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44669: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44669, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44693: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44693, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44717: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44717, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44741: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44741, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                    ? 1U : 0U)) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                    ? 1U : 0U)) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44765: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44765, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44789: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44789, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44813: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44813, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44837: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44837, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44861: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44861, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44885: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44885, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44909: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44909, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44933: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44933, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44957: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44957, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:44981: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 44981, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45005: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45005, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45029: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45029, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45053: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45053, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45077: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45077, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45101: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45101, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45125: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45125, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45149: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45149, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45173: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45173, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45197: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45197, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45221: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45221, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45245: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45245, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45269: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45269, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45293: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45293, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter))) 
                     & (~ ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45317: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45317, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45341: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45341, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45365: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45365, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45389: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45389, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45413: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45413, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2437, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2437[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2438, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2438[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45437: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45437, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2439, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((__Vtemp2439[0U] 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2440, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((__Vtemp2440[0U] 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45461: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45461, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                               ? 1U : 0U) == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                               ? 1U : 0U) == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45485: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45485, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45509: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45509, "");
    }
    __Vtemp2443[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2443[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2443[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2443[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2443[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2443[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2443[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2443[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2443[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2443[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2443[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2443[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2443[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2443[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2443[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2443[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2444, __Vtemp2443);
    __Vtemp2447[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2447[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2447[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2447[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2447[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2447[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2447[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2447[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2447[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2447[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2447[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2447[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2447[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2447[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2447[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2447[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2448, __Vtemp2447);
    __Vtemp2451[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2451[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2451[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2451[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2451[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2451[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2451[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2451[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2451[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2451[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2451[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2451[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2451[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2451[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2451[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2451[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2452, __Vtemp2451);
    __Vtemp2455[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2455[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2455[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2455[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2455[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2455[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2455[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2455[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2455[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2455[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2455[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2455[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2455[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2455[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2455[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2455[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2456, __Vtemp2455);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                               ? 1U : 0U) == ((7U == 
                                               (7U 
                                                & __Vtemp2444[0U]))
                                               ? 4U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp2448[0U]))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp2452[0U]))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp2456[0U]))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
}
