// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__26(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__26\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<16>/*511:0*/ __Vtemp2459;
    VlWide<16>/*511:0*/ __Vtemp2460;
    VlWide<16>/*511:0*/ __Vtemp2463;
    VlWide<16>/*511:0*/ __Vtemp2464;
    VlWide<16>/*511:0*/ __Vtemp2467;
    VlWide<16>/*511:0*/ __Vtemp2468;
    VlWide<16>/*511:0*/ __Vtemp2471;
    VlWide<16>/*511:0*/ __Vtemp2472;
    VlWide<16>/*511:0*/ __Vtemp2473;
    VlWide<16>/*511:0*/ __Vtemp2476;
    VlWide<16>/*511:0*/ __Vtemp2477;
    VlWide<16>/*511:0*/ __Vtemp2478;
    VlWide<16>/*511:0*/ __Vtemp2481;
    VlWide<16>/*511:0*/ __Vtemp2482;
    VlWide<4>/*127:0*/ __Vtemp2483;
    VlWide<4>/*127:0*/ __Vtemp2484;
    VlWide<4>/*127:0*/ __Vtemp2488;
    VlWide<4>/*127:0*/ __Vtemp2489;
    VlWide<4>/*127:0*/ __Vtemp2493;
    VlWide<4>/*127:0*/ __Vtemp2494;
    VlWide<16>/*511:0*/ __Vtemp2495;
    VlWide<16>/*511:0*/ __Vtemp2498;
    VlWide<16>/*511:0*/ __Vtemp2499;
    VlWide<16>/*511:0*/ __Vtemp2500;
    VlWide<16>/*511:0*/ __Vtemp2503;
    VlWide<16>/*511:0*/ __Vtemp2504;
    VlWide<4>/*127:0*/ __Vtemp2505;
    VlWide<4>/*127:0*/ __Vtemp2506;
    VlWide<4>/*127:0*/ __Vtemp2507;
    VlWide<4>/*127:0*/ __Vtemp2508;
    VlWide<16>/*511:0*/ __Vtemp2511;
    VlWide<16>/*511:0*/ __Vtemp2512;
    VlWide<16>/*511:0*/ __Vtemp2515;
    VlWide<16>/*511:0*/ __Vtemp2516;
    VlWide<16>/*511:0*/ __Vtemp2519;
    VlWide<16>/*511:0*/ __Vtemp2520;
    VlWide<16>/*511:0*/ __Vtemp2523;
    VlWide<16>/*511:0*/ __Vtemp2524;
    VlWide<16>/*511:0*/ __Vtemp2527;
    VlWide<16>/*511:0*/ __Vtemp2528;
    VlWide<16>/*511:0*/ __Vtemp2531;
    VlWide<16>/*511:0*/ __Vtemp2532;
    VlWide<16>/*511:0*/ __Vtemp2535;
    VlWide<16>/*511:0*/ __Vtemp2536;
    VlWide<16>/*511:0*/ __Vtemp2539;
    VlWide<16>/*511:0*/ __Vtemp2540;
    VlWide<32>/*1023:0*/ __Vtemp2541;
    VlWide<32>/*1023:0*/ __Vtemp2544;
    VlWide<32>/*1023:0*/ __Vtemp2545;
    VlWide<32>/*1023:0*/ __Vtemp2546;
    VlWide<32>/*1023:0*/ __Vtemp2549;
    VlWide<32>/*1023:0*/ __Vtemp2550;
    VlWide<4>/*127:0*/ __Vtemp2551;
    VlWide<4>/*127:0*/ __Vtemp2552;
    VlWide<4>/*127:0*/ __Vtemp2556;
    VlWide<4>/*127:0*/ __Vtemp2557;
    VlWide<4>/*127:0*/ __Vtemp2561;
    VlWide<4>/*127:0*/ __Vtemp2562;
    VlWide<32>/*1023:0*/ __Vtemp2563;
    VlWide<32>/*1023:0*/ __Vtemp2566;
    VlWide<32>/*1023:0*/ __Vtemp2567;
    VlWide<32>/*1023:0*/ __Vtemp2568;
    VlWide<32>/*1023:0*/ __Vtemp2571;
    VlWide<32>/*1023:0*/ __Vtemp2572;
    VlWide<4>/*127:0*/ __Vtemp2573;
    VlWide<4>/*127:0*/ __Vtemp2574;
    VlWide<4>/*127:0*/ __Vtemp2575;
    VlWide<4>/*127:0*/ __Vtemp2576;
    VlWide<16>/*511:0*/ __Vtemp2579;
    VlWide<16>/*511:0*/ __Vtemp2580;
    VlWide<16>/*511:0*/ __Vtemp2583;
    VlWide<16>/*511:0*/ __Vtemp2584;
    VlWide<16>/*511:0*/ __Vtemp2587;
    VlWide<16>/*511:0*/ __Vtemp2588;
    VlWide<16>/*511:0*/ __Vtemp2591;
    VlWide<16>/*511:0*/ __Vtemp2592;
    VlWide<16>/*511:0*/ __Vtemp2595;
    VlWide<16>/*511:0*/ __Vtemp2596;
    VlWide<16>/*511:0*/ __Vtemp2599;
    VlWide<16>/*511:0*/ __Vtemp2600;
    VlWide<16>/*511:0*/ __Vtemp2603;
    VlWide<16>/*511:0*/ __Vtemp2604;
    VlWide<16>/*511:0*/ __Vtemp2607;
    VlWide<16>/*511:0*/ __Vtemp2608;
    VlWide<16>/*511:0*/ __Vtemp2609;
    VlWide<16>/*511:0*/ __Vtemp2612;
    VlWide<16>/*511:0*/ __Vtemp2613;
    VlWide<16>/*511:0*/ __Vtemp2614;
    VlWide<16>/*511:0*/ __Vtemp2617;
    VlWide<16>/*511:0*/ __Vtemp2618;
    VlWide<4>/*127:0*/ __Vtemp2619;
    VlWide<4>/*127:0*/ __Vtemp2620;
    VlWide<4>/*127:0*/ __Vtemp2624;
    VlWide<4>/*127:0*/ __Vtemp2625;
    VlWide<4>/*127:0*/ __Vtemp2629;
    VlWide<4>/*127:0*/ __Vtemp2630;
    VlWide<4>/*127:0*/ __Vtemp2631;
    VlWide<4>/*127:0*/ __Vtemp2632;
    // Body
    __Vtemp2459[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2459[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2459[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2459[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2459[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2459[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2459[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2459[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2459[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2459[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2459[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2459[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2459[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2459[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2459[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2459[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2460, __Vtemp2459);
    __Vtemp2463[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2463[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2463[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2463[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2463[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2463[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2463[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2463[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2463[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2463[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2463[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2463[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2463[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2463[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2463[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2463[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2464, __Vtemp2463);
    __Vtemp2467[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2467[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2467[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2467[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2467[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2467[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2467[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2467[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2467[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2467[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2467[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2467[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2467[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2467[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2467[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2467[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2468, __Vtemp2467);
    __Vtemp2471[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2471[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2471[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2471[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2471[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2471[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2471[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2471[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2471[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2471[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2471[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2471[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2471[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2471[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2471[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2471[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2472, __Vtemp2471);
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
                                                & __Vtemp2460[0U]))
                                               ? 4U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp2464[0U]))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_46)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp2468[0U]))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp2472[0U]))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45533: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45533, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2473, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2476[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2473[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2473[0U]) 
                                             >> 1U)));
    __Vtemp2476[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2473[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2473[1U]) 
                                             >> 1U)));
    __Vtemp2476[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2473[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2473[2U]) 
                                             >> 1U)));
    __Vtemp2476[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2473[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2473[3U]) 
                                             >> 1U)));
    __Vtemp2476[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2473[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2473[4U]) 
                                             >> 1U)));
    __Vtemp2476[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2473[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2473[5U]) 
                                             >> 1U)));
    __Vtemp2476[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2473[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2473[6U]) 
                                             >> 1U)));
    __Vtemp2476[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2473[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2473[7U]) 
                                             >> 1U)));
    __Vtemp2476[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2473[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2473[8U]) 
                                             >> 1U)));
    __Vtemp2476[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2473[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2473[9U]) 
                                             >> 1U)));
    __Vtemp2476[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2473[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2473[0xaU]) 
                                                 >> 1U)));
    __Vtemp2476[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2473[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2473[0xbU]) 
                                                 >> 1U)));
    __Vtemp2476[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2473[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2473[0xcU]) 
                                                 >> 1U)));
    __Vtemp2476[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2473[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2473[0xdU]) 
                                                 >> 1U)));
    __Vtemp2476[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2473[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2473[0xeU]) 
                                                 >> 1U)));
    __Vtemp2476[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2473[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2477, __Vtemp2476);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp2477[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2478, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2481[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2478[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2478[0U]) 
                                             >> 1U)));
    __Vtemp2481[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2478[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2478[1U]) 
                                             >> 1U)));
    __Vtemp2481[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2478[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2478[2U]) 
                                             >> 1U)));
    __Vtemp2481[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2478[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2478[3U]) 
                                             >> 1U)));
    __Vtemp2481[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2478[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2478[4U]) 
                                             >> 1U)));
    __Vtemp2481[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2478[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2478[5U]) 
                                             >> 1U)));
    __Vtemp2481[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2478[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2478[6U]) 
                                             >> 1U)));
    __Vtemp2481[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2478[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2478[7U]) 
                                             >> 1U)));
    __Vtemp2481[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2478[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2478[8U]) 
                                             >> 1U)));
    __Vtemp2481[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2478[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2478[9U]) 
                                             >> 1U)));
    __Vtemp2481[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2478[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2478[0xaU]) 
                                                 >> 1U)));
    __Vtemp2481[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2478[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2478[0xbU]) 
                                                 >> 1U)));
    __Vtemp2481[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2478[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2478[0xcU]) 
                                                 >> 1U)));
    __Vtemp2481[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2478[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2478[0xdU]) 
                                                 >> 1U)));
    __Vtemp2481[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2478[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2478[0xeU]) 
                                                 >> 1U)));
    __Vtemp2481[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2478[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2482, __Vtemp2481);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & __Vtemp2482[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45557: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45557, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_d_ready)) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_ready)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_0_d_ready)) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_ready)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45579: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45579, "");
    }
    __Vtemp2483[0U] = 1U;
    __Vtemp2483[1U] = 0U;
    __Vtemp2483[2U] = 0U;
    __Vtemp2483[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2484, __Vtemp2483, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2484[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp2484[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp2484[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2484[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2488[0U] = 1U;
    __Vtemp2488[1U] = 0U;
    __Vtemp2488[2U] = 0U;
    __Vtemp2488[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2489, __Vtemp2488, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2489[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp2489[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp2489[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2489[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45603: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45603, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45627: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45627, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2493, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (__Vtemp2493[0U] 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2494, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (__Vtemp2494[0U] 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45651: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45651, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2495, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2498[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2495[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2495[0U]) 
                                             >> 1U)));
    __Vtemp2498[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2495[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2495[1U]) 
                                             >> 1U)));
    __Vtemp2498[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2495[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2495[2U]) 
                                             >> 1U)));
    __Vtemp2498[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2495[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2495[3U]) 
                                             >> 1U)));
    __Vtemp2498[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2495[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2495[4U]) 
                                             >> 1U)));
    __Vtemp2498[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2495[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2495[5U]) 
                                             >> 1U)));
    __Vtemp2498[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2495[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2495[6U]) 
                                             >> 1U)));
    __Vtemp2498[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2495[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2495[7U]) 
                                             >> 1U)));
    __Vtemp2498[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2495[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2495[8U]) 
                                             >> 1U)));
    __Vtemp2498[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2495[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2495[9U]) 
                                             >> 1U)));
    __Vtemp2498[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2495[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2495[0xaU]) 
                                                 >> 1U)));
    __Vtemp2498[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2495[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2495[0xbU]) 
                                                 >> 1U)));
    __Vtemp2498[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2495[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2495[0xcU]) 
                                                 >> 1U)));
    __Vtemp2498[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2495[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2495[0xdU]) 
                                                 >> 1U)));
    __Vtemp2498[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2495[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2495[0xeU]) 
                                                 >> 1U)));
    __Vtemp2498[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2495[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2499, __Vtemp2498);
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                                   == 
                                                   (0xfU 
                                                    & __Vtemp2499[0U])) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2500, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp2503[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2500[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2500[0U]) 
                                             >> 1U)));
    __Vtemp2503[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2500[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2500[1U]) 
                                             >> 1U)));
    __Vtemp2503[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2500[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2500[2U]) 
                                             >> 1U)));
    __Vtemp2503[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2500[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2500[3U]) 
                                             >> 1U)));
    __Vtemp2503[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2500[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2500[4U]) 
                                             >> 1U)));
    __Vtemp2503[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2500[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2500[5U]) 
                                             >> 1U)));
    __Vtemp2503[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2500[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2500[6U]) 
                                             >> 1U)));
    __Vtemp2503[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2500[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2500[7U]) 
                                             >> 1U)));
    __Vtemp2503[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2500[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2500[8U]) 
                                             >> 1U)));
    __Vtemp2503[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2500[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2500[9U]) 
                                             >> 1U)));
    __Vtemp2503[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2500[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2500[0xaU]) 
                                                 >> 1U)));
    __Vtemp2503[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2500[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2500[0xbU]) 
                                                 >> 1U)));
    __Vtemp2503[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2500[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2500[0xcU]) 
                                                 >> 1U)));
    __Vtemp2503[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2500[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2500[0xdU]) 
                                                 >> 1U)));
    __Vtemp2503[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2500[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2500[0xeU]) 
                                                 >> 1U)));
    __Vtemp2503[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2500[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2504, __Vtemp2503);
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size) 
                                                   == 
                                                   (0xfU 
                                                    & __Vtemp2504[0U])) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45675: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45675, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:77:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:45699: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 45699, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104645: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104645, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104669: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104669, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104693: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104693, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104717: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104717, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104741: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104741, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104765: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104765, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104789: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104789, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104813: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104813, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104837: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104837, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104861: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104861, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104885: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104885, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104909: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104909, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104933: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104933, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104957: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104957, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:104981: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 104981, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105005: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105005, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105029: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105029, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            & ((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U))) 
                                     | (1U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (2U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
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
                                               >> 4U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            & ((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U))) 
                                     | (1U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (2U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
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
                                               >> 4U))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105053: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105053, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            & (0U == (0x40000000U & 
                                      (0x40000000U 
                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            & (0U == (0x40000000U & 
                                      (0x40000000U 
                                       ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105077: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105077, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105101: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105101, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105125: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105125, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105149: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105149, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105173: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105173, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105197: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105197, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))))) 
                            & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))))) 
                            & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105221: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105221, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105245: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105245, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105269: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105269, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105293: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105293, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105317: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105317, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))))) 
                            & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                             & ((((((((0U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U))) 
                                      | (1U == (7U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                     | (2U == (7U & 
                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (3U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                   | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                >> 4U))))) 
                            & ((8U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                               & (0U == (0x40000000U 
                                         & (0x40000000U 
                                            ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105341: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105341, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105365: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105365, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105389: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105389, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105413: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105413, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105437: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105437, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105461: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105461, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105485: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105485, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105509: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105509, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105533: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105533, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105557: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105557, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105581: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105581, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105605: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105605, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105629: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105629, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105653: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105653, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105677: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105677, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105701: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105701, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105725: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105725, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x7fffffU 
                                                  & ((IData)(0xffU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105749: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105749, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105773: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105773, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105797: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105797, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105821: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105821, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                    ? 1U : 0U)) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                    ? 1U : 0U)) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105845: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105845, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105869: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105869, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105893: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105893, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105917: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105917, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105941: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105941, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105965: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105965, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:105989: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 105989, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106013: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106013, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (4U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106037: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106037, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106061: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106061, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ (IData)(vlTOPp->reset))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106085: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106085, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((3U 
                                                   <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106109: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106109, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (5U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106133: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106133, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106157: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106157, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106181: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106181, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106205: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106205, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (1U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
                                                   | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106229: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106229, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((((((((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U))) 
                                                         | (1U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                                >> 4U)))) 
                                                        | (2U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                               >> 4U)))) 
                                                       | (3U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                              >> 4U)))) 
                                                      | (4U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                             >> 4U)))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                            >> 4U)))) 
                                                    | (6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                           >> 4U)))) 
                                                   | (7U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                                                          >> 4U)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106253: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106253, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (2U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((~ 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106277: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106277, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106301: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106301, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106325: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106325, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106349: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106349, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106373: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106373, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((0x7fffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address) 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((0x7fffffffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address) 
                            == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__address) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106397: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106397, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                              ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106421: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106421, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106445: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106445, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106469: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106469, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106493: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106493, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2505, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2505[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2506, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2506[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106517: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106517, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2507, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((__Vtemp2507[0U] 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2508, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 ((__Vtemp2508[0U] 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                       & (0U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)))) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106541: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106541, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                               ? 1U : 0U) == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_30)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                               ? 1U : 0U) == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                               ? 4U
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_30)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106565: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106565, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106589: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106589, "");
    }
    __Vtemp2511[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2511[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2511[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2511[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2511[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2511[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2511[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2511[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2511[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2511[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2511[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2511[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2511[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2511[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2511[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2511[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2512, __Vtemp2511);
    __Vtemp2515[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2515[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2515[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2515[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2515[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2515[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2515[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2515[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2515[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2515[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2515[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2515[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2515[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2515[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2515[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2515[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2516, __Vtemp2515);
    __Vtemp2519[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2519[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2519[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2519[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2519[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2519[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2519[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2519[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2519[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2519[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2519[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2519[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2519[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2519[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2519[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2519[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2520, __Vtemp2519);
    __Vtemp2523[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2523[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2523[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2523[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2523[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2523[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2523[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2523[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2523[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2523[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2523[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2523[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2523[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2523[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2523[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2523[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2524, __Vtemp2523);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                               ? 1U : 0U) == ((7U == 
                                               (7U 
                                                & __Vtemp2512[0U]))
                                               ? 4U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp2516[0U]))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_46)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp2520[0U]))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp2524[0U]))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2527[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2527[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2527[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2527[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2527[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2527[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2527[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2527[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2527[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2527[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2527[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2527[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2527[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2527[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2527[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2527[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2528, __Vtemp2527);
    __Vtemp2531[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2531[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2531[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2531[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2531[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2531[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2531[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2531[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2531[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2531[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2531[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2531[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2531[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2531[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2531[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2531[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2532, __Vtemp2531);
    __Vtemp2535[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2535[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2535[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2535[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2535[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2535[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2535[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2535[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2535[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2535[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2535[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2535[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2535[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2535[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2535[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2535[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2536, __Vtemp2535);
    __Vtemp2539[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2539[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2539[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2539[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2539[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2539[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2539[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2539[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2539[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2539[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2539[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2539[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2539[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2539[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2539[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2539[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2540, __Vtemp2539);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                               ? 1U : 0U) == ((7U == 
                                               (7U 
                                                & __Vtemp2528[0U]))
                                               ? 4U
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp2532[0U]))
                                                   ? 4U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_46)))) 
                            | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U) == ((7U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp2536[0U]))
                                                 ? 4U
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp2540[0U]))
                                                  ? 5U
                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106613: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106613, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2541, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2544[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2541[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2541[0U]) 
                                              >> 1U)));
    __Vtemp2544[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2541[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2541[1U]) 
                                              >> 1U)));
    __Vtemp2544[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2541[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2541[2U]) 
                                              >> 1U)));
    __Vtemp2544[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2541[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2541[3U]) 
                                              >> 1U)));
    __Vtemp2544[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2541[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2541[4U]) 
                                              >> 1U)));
    __Vtemp2544[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2541[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2541[5U]) 
                                              >> 1U)));
    __Vtemp2544[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2541[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2541[6U]) 
                                              >> 1U)));
    __Vtemp2544[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2541[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2541[7U]) 
                                              >> 1U)));
    __Vtemp2544[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2541[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2541[8U]) 
                                              >> 1U)));
    __Vtemp2544[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2541[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2541[9U]) 
                                              >> 1U)));
    __Vtemp2544[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2541[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2541[0xaU]) 
                                                  >> 1U)));
    __Vtemp2544[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2541[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2541[0xbU]) 
                                                  >> 1U)));
    __Vtemp2544[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2541[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2541[0xcU]) 
                                                  >> 1U)));
    __Vtemp2544[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2541[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2541[0xdU]) 
                                                  >> 1U)));
    __Vtemp2544[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2541[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2541[0xeU]) 
                                                  >> 1U)));
    __Vtemp2544[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2541[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2541[0xfU]) 
                                                  >> 1U)));
    __Vtemp2544[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2541[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2541[0x10U]) 
                                                    >> 1U)));
    __Vtemp2544[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2541[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2541[0x11U]) 
                                                    >> 1U)));
    __Vtemp2544[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2541[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2541[0x12U]) 
                                                    >> 1U)));
    __Vtemp2544[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2541[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2541[0x13U]) 
                                                    >> 1U)));
    __Vtemp2544[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2541[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2541[0x14U]) 
                                                    >> 1U)));
    __Vtemp2544[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2541[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2541[0x15U]) 
                                                    >> 1U)));
    __Vtemp2544[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2541[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2541[0x16U]) 
                                                    >> 1U)));
    __Vtemp2544[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2541[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2541[0x17U]) 
                                                    >> 1U)));
    __Vtemp2544[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2541[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2541[0x18U]) 
                                                    >> 1U)));
    __Vtemp2544[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2541[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2541[0x19U]) 
                                                    >> 1U)));
    __Vtemp2544[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2541[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2541[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2544[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2541[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2541[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2544[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2541[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2541[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2544[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2541[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2541[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2544[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2541[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2541[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2544[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2541[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2545, __Vtemp2544);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp2545[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2546, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2549[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2546[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2546[0U]) 
                                              >> 1U)));
    __Vtemp2549[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2546[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2546[1U]) 
                                              >> 1U)));
    __Vtemp2549[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2546[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2546[2U]) 
                                              >> 1U)));
    __Vtemp2549[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2546[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2546[3U]) 
                                              >> 1U)));
    __Vtemp2549[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2546[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2546[4U]) 
                                              >> 1U)));
    __Vtemp2549[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2546[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2546[5U]) 
                                              >> 1U)));
    __Vtemp2549[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2546[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2546[6U]) 
                                              >> 1U)));
    __Vtemp2549[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2546[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2546[7U]) 
                                              >> 1U)));
    __Vtemp2549[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2546[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2546[8U]) 
                                              >> 1U)));
    __Vtemp2549[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2546[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2546[9U]) 
                                              >> 1U)));
    __Vtemp2549[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2546[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2546[0xaU]) 
                                                  >> 1U)));
    __Vtemp2549[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2546[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2546[0xbU]) 
                                                  >> 1U)));
    __Vtemp2549[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2546[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2546[0xcU]) 
                                                  >> 1U)));
    __Vtemp2549[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2546[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2546[0xdU]) 
                                                  >> 1U)));
    __Vtemp2549[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2546[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2546[0xeU]) 
                                                  >> 1U)));
    __Vtemp2549[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2546[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2546[0xfU]) 
                                                  >> 1U)));
    __Vtemp2549[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2546[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2546[0x10U]) 
                                                    >> 1U)));
    __Vtemp2549[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2546[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2546[0x11U]) 
                                                    >> 1U)));
    __Vtemp2549[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2546[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2546[0x12U]) 
                                                    >> 1U)));
    __Vtemp2549[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2546[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2546[0x13U]) 
                                                    >> 1U)));
    __Vtemp2549[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2546[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2546[0x14U]) 
                                                    >> 1U)));
    __Vtemp2549[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2546[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2546[0x15U]) 
                                                    >> 1U)));
    __Vtemp2549[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2546[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2546[0x16U]) 
                                                    >> 1U)));
    __Vtemp2549[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2546[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2546[0x17U]) 
                                                    >> 1U)));
    __Vtemp2549[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2546[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2546[0x18U]) 
                                                    >> 1U)));
    __Vtemp2549[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2546[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2546[0x19U]) 
                                                    >> 1U)));
    __Vtemp2549[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2546[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2546[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2549[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2546[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2546[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2549[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2546[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2546[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2549[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2546[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2546[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2549[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2546[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2546[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2549[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2546[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2550, __Vtemp2549);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                  ? 1U : 0U))) & (~ 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & __Vtemp2550[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106637: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106637, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_d_ready)) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_ready)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source))) 
                      & (6U != ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_1_d_ready)) 
                                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_ready)) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106659: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106659, "");
    }
    __Vtemp2551[0U] = 1U;
    __Vtemp2551[1U] = 0U;
    __Vtemp2551[2U] = 0U;
    __Vtemp2551[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2552, __Vtemp2551, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2552[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp2552[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp2552[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2552[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2556[0U] = 1U;
    __Vtemp2556[1U] = 0U;
    __Vtemp2556[2U] = 0U;
    __Vtemp2556[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2557, __Vtemp2556, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2557[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != 
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                     ? 1U
                                                     : 0U)))
                                                ? __Vtemp2557[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                    ? 1U
                                                    : 0U)))
                                               ? __Vtemp2557[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != 
                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                                   ? 1U
                                                   : 0U)))
                                              ? __Vtemp2557[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106683: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106683, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106707: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106707, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2561, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (__Vtemp2561[0U] 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2562, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (__Vtemp2562[0U] 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106731: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106731, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2563, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2566[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2563[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2563[0U]) 
                                              >> 1U)));
    __Vtemp2566[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2563[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2563[1U]) 
                                              >> 1U)));
    __Vtemp2566[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2563[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2563[2U]) 
                                              >> 1U)));
    __Vtemp2566[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2563[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2563[3U]) 
                                              >> 1U)));
    __Vtemp2566[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2563[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2563[4U]) 
                                              >> 1U)));
    __Vtemp2566[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2563[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2563[5U]) 
                                              >> 1U)));
    __Vtemp2566[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2563[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2563[6U]) 
                                              >> 1U)));
    __Vtemp2566[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2563[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2563[7U]) 
                                              >> 1U)));
    __Vtemp2566[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2563[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2563[8U]) 
                                              >> 1U)));
    __Vtemp2566[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2563[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2563[9U]) 
                                              >> 1U)));
    __Vtemp2566[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2563[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2563[0xaU]) 
                                                  >> 1U)));
    __Vtemp2566[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2563[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2563[0xbU]) 
                                                  >> 1U)));
    __Vtemp2566[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2563[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2563[0xcU]) 
                                                  >> 1U)));
    __Vtemp2566[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2563[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2563[0xdU]) 
                                                  >> 1U)));
    __Vtemp2566[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2563[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2563[0xeU]) 
                                                  >> 1U)));
    __Vtemp2566[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2563[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2563[0xfU]) 
                                                  >> 1U)));
    __Vtemp2566[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2563[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2563[0x10U]) 
                                                    >> 1U)));
    __Vtemp2566[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2563[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2563[0x11U]) 
                                                    >> 1U)));
    __Vtemp2566[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2563[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2563[0x12U]) 
                                                    >> 1U)));
    __Vtemp2566[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2563[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2563[0x13U]) 
                                                    >> 1U)));
    __Vtemp2566[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2563[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2563[0x14U]) 
                                                    >> 1U)));
    __Vtemp2566[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2563[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2563[0x15U]) 
                                                    >> 1U)));
    __Vtemp2566[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2563[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2563[0x16U]) 
                                                    >> 1U)));
    __Vtemp2566[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2563[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2563[0x17U]) 
                                                    >> 1U)));
    __Vtemp2566[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2563[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2563[0x18U]) 
                                                    >> 1U)));
    __Vtemp2566[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2563[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2563[0x19U]) 
                                                    >> 1U)));
    __Vtemp2566[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2563[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2563[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2566[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2563[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2563[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2566[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2563[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2563[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2566[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2563[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2563[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2566[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2563[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2563[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2566[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2563[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2567, __Vtemp2566);
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size) 
                                                   == 
                                                   (0xffU 
                                                    & __Vtemp2567[0U])) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp2568, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp2571[0U] = (__Vconst2271[0U] & (((__Vconst2272[1U] 
                                             & __Vtemp2568[1U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[0U] 
                                               & __Vtemp2568[0U]) 
                                              >> 1U)));
    __Vtemp2571[1U] = (__Vconst2271[1U] & (((__Vconst2272[2U] 
                                             & __Vtemp2568[2U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[1U] 
                                               & __Vtemp2568[1U]) 
                                              >> 1U)));
    __Vtemp2571[2U] = (__Vconst2271[2U] & (((__Vconst2272[3U] 
                                             & __Vtemp2568[3U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[2U] 
                                               & __Vtemp2568[2U]) 
                                              >> 1U)));
    __Vtemp2571[3U] = (__Vconst2271[3U] & (((__Vconst2272[4U] 
                                             & __Vtemp2568[4U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[3U] 
                                               & __Vtemp2568[3U]) 
                                              >> 1U)));
    __Vtemp2571[4U] = (__Vconst2271[4U] & (((__Vconst2272[5U] 
                                             & __Vtemp2568[5U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[4U] 
                                               & __Vtemp2568[4U]) 
                                              >> 1U)));
    __Vtemp2571[5U] = (__Vconst2271[5U] & (((__Vconst2272[6U] 
                                             & __Vtemp2568[6U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[5U] 
                                               & __Vtemp2568[5U]) 
                                              >> 1U)));
    __Vtemp2571[6U] = (__Vconst2271[6U] & (((__Vconst2272[7U] 
                                             & __Vtemp2568[7U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[6U] 
                                               & __Vtemp2568[6U]) 
                                              >> 1U)));
    __Vtemp2571[7U] = (__Vconst2271[7U] & (((__Vconst2272[8U] 
                                             & __Vtemp2568[8U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[7U] 
                                               & __Vtemp2568[7U]) 
                                              >> 1U)));
    __Vtemp2571[8U] = (__Vconst2271[8U] & (((__Vconst2272[9U] 
                                             & __Vtemp2568[9U]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[8U] 
                                               & __Vtemp2568[8U]) 
                                              >> 1U)));
    __Vtemp2571[9U] = (__Vconst2271[9U] & (((__Vconst2272[0xaU] 
                                             & __Vtemp2568[0xaU]) 
                                            << 0x1fU) 
                                           | ((__Vconst2272[9U] 
                                               & __Vtemp2568[9U]) 
                                              >> 1U)));
    __Vtemp2571[0xaU] = (__Vconst2271[0xaU] & (((__Vconst2272[0xbU] 
                                                 & __Vtemp2568[0xbU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xaU] 
                                                   & __Vtemp2568[0xaU]) 
                                                  >> 1U)));
    __Vtemp2571[0xbU] = (__Vconst2271[0xbU] & (((__Vconst2272[0xcU] 
                                                 & __Vtemp2568[0xcU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xbU] 
                                                   & __Vtemp2568[0xbU]) 
                                                  >> 1U)));
    __Vtemp2571[0xcU] = (__Vconst2271[0xcU] & (((__Vconst2272[0xdU] 
                                                 & __Vtemp2568[0xdU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xcU] 
                                                   & __Vtemp2568[0xcU]) 
                                                  >> 1U)));
    __Vtemp2571[0xdU] = (__Vconst2271[0xdU] & (((__Vconst2272[0xeU] 
                                                 & __Vtemp2568[0xeU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xdU] 
                                                   & __Vtemp2568[0xdU]) 
                                                  >> 1U)));
    __Vtemp2571[0xeU] = (__Vconst2271[0xeU] & (((__Vconst2272[0xfU] 
                                                 & __Vtemp2568[0xfU]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xeU] 
                                                   & __Vtemp2568[0xeU]) 
                                                  >> 1U)));
    __Vtemp2571[0xfU] = (__Vconst2271[0xfU] & (((__Vconst2272[0x10U] 
                                                 & __Vtemp2568[0x10U]) 
                                                << 0x1fU) 
                                               | ((__Vconst2272[0xfU] 
                                                   & __Vtemp2568[0xfU]) 
                                                  >> 1U)));
    __Vtemp2571[0x10U] = (__Vconst2271[0x10U] & (((
                                                   __Vconst2272[0x11U] 
                                                   & __Vtemp2568[0x11U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x10U] 
                                                     & __Vtemp2568[0x10U]) 
                                                    >> 1U)));
    __Vtemp2571[0x11U] = (__Vconst2271[0x11U] & (((
                                                   __Vconst2272[0x12U] 
                                                   & __Vtemp2568[0x12U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x11U] 
                                                     & __Vtemp2568[0x11U]) 
                                                    >> 1U)));
    __Vtemp2571[0x12U] = (__Vconst2271[0x12U] & (((
                                                   __Vconst2272[0x13U] 
                                                   & __Vtemp2568[0x13U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x12U] 
                                                     & __Vtemp2568[0x12U]) 
                                                    >> 1U)));
    __Vtemp2571[0x13U] = (__Vconst2271[0x13U] & (((
                                                   __Vconst2272[0x14U] 
                                                   & __Vtemp2568[0x14U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x13U] 
                                                     & __Vtemp2568[0x13U]) 
                                                    >> 1U)));
    __Vtemp2571[0x14U] = (__Vconst2271[0x14U] & (((
                                                   __Vconst2272[0x15U] 
                                                   & __Vtemp2568[0x15U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x14U] 
                                                     & __Vtemp2568[0x14U]) 
                                                    >> 1U)));
    __Vtemp2571[0x15U] = (__Vconst2271[0x15U] & (((
                                                   __Vconst2272[0x16U] 
                                                   & __Vtemp2568[0x16U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x15U] 
                                                     & __Vtemp2568[0x15U]) 
                                                    >> 1U)));
    __Vtemp2571[0x16U] = (__Vconst2271[0x16U] & (((
                                                   __Vconst2272[0x17U] 
                                                   & __Vtemp2568[0x17U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x16U] 
                                                     & __Vtemp2568[0x16U]) 
                                                    >> 1U)));
    __Vtemp2571[0x17U] = (__Vconst2271[0x17U] & (((
                                                   __Vconst2272[0x18U] 
                                                   & __Vtemp2568[0x18U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x17U] 
                                                     & __Vtemp2568[0x17U]) 
                                                    >> 1U)));
    __Vtemp2571[0x18U] = (__Vconst2271[0x18U] & (((
                                                   __Vconst2272[0x19U] 
                                                   & __Vtemp2568[0x19U]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x18U] 
                                                     & __Vtemp2568[0x18U]) 
                                                    >> 1U)));
    __Vtemp2571[0x19U] = (__Vconst2271[0x19U] & (((
                                                   __Vconst2272[0x1aU] 
                                                   & __Vtemp2568[0x1aU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x19U] 
                                                     & __Vtemp2568[0x19U]) 
                                                    >> 1U)));
    __Vtemp2571[0x1aU] = (__Vconst2271[0x1aU] & (((
                                                   __Vconst2272[0x1bU] 
                                                   & __Vtemp2568[0x1bU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1aU] 
                                                     & __Vtemp2568[0x1aU]) 
                                                    >> 1U)));
    __Vtemp2571[0x1bU] = (__Vconst2271[0x1bU] & (((
                                                   __Vconst2272[0x1cU] 
                                                   & __Vtemp2568[0x1cU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1bU] 
                                                     & __Vtemp2568[0x1bU]) 
                                                    >> 1U)));
    __Vtemp2571[0x1cU] = (__Vconst2271[0x1cU] & (((
                                                   __Vconst2272[0x1dU] 
                                                   & __Vtemp2568[0x1dU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1cU] 
                                                     & __Vtemp2568[0x1cU]) 
                                                    >> 1U)));
    __Vtemp2571[0x1dU] = (__Vconst2271[0x1dU] & (((
                                                   __Vconst2272[0x1eU] 
                                                   & __Vtemp2568[0x1eU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1dU] 
                                                     & __Vtemp2568[0x1dU]) 
                                                    >> 1U)));
    __Vtemp2571[0x1eU] = (__Vconst2271[0x1eU] & (((
                                                   __Vconst2272[0x1fU] 
                                                   & __Vtemp2568[0x1fU]) 
                                                  << 0x1fU) 
                                                 | ((__Vconst2272[0x1eU] 
                                                     & __Vtemp2568[0x1eU]) 
                                                    >> 1U)));
    __Vtemp2571[0x1fU] = (__Vconst2271[0x1fU] & ((__Vconst2272[0x1fU] 
                                                  & __Vtemp2568[0x1fU]) 
                                                 >> 1U));
    VL_EXTEND_WW(1024,1023, __Vtemp2572, __Vtemp2571);
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                                 ? 1U : 0U))) & (~ 
                                                 (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size) 
                                                   == 
                                                   (0xffU 
                                                    & __Vtemp2572[0U])) 
                                                  | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106755: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106755, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:136:22)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog_1 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:106779: Assertion failed in %NTestHarness.ldut.fpga.tl2axi4_1.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 106779, "");
    }
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeat_count 
        = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeat_count;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value;
    vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_0)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                               & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_2)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_0)) 
                                | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                               & ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_2)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90820: Assertion failed in %NTestHarness.ldut.fpga.xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90820, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_valid) 
                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_valid))) 
                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_1)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_valid) 
                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_valid))) 
                               | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_1)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__earlyWinner_2))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90844: Assertion failed in %NTestHarness.ldut.fpga.xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90844, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_valid) 
                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT___T_15)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_valid) 
                                    | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2_auto_in_d_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT___T_15)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:90868: Assertion failed in %NTestHarness.ldut.fpga.xbar\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 90868, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                                      & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid))))) 
                               | (0U != ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:169 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full)) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                                      & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid))))) 
                               | (0U != ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:145069: Assertion failed in %NTestHarness.ldut.mem.axi4frag\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 145069, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                                    & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)))) 
                                | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                       ? vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__deq_io_deq_bits_last)))) 
                               | (1U == ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:178 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                                    & ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)))) 
                                | (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                       ? vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__deq_io_deq_bits_last)))) 
                               | (1U == ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:145092: Assertion failed in %NTestHarness.ldut.mem.axi4frag\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 145092, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_source__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15555: Assertion failed in %NTestHarness.ldut.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 15555, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15579: Assertion failed in %NTestHarness.ldut.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 15579, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:15603: Assertion failed in %NTestHarness.ldut.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 15603, "");
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__idle) 
                               | (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__counter))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10182: Assertion failed in %NTestHarness.ldut.asic.chipMaster.ferr\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 10182, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10206: Assertion failed in %NTestHarness.ldut.asic.chipMaster.ferr\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 10206, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:10230: Assertion failed in %NTestHarness.ldut.asic.chipMaster.ferr\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 10230, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135672: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135672, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135696: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135696, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135720: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135720, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135744: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135744, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135768: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135768, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135792: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135792, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135816: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135816, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135840: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135840, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135864: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135864, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                           >> 4U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135888: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135888, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135912: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135912, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135936: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135936, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135960: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135960, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:135984: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 135984, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136008: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136008, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136032: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136032, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136056: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136056, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136080: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136080, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136104: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136104, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136128: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136128, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136152: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136152, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136176: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136176, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136200: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136200, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136224: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136224, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136248: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136248, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136272: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136272, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136296: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136296, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136320: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136320, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136344: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136344, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136368: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136368, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136392: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136392, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136416: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136416, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136440: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136440, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136464: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136464, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136488: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136488, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136512: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136512, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136536: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136536, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136560: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136560, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136584: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136584, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136608: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136608, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136632: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136632, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136656: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136656, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136680: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136680, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136704: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136704, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
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
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136728: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136728, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136752: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136752, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136776: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136776, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136800: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136800, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_mask) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__mask)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136824: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136824, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136848: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136848, "");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136872: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136872, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136896: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136896, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136920: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136920, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136944: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136944, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136968: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136968, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:136992: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 136992, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137016: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137016, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137040: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137040, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137064: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137064, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137088: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137088, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137112: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137112, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137136: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137136, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137160: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137160, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137184: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137184, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137208: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137208, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137232: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137232, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137256: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137256, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137280: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137280, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137304: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137304, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137328: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137328, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137352: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137352, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied)) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137376: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137376, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U))) 
                                  | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (2U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                 >> 4U)))) 
                                | (3U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                                >> 4U)))) 
                               | (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                               >> 4U)))) 
                              | (5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                              >> 4U)))) 
                             | (6U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                             >> 4U)))) 
                            | (7U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                                            >> 4U)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137400: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137400, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137424: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137424, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_corrupt) 
                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__corrupt_reg))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137448: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137448, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137472: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137472, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137496: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137496, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137520: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137520, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137544: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137544, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137568: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137568, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137592: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137592, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137616: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137616, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137640: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137640, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137664: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137664, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137688: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137688, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137712: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137712, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137736: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137736, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137760: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137760, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137784: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137784, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137808: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137808, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137832: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137832, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((((((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
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
                            & ((6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137856: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137856, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                           >> 3U))) 
                             & (6U >= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137880: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137880, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137904: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137904, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137928: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137928, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137952: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137952, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:137976: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 137976, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138000: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138000, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138024: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138024, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138048: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138048, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138072: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138072, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138096: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138096, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138120: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138120, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138144: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138144, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138168: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138168, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138192: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138192, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138216: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138216, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address 
                                            & (~ (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)))))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138240: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138240, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138264: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138264, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138288: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138288, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138312: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138312, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138336: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138336, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138360: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138360, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138384: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138384, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138408: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138408, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138432: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138432, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138456: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138456, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138480: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138480, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_denied) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__denied)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138504: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138504, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138528: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138528, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_param) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138552: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138552, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138576: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138576, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138600: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138600, "");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                      & (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter))) 
                     & (~ (((0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address_2)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138624: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138624, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2573, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2573[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2574, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                     & (~ ((~ __Vtemp2574[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138648: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138648, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2575, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2575[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2576, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2576[0U] | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138672: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138672, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138696: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138696, "");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138720: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138720, "");
    }
    __Vtemp2579[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2579[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2579[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2579[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2579[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2579[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2579[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2579[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2579[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2579[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2579[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2579[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2579[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2579[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2579[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2579[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2580, __Vtemp2579);
    __Vtemp2583[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2583[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2583[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2583[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2583[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2583[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2583[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2583[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2583[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2583[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2583[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2583[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2583[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2583[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2583[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2583[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2584, __Vtemp2583);
    __Vtemp2587[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2587[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2587[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2587[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2587[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2587[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2587[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2587[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2587[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2587[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2587[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2587[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2587[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2587[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2587[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2587[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2588, __Vtemp2587);
    __Vtemp2591[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2591[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2591[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2591[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2591[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2591[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2591[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2591[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2591[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2591[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2591[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2591[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2591[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2591[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2591[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2591[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2592, __Vtemp2591);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2580[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2584[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2588[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2592[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2595[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2595[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2595[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2595[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2595[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2595[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2595[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2595[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2595[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2595[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2595[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2595[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2595[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2595[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2595[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2595[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2596, __Vtemp2595);
    __Vtemp2599[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2599[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2599[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2599[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2599[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2599[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2599[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2599[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2599[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2599[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2599[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2599[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2599[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2599[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2599[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2599[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2600, __Vtemp2599);
    __Vtemp2603[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2603[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2603[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2603[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2603[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2603[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2603[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2603[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2603[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2603[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2603[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2603[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2603[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2603[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2603[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2603[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2604, __Vtemp2603);
    __Vtemp2607[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                             >> 1U)));
    __Vtemp2607[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U]) 
                                             >> 1U)));
    __Vtemp2607[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U]) 
                                             >> 1U)));
    __Vtemp2607[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U]) 
                                             >> 1U)));
    __Vtemp2607[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U]) 
                                             >> 1U)));
    __Vtemp2607[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U]) 
                                             >> 1U)));
    __Vtemp2607[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U]) 
                                             >> 1U)));
    __Vtemp2607[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U]) 
                                             >> 1U)));
    __Vtemp2607[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U]) 
                                             >> 1U)));
    __Vtemp2607[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U]) 
                                             >> 1U)));
    __Vtemp2607[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU]) 
                                                 >> 1U)));
    __Vtemp2607[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU]) 
                                                 >> 1U)));
    __Vtemp2607[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU]) 
                                                 >> 1U)));
    __Vtemp2607[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU]) 
                                                 >> 1U)));
    __Vtemp2607[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU]) 
                                                 >> 1U)));
    __Vtemp2607[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2608, __Vtemp2607);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source))))) 
                     & (~ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                             == ((7U == (7U & __Vtemp2596[0U]))
                                  ? 4U : ((6U == (7U 
                                                  & __Vtemp2600[0U]))
                                           ? 4U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode) 
                               == ((7U == (7U & __Vtemp2604[0U]))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              __Vtemp2608[0U]))
                                             ? 5U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138744: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138744, "");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2609, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2612[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2609[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2609[0U]) 
                                             >> 1U)));
    __Vtemp2612[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2609[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2609[1U]) 
                                             >> 1U)));
    __Vtemp2612[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2609[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2609[2U]) 
                                             >> 1U)));
    __Vtemp2612[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2609[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2609[3U]) 
                                             >> 1U)));
    __Vtemp2612[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2609[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2609[4U]) 
                                             >> 1U)));
    __Vtemp2612[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2609[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2609[5U]) 
                                             >> 1U)));
    __Vtemp2612[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2609[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2609[6U]) 
                                             >> 1U)));
    __Vtemp2612[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2609[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2609[7U]) 
                                             >> 1U)));
    __Vtemp2612[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2609[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2609[8U]) 
                                             >> 1U)));
    __Vtemp2612[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2609[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2609[9U]) 
                                             >> 1U)));
    __Vtemp2612[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2609[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2609[0xaU]) 
                                                 >> 1U)));
    __Vtemp2612[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2609[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2609[0xbU]) 
                                                 >> 1U)));
    __Vtemp2612[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2609[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2609[0xcU]) 
                                                 >> 1U)));
    __Vtemp2612[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2609[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2609[0xdU]) 
                                                 >> 1U)));
    __Vtemp2612[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2609[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2609[0xeU]) 
                                                 >> 1U)));
    __Vtemp2612[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2609[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2613, __Vtemp2612);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2613[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,10, __Vtemp2614, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source) 
                   << 2U));
    __Vtemp2617[0U] = (__Vconst141[0U] & (((__Vconst142[1U] 
                                            & __Vtemp2614[1U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[0U] 
                                              & __Vtemp2614[0U]) 
                                             >> 1U)));
    __Vtemp2617[1U] = (__Vconst141[1U] & (((__Vconst142[2U] 
                                            & __Vtemp2614[2U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[1U] 
                                              & __Vtemp2614[1U]) 
                                             >> 1U)));
    __Vtemp2617[2U] = (__Vconst141[2U] & (((__Vconst142[3U] 
                                            & __Vtemp2614[3U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[2U] 
                                              & __Vtemp2614[2U]) 
                                             >> 1U)));
    __Vtemp2617[3U] = (__Vconst141[3U] & (((__Vconst142[4U] 
                                            & __Vtemp2614[4U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[3U] 
                                              & __Vtemp2614[3U]) 
                                             >> 1U)));
    __Vtemp2617[4U] = (__Vconst141[4U] & (((__Vconst142[5U] 
                                            & __Vtemp2614[5U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[4U] 
                                              & __Vtemp2614[4U]) 
                                             >> 1U)));
    __Vtemp2617[5U] = (__Vconst141[5U] & (((__Vconst142[6U] 
                                            & __Vtemp2614[6U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[5U] 
                                              & __Vtemp2614[5U]) 
                                             >> 1U)));
    __Vtemp2617[6U] = (__Vconst141[6U] & (((__Vconst142[7U] 
                                            & __Vtemp2614[7U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[6U] 
                                              & __Vtemp2614[6U]) 
                                             >> 1U)));
    __Vtemp2617[7U] = (__Vconst141[7U] & (((__Vconst142[8U] 
                                            & __Vtemp2614[8U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[7U] 
                                              & __Vtemp2614[7U]) 
                                             >> 1U)));
    __Vtemp2617[8U] = (__Vconst141[8U] & (((__Vconst142[9U] 
                                            & __Vtemp2614[9U]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[8U] 
                                              & __Vtemp2614[8U]) 
                                             >> 1U)));
    __Vtemp2617[9U] = (__Vconst141[9U] & (((__Vconst142[0xaU] 
                                            & __Vtemp2614[0xaU]) 
                                           << 0x1fU) 
                                          | ((__Vconst142[9U] 
                                              & __Vtemp2614[9U]) 
                                             >> 1U)));
    __Vtemp2617[0xaU] = (__Vconst141[0xaU] & (((__Vconst142[0xbU] 
                                                & __Vtemp2614[0xbU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xaU] 
                                                  & __Vtemp2614[0xaU]) 
                                                 >> 1U)));
    __Vtemp2617[0xbU] = (__Vconst141[0xbU] & (((__Vconst142[0xcU] 
                                                & __Vtemp2614[0xcU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xbU] 
                                                  & __Vtemp2614[0xbU]) 
                                                 >> 1U)));
    __Vtemp2617[0xcU] = (__Vconst141[0xcU] & (((__Vconst142[0xdU] 
                                                & __Vtemp2614[0xdU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xcU] 
                                                  & __Vtemp2614[0xcU]) 
                                                 >> 1U)));
    __Vtemp2617[0xdU] = (__Vconst141[0xdU] & (((__Vconst142[0xeU] 
                                                & __Vtemp2614[0xeU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xdU] 
                                                  & __Vtemp2614[0xdU]) 
                                                 >> 1U)));
    __Vtemp2617[0xeU] = (__Vconst141[0xeU] & (((__Vconst142[0xfU] 
                                                & __Vtemp2614[0xfU]) 
                                               << 0x1fU) 
                                              | ((__Vconst142[0xeU] 
                                                  & __Vtemp2614[0xeU]) 
                                                 >> 1U)));
    __Vtemp2617[0xfU] = (__Vconst141[0xfU] & ((__Vconst142[0xfU] 
                                               & __Vtemp2614[0xfU]) 
                                              >> 1U));
    VL_EXTEND_WW(512,511, __Vtemp2618, __Vtemp2617);
    if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                      & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source))))) 
                     & (~ (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size) 
                            == (0xfU & __Vtemp2618[0U])) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138768: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138768, "");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_a_valid)) 
                       & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_source) 
                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source))) 
                      & (6U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_out_2_d_ready)) 
                            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_enq_ready)) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138790: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138790, "");
    }
    __Vtemp2619[0U] = 1U;
    __Vtemp2619[1U] = 0U;
    __Vtemp2619[2U] = 0U;
    __Vtemp2619[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2620, __Vtemp2619, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2620[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp2620[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                               ? __Vtemp2620[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2620[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp2624[0U] = 1U;
    __Vtemp2624[1U] = 0U;
    __Vtemp2624[2U] = 0U;
    __Vtemp2624[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp2625, __Vtemp2624, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ (((0U != ((((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2625[0U]
                                              : 0U)) 
                                         | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U] 
                                            ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                                ? __Vtemp2625[1U]
                                                : 0U))) 
                                        | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U] 
                                           ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                               ? __Vtemp2625[2U]
                                               : 0U))) 
                                       | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U] 
                                          ^ ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))) 
                                              & (6U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode)))
                                              ? __Vtemp2625[3U]
                                              : 0U)))) 
                               | (~ (IData)((0U != 
                                             (((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[0U] 
                                                | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[1U]) 
                                               | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[2U]) 
                                              | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_set_wo_ready[3U]))))) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138814: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138814, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)((0U != (
                                                   ((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
                                                     | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U]) 
                                                    | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U]) 
                                                   | vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U])))) 
                                | (0U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                               | (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog 
                                  < vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                              | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138838: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138838, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2629, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                     & (~ ((~ __Vtemp2629[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2630, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                     & (~ ((~ __Vtemp2630[0U]) | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138862: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138862, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2631, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2631[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:171:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp2632, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source));
    if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))) 
                     & (~ ((__Vtemp2632[0U] | ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1_auto_out_c_valid) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1))) 
                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2335)) 
                                               & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                                   << 1U) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_source)))) 
                           | (IData)(vlTOPp->reset)))))) {
        VL_WRITEF("[%0t] %%Error: ysyxSoCFull.v:138886: Assertion failed in %NTestHarness.ldut.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(100),-9,vlSymsp->name());
        VL_STOP_MT("/home/zzdywc/Desktop/oscpu-zzd/projects/soc/build_test/vsrc/ysyxSoCFull.v", 138886, "");
    }
}
