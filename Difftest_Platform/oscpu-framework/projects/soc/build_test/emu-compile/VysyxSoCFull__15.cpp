// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VysyxSoCFull::_sequent__TOP__39(VysyxSoCFull__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull::_sequent__TOP__39\n"); );
    VysyxSoCFull* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VlWide<16>/*511:0*/ __Vtemp3989;
    VlWide<3>/*95:0*/ __Vtemp3991;
    VlWide<3>/*95:0*/ __Vtemp3992;
    VlWide<3>/*95:0*/ __Vtemp3993;
    VlWide<3>/*95:0*/ __Vtemp3997;
    VlWide<3>/*95:0*/ __Vtemp3998;
    VlWide<3>/*95:0*/ __Vtemp3999;
    // Body
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__in_reset 
        = vlTOPp->reset;
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) {
        if ((0x3fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_63 
                = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) {
        if ((0x3eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_62 
                = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___T) {
        if ((0x3dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_61 
                = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__dc_bits_param 
        = ((2U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                   [0U])) ? 2U : ((1U == (3U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                                          [0U])) ? 2U
                                   : 1U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__beatsLeft 
        = ((IData)(vlTOPp->reset) ? 0U : (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__latch)
                                                   ? 
                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__earlyWinner_1)
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__da_bits_opcode))
                                                     ? 
                                                    (~ 
                                                     (0x7ffU 
                                                      & (((IData)(0x3fU) 
                                                          << 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                                          [0U]) 
                                                         >> 2U)))
                                                     : 0U)
                                                    : 0U)
                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT___beatsLeft_T_4))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT___T) {
        if ((0x3fU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_63 
                = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT___T) {
        if ((0x3eU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_62 
                = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT___T) {
        if ((0x3dU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_61 
                = (1U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                         >> 2U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass;
    } else if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__next_flight))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_io_bypass;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c_last_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c_last_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c_last_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c_last_counter)) 
           | (0U == ((1U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode
                      [0U]) ? (0xfU & (~ (0x7ffU & 
                                          (((IData)(0x3fU) 
                                            << vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__ram_size
                                            [0U]) >> 2U))))
                      : 0U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a_last_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a_last_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a_last_counter));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass;
    } else if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__next_flight))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_io_bypass;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free = 0xffU;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT___GEN_2 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state))
            ? 8U : (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                            - (IData)(1U))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_first)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first 
            = (3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__beatsLeft = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__beatsLeft 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__latch)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1)
                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag_auto_out_awlen)
                    : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT___beatsLeft_T_4));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first 
            = (3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7
                : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5
                        : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4
                            : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3
                                : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0)))))));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free = 0xffU;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free = 0xffU;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_T_2));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_T_2));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
            != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7
                : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5
                        : ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4
                            : ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3
                                : ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__index))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1
                                        : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0)))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__latch)
                                           ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1)
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen)
                                               : 0U)
                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___beatsLeft_T_4)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT___rcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__r_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT___rcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__r_count_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT___wcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__w_count_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT___wcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__w_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___do_enq_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___value_T_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___do_enq_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___value_T_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wcount_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wcount_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__do_enq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__do_enq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__empty)
                ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__empty)
                ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcause_t 
        = (((0x342U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcause_dff__DOT__qout_r);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__CoreLock 
        = (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__rw_ready) 
                    & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__rw_resp)))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1 = 0U;
    } else if ((1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                       >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_26)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last)
                ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___error_1_T));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0 = 0U;
    } else if ((3U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_26)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last)
                ? 0U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___error_0_T));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_last = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_awready) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_bid)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_last = 1U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_axi__DOT__w_state)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__latched)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__empty)
                ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_data = 0ULL;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_awready) 
                & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_bid)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_data 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__RamWriteEnable)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__ClintBus)
                    ? 0ULL : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__BusWriteData)
                : 0ULL);
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mepc_r 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__mepcWriteDataW_dff__DOT__qout_r
            : (((0x341U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mepc_dff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mtvec_t 
        = (((0x305U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mtvec_dff__DOT__qout_r);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_t 
        = (((0x300U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteAddrW_clk_diff__DOT__qout_r)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteEnableW_clk_diff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__csrWriteDataW_clk_diff__DOT__qout_r
            : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mstatus_dff__DOT__qout_r);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__LoadStoreE 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__BusReadEnableE_dff__DOT__qout_r) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__BusWriteEnableE_dff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs2Data 
        = ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__Redirect1_dff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
            : ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__Redirect2_dff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__rs2DataE_dff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs1Data 
        = ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__Redirect1_dff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rdWriteDataE_clk_diff__DOT__qout_r
            : ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__Redirect2_dff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_me_stage__DOT__rdWriteDataW_clk_diff__DOT__qout_r
                : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__rs1DataE_dff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__memFuncE_r 
        = (((IData)((3U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
            << 0xaU) | (((IData)((0x4003U == (0x707fU 
                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                         << 9U) | (((IData)((0x1003U 
                                             == (0x707fU 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                    << 8U) | (((IData)(
                                                       (0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                               << 7U) 
                                              | (((IData)(
                                                          (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0x6003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0x3003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0x23U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0x1023U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0x2023U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                 << 1U) 
                                                                | (IData)(
                                                                          (0x3023U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instFuncE_r 
        = ((((((IData)((0x33U == (0xfe00707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
               | (IData)((0x13U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
              | (IData)((0x3bU == (0xfe00707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
             | (IData)((0x1bU == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
            << 0xdU) | ((((IData)((0x40000033U == (0xfe00707fU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                          | (IData)((0x4000003bU == 
                                     (0xfe00707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                         << 0xcU) | ((((((IData)((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                         | (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                        | (IData)((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                       | (IData)((0x101bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                      << 0xbU) | ((
                                                   (((IData)(
                                                             (0x2033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                     | (IData)(
                                                               (0x2013U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                    | (IData)(
                                                              (0x4063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                   << 0xaU) 
                                                  | (((((IData)(
                                                                (0x3033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                        | (IData)(
                                                                  (0x3013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                       | (IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                      << 9U) 
                                                     | ((((((IData)(
                                                                    (0x5033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                            | (IData)(
                                                                      (0x5013U 
                                                                       == 
                                                                       (0xfc00707fU 
                                                                        & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                           | (IData)(
                                                                     (0x503bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                          | (IData)(
                                                                    (0x501bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                         << 8U) 
                                                        | ((((((IData)(
                                                                       (0x40005033U 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                               | (IData)(
                                                                         (0x40005013U 
                                                                          == 
                                                                          (0xfc00707fU 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                              | (IData)(
                                                                        (0x4000503bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                             | (IData)(
                                                                       (0x4000501bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                            << 7U) 
                                                           | ((((IData)(
                                                                        (0x4033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                | (IData)(
                                                                          (0x4013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                               << 6U) 
                                                              | ((((IData)(
                                                                           (0x6033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                   | (IData)(
                                                                             (0x6013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                                  << 5U) 
                                                                 | ((((IData)(
                                                                              (0x7033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                      | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)))) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                              << 1U) 
                                                                             | (IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRWI 
        = (IData)((0x5073U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRSI 
        = (IData)((0x6073U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRCI 
        = (IData)((0x7073U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Utype 
        = ((0x17U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
           | (0x37U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Itype 
        = (((((3U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
              | (0xfU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
             | (0x13U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
            | (0x1bU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
           | (0x67U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Rtype 
        = ((0x33U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
           | (0x3bU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRW 
        = (IData)((0x1073U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRS 
        = (IData)((0x2073U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRC 
        = (IData)((0x3073U == (0x707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_data_read = 0ULL;
    } else if ((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_ready) 
                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_in_rvalid)) 
                & (0U == ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___T_54) 
                          | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___T_55))))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_data_read 
            = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__muxState_2_0)
                 ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                     ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data
                    [0U] : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_bits_data)
                 : 0ULL) | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__muxState_2_1)
                             ? (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                    : 0U) 
                                                  | ((0U 
                                                      == 
                                                      (0x20001000U 
                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                      ? 
                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                       ? 
                                                      ((0xff000000U 
                                                        & (((4U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                             ? 
                                                            ((2U 
                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                              ? 
                                                             ((1U 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                              : 
                                                             ((1U 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                               : 0U))
                                                             : 
                                                            ((2U 
                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                              ? 
                                                             ((1U 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                               : 
                                                              (0xc0U 
                                                               | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                              : 
                                                             ((1U 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                               ? 
                                                              ((0x80U 
                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                ? 
                                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                >> 8U)
                                                                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                               : 
                                                              ((0x80U 
                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                : 
                                                               ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                >> 3U))))) 
                                                           << 0x18U)) 
                                                       | ((0xff0000U 
                                                           & (((4U 
                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                ? 
                                                               ((2U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? 
                                                                ((1U 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                  : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                 : 
                                                                ((1U 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                  : 0U))
                                                                : 
                                                               ((2U 
                                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                 ? 
                                                                ((1U 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                  ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                  : 
                                                                 (0xc0U 
                                                                  | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                 : 
                                                                ((1U 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                  ? 
                                                                 ((0x80U 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                   ? 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                   >> 8U)
                                                                   : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                  : 
                                                                 ((0x80U 
                                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                   : 
                                                                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                   >> 3U))))) 
                                                              << 0x10U)) 
                                                          | ((0xff00U 
                                                              & (((4U 
                                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                   ? 
                                                                  ((2U 
                                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                    ? 
                                                                   ((1U 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                     : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                    : 
                                                                   ((1U 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                     : 0U))
                                                                   : 
                                                                  ((2U 
                                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                    ? 
                                                                   ((1U 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                     : 
                                                                    (0xc0U 
                                                                     | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                    : 
                                                                   ((1U 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? 
                                                                    ((0x80U 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                      ? 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                      >> 8U)
                                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                     : 
                                                                    ((0x80U 
                                                                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                      : 
                                                                     ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                      >> 3U))))) 
                                                                 << 8U)) 
                                                             | (0xffU 
                                                                & ((4U 
                                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                    ? 
                                                                   ((2U 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? 
                                                                    ((1U 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                     : 
                                                                    ((1U 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                      : 0U))
                                                                    : 
                                                                   ((2U 
                                                                     & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                     ? 
                                                                    ((1U 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                      : 
                                                                     (0xc0U 
                                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                     : 
                                                                    ((1U 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                      ? 
                                                                     ((0x80U 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                       ? 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                       >> 8U)
                                                                       : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                      : 
                                                                     ((0x80U 
                                                                       & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                       : 
                                                                      ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                       >> 3U)))))))))
                                                       : 0U)
                                                      : 0U)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                                : 0U) 
                                                              | ((0U 
                                                                  == 
                                                                  (0x20001000U 
                                                                   & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr))
                                                                  ? 
                                                                 ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__apbxbar_auto_out_1_psel)
                                                                   ? 
                                                                  ((0xff000000U 
                                                                    & (((4U 
                                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                         ? 
                                                                        ((2U 
                                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((1U 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                          : 
                                                                         ((1U 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                           : 0U))
                                                                         : 
                                                                        ((2U 
                                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                          ? 
                                                                         ((1U 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                           : 
                                                                          (0xc0U 
                                                                           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                          : 
                                                                         ((1U 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                           ? 
                                                                          ((0x80U 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                            ? 
                                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                            >> 8U)
                                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                           : 
                                                                          ((0x80U 
                                                                            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                            : 
                                                                           ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                            >> 3U))))) 
                                                                       << 0x18U)) 
                                                                   | ((0xff0000U 
                                                                       & (((4U 
                                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                            ? 
                                                                           ((2U 
                                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((1U 
                                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                              : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                             : 
                                                                            ((1U 
                                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                              : 0U))
                                                                            : 
                                                                           ((2U 
                                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                             ? 
                                                                            ((1U 
                                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                              : 
                                                                             (0xc0U 
                                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                             : 
                                                                            ((1U 
                                                                              & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                              ? 
                                                                             ((0x80U 
                                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                               ? 
                                                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                               >> 8U)
                                                                               : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                              : 
                                                                             ((0x80U 
                                                                               & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                               : 
                                                                              ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                               >> 3U))))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & (((4U 
                                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                               ? 
                                                                              ((2U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? 
                                                                               ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                : 
                                                                               ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                               : 
                                                                              ((2U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? 
                                                                               ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                : 
                                                                               ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U))))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & ((4U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                ? 
                                                                               ((2U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr)
                                                                                 : 0U))
                                                                                : 
                                                                               ((2U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                                                                 : 
                                                                                (0xc0U 
                                                                                | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                                                                 : 
                                                                                ((1U 
                                                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_paddr)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                                                >> 8U)
                                                                                 : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                                                                 : 
                                                                                ((0x80U 
                                                                                & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                                                 ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                                                 : 
                                                                                ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_data_out) 
                                                                                >> 3U)))))))))
                                                                   : 0U)
                                                                  : 0U)))))
                             : 0ULL));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2;
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_3 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_1 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_1 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_3 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_1 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_1 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_14 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_12 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_12 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_25 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_23 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_23 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_36 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_34 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_34 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_47 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_45 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_45 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_14 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_12 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_12 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_25 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_23 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_23 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_36 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_34 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_34 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_47 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_45 
           | (0x3ffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_45 
                          >> 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_source_io_deq_bits_MPORT_data;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_enq_valid 
        = (0xffffU & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_enq_valid 
        = (0x7fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_enq_valid 
        = (0x3fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_enq_valid 
        = (0x1fffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 3U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_enq_valid 
        = (0xfffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 4U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_enq_valid 
        = (0x7ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 5U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_enq_valid 
        = (0x3ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 6U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_enq_valid 
        = (0x1ffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 7U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_enq_valid 
        = (0xffU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 8U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_enq_valid 
        = (0x7fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 9U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_enq_valid 
        = (0x3fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_enq_valid 
        = (0x1fU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_enq_valid 
        = (0xfU & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                    >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_enq_valid 
        = (7U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                  >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_enq_valid 
        = (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                  >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_enq_valid 
        = (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                  >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)));
    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_source
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_extra_id
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_size 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_size
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_size
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_size
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_size
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_size
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_tl_state_size
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT____Vxrand1))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_tl_state_size
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT____Vxrand1))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_tl_state_size
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT____Vxrand1))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_tl_state_size
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT____Vxrand1))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_tl_state_size
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT____Vxrand1))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT____Vxrand1))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT____Vxrand1))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_recho_tl_state_source 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_source
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_source
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_source
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_source
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_source
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_tl_state_source
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT____Vxrand2))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_tl_state_source
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT____Vxrand2))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_tl_state_source
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT____Vxrand2))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_tl_state_source
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT____Vxrand2))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_tl_state_source
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT____Vxrand2))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT____Vxrand2))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT____Vxrand2))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_recho_extra_id 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_extra_id
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_extra_id
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_extra_id
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_extra_id
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_extra_id
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_extra_id
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_extra_id
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_extra_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT____Vxrand3))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_extra_id
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT____Vxrand3))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_extra_id
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT____Vxrand3))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_extra_id
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT____Vxrand3))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_extra_id
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT____Vxrand3))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT____Vxrand3))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT____Vxrand3))))))))))))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode 
        = ((7U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1)));
    }
    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rresp 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_resp
            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_echo_tl_state_size
            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rresp 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_resp
               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_resp
                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_resp
                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_resp
                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_resp
                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_resp
                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_resp
                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_resp
                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_resp
                                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_resp
                                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_resp
                                                    [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_resp
                                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_resp
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_resp
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                        : 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_resp
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value]))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_echo_tl_state_size
               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_echo_tl_state_size
                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_echo_tl_state_size
                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_echo_tl_state_size
                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_echo_tl_state_size
                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_echo_tl_state_size
                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_echo_tl_state_size
                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_echo_tl_state_size
                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_echo_tl_state_size
                                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_echo_tl_state_size
                                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_size
                                                    [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_size
                                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_size
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_size
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                        : 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_size
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value]))))))))))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___GEN_16 
        = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_last
           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
            : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_last
               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_last
                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                    : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_last
                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                        : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_last
                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                            : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_last
                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_last
                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                    : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_last
                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                        : ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_last
                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                            : ((5U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_last
                                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                : (
                                                   (4U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_last
                                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_last
                                                    [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_last
                                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_last
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                       : 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_last
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value]))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_source 
        = ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_echo_tl_state_source
           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value]
            : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_echo_tl_state_source
               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
                : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_echo_tl_state_source
                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                    : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_echo_tl_state_source
                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_echo_tl_state_source
                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                            : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_echo_tl_state_source
                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                                : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                    ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_echo_tl_state_source
                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                    : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_echo_tl_state_source
                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                        : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_echo_tl_state_source
                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                            : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_echo_tl_state_source
                                               [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                                : (
                                                   (5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_echo_tl_state_source
                                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source
                                                    [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source
                                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                        : 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value])))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__da_bits_opcode 
        = ((7U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id__v0;
    }
    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_source
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT____Vxrand1))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT____Vxrand1))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT____Vxrand1))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT____Vxrand1))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT____Vxrand1))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT____Vxrand1))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT____Vxrand1))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_source 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_source
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_source
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_source
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_source
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_source
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT____Vxrand2))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT____Vxrand2))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT____Vxrand2))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT____Vxrand2))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT____Vxrand2))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT____Vxrand2))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT____Vxrand2))))))))))))))));
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext_R0_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram
        [vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__reg_R0_addr];
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address 
            = (0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address);
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT___GEN_0)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_param;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_valid)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___GEN_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1;
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_bits_opcode 
        = ((7U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first)
                      ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)
                           ? 1U : 0U) ? (~ (0x3ffU 
                                            & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)) 
                                               >> 3U)))
                          : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first)
                         ? (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)
                              ? 1U : 0U) ? (~ (0xfffffU 
                                               & (((IData)(0xffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo_lo)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0x2fU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x2fU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x2eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x2eU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x2dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x2dU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2cU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2bU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0x2aU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x2aU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 0x29U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 0x29U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 0x28U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 0x28U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo_lo)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_a_T 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signSel_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_d_T 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signSel_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_0_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_0) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_1_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_1) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_2_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_2) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_3_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_3) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_4_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_4) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_5_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_5) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_6_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_6) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_7_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_7) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_8_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_8) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_9_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_9) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_10_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_10) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_11_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_11) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_12_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_12) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_13_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_13) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_14_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_14) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___error_15_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_15) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bresp 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data) 
           | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_15)
               : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_14)
                   : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_13)
                       : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_12)
                           : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_11)
                               : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_10)
                                   : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_9)
                                       : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_8)
                                           : ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_7)
                                               : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_6)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_5)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_4)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_3)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_2)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_1)
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__error_0)))))))))))))))));
    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_source
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_size 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT____Vxrand1))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT____Vxrand1))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT____Vxrand1))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT____Vxrand1))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT____Vxrand1))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT____Vxrand1))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT____Vxrand1))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_source 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_source
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT____Vxrand2))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT____Vxrand2))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT____Vxrand2))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT____Vxrand2))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT____Vxrand2))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT____Vxrand2))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT____Vxrand2))))))))))))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__maybe_full)));
    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_source
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_size 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT____Vxrand1))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT____Vxrand1))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT____Vxrand1))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT____Vxrand1))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT____Vxrand1))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT____Vxrand1))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT____Vxrand1))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_source 
            = ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source
               [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source
                       [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source
                               [0U] : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                        ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source
                                       [0U] : ((0xaU 
                                                == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source
                                               [0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT____Vxrand2))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT____Vxrand2))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT____Vxrand2))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT____Vxrand2))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT____Vxrand2))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT____Vxrand2))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT____Vxrand2))))))))))))))));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0xfU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0xfU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0xeU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0xeU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0xdU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0xdU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xcU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0xbU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0xbU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0xaU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0xaU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 9U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 9U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 8U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 8U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo_lo)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo 
        = ((0x8000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                        >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                            >> 0x2fU)) 
                                   << 1U)) | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 0x2fU))))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x2eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x2eU))))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x2dU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x2dU))))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2cU))))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x2bU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x2bU))))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0x2aU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x2aU))))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 0x29U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 0x29U))))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 0x28U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 0x28U))))) 
                                                          << 8U)) 
                                                      | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo_lo)))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signbit_a_T 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signSel_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signbit_d_T 
        = (((0x80U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                               >> 0x3fU)) << 7U)) | 
            ((0x40U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                >> 0x37U)) << 6U)) 
             | ((0x20U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                   >> 0x2fU)) << 5U)) 
                | ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x27U)) << 4U)) 
                   | ((8U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                      >> 0x1fU)) << 3U)) 
                      | ((4U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                         >> 0x17U)) 
                                << 2U)) | ((2U & ((IData)(
                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                           >> 0xfU)) 
                                                  << 1U)) 
                                           | (1U & (IData)(
                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                            >> 7U)))))))))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signSel_T_2)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size))) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << 
                                                (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_size))) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first)
                          ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                         >> 3U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_size)) 
                                         >> 3U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__da_bits_opcode 
        = ((7U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
            [0U]) ? 4U : ((6U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                           [0U]) ? 4U : ((5U == vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                          [0U]) ? 2U
                                          : ((4U == 
                                              vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                              [0U])
                                              ? 1U : 
                                             ((3U == 
                                               vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                               [0U])
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                                                   [0U])
                                                   ? 1U
                                                   : 0U))))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_size__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x1ffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_size)) 
                                                  >> 2U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter 
            = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first)
                          ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                              ? 0U : (~ (0x1ffffffU 
                                         & (((IData)(0xfffU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_3 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter1_2 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first)
                      ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_last_1)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address 
            = (0x1fffU & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_address);
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1_io_deq_valid)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_last_1))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___GEN_0)));
    if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_last)))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_param;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_valid)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeat_last))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___GEN_0)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_3 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                             ? 0U : (~ (0xfffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                         >> 3U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_3 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1_1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter1_1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1_1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_opcode))
                             ? 0U : (~ (0x1fffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_size)) 
                                         >> 2U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__da_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_2 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first)
                        ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))
                            ? (~ (0x7ffU & (((IData)(0x3fU) 
                                             << (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3))) 
                                            >> 2U)))
                            : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first)
                        ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                            ? 0U : (~ (0x7ffU & (((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
                                                 >> 2U))))
                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_3 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_2 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1_1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1_1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_opcode))
                             ? (~ (0x1fffffU & (((IData)(0xffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_c_bits_size)) 
                                                >> 2U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1_1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter 
            = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first)
                         ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_opcode))
                             ? 0U : (~ (0x1fffffU & 
                                        (((IData)(0xffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_size)) 
                                         >> 2U)))) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_burst
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id 
            = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_id
               [0U] & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_addr
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__ram_len
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcause_r 
        = (((QData)((IData)((1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r) 
                                   | ((~ ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r) 
                                          >> 1U)) & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcause_t 
                                                             >> 0x3fU))))))) 
            << 0x3fU) | ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                          ? 7ULL : ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ctrl__DOT__IRQtypeW_dff__DOT__qout_r))
                                     ? 0xbULL : (0x7fffffffffffffffULL 
                                                 & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_csrfile__DOT__mcause_t))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__csrop2 
        = ((0x200U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
            ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__imm_dff__DOT__qout_r
            : ((0x100U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
                ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs1Data
                : 0ULL));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__resADD 
        = (((IData)((0U != (0x68U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))))
             ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__pcE_dff__DOT__qout_r
             : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs1Data) 
           + ((2U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_dff__DOT__qout_r))
               ? vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_ex_stage__DOT__rs2Data
               : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__imm_dff__DOT__qout_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__imm_r 
        = ((0x63U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))
            ? ((0xffffffffffffe000ULL & ((- (QData)((IData)(
                                                            (1U 
                                                             & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                >> 0x1fU))))) 
                                         << 0xdU)) 
               | (QData)((IData)(((0x1000U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                << 4U)) 
                                     | ((0x7e0U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                            >> 7U))))))))
            : ((0x23U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))
                ? ((0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                    >> 0x1fU))))) 
                                             << 0xcU)) 
                   | (QData)((IData)(((0xfe0U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                  >> 7U))))))
                : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Itype)
                    ? ((0xfffffffffffff000ULL & ((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                        >> 0x1fU))))) 
                                                 << 0xcU)) 
                       | (QData)((IData)((0xfffU & 
                                          (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                           >> 0x14U)))))
                    : ((0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))
                        ? ((0xffffffffffe00000ULL & 
                            ((- (QData)((IData)((1U 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                    >> 0x1fU))))) 
                             << 0x15U)) | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r) 
                                                              | ((0x800U 
                                                                  & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                                       >> 0x14U))))))))
                        : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Utype)
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))))
                            : ((0x73U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))
                                ? (QData)((IData)((0x1fU 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                                                      >> 0xfU))))
                                : 0ULL))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__rdWriteEnableE_r 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Rtype) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Itype)) 
             | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Utype)) 
            | (0x6fU == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
           | (0x73U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__rs2ReadEnable 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Rtype) 
            | (0x23U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
           | (0x63U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__csr 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRW) 
            | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRS)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRC));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_3 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1_3 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_3 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_260 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_first;
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_261 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_first)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_denied_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___T_4 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___T_5 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__state))
                  ? (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__r_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___T_4 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___T_5 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__state))
                  ? (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                     >> 3U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__r_1)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___GEN_261 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_first)
            ? (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_denied_r));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e = 0x20U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_a 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_a_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_b 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_bT)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_1)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_1)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_c 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_c_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_2)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_2)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_d 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_d_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_3)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_3)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_e 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___rxInc_e_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_4)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__rx_z_4)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d = 0x20U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e = 0x20U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_a 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_a_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_b 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_bT)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_1)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_1)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_c 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_c_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_2)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_2)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_d 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_d_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_3)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_3)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_e 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready)
                            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___rxInc_e_T)
                            : ((0x100000U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_4)
                                ? 0xfffffU : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__rx_z_4)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_3 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_3 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_3 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_3 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_16 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_14 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_14 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_27 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_25 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_25 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_38 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_36 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_36 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_49 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_47 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_47 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_16 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_14 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_14 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_27 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_25 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_25 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_38 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_36 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_36 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_49 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_47 
           | (0xffffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_47 
                         >> 4U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free) 
                       << 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__state 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___T_3)
                ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___T_4)
                         ? 2U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_11)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__state 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___T_3)
                ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___T_4)
                         ? 2U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_11)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__enq_ptr)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___enq_ptr_wrap_value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__enq_ptr)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__deq_ptr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___wrap_value_T_1;
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1 
        = ((8U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
            ? ((0x1eU & (((IData)(1U) << (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 9U))) 
                         >> 2U)) | (2U >= (0xfU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 9U))))
            : 0U);
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1 
        = ((8U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
            ? ((0x1eU & (((IData)(1U) << (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                >> 9U))) 
                         >> 2U)) | (2U >= (0xfU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                   >> 9U))))
            : 0U);
    VL_SHIFTR_WWI(512,512,10, __Vtemp3989, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp3989[0U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp3989[1U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp3989[2U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp3989[3U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp3989[4U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp3989[5U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp3989[6U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp3989[7U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp3989[8U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp3989[9U];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp3989[0xaU];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp3989[0xbU];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp3989[0xcU];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp3989[0xdU];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp3989[0xeU];
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp3989[0xfU];
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_count 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first)
                         ? ((5U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data))
                             ? 0U : ((4U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data))
                                      ? 0U : ((3U == 
                                               (7U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data))
                                               ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___first_beats_c_T_1) 
                                                  + 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                        >> 3U))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                          >> 3U)))))
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___first_beats_c_T_1))
                                                   : 
                                                  ((IData)(2U) 
                                                   + 
                                                   (((0x20U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                      ? 0U
                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_beats_beats)) 
                                                    + 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                          >> 3U)))
                                                      ? 
                                                     ((2U 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                               >> 9U))) 
                                                          >> 5U)) 
                                                      | (5U 
                                                         >= 
                                                         (0xfU 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                             >> 9U))))
                                                      : 0U)))))))
                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___first_count_T_1)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 7U)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 7U))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0xcU)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0xcU))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_1)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_1)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x11U)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0x11U))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_2)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_2)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x16U)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0x16U))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_3)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_3)));
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x1bU)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0x1bU))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_4)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_4)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_count 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first)
                         ? ((5U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data))
                             ? 0U : ((4U == (7U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data))
                                      ? 0U : ((3U == 
                                               (7U 
                                                & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data))
                                               ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___first_beats_c_T_1) 
                                                  + 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                        >> 3U))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                          >> 3U)))))
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data))
                                                   ? 
                                                  ((IData)(2U) 
                                                   + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___first_beats_c_T_1))
                                                   : 
                                                  ((IData)(2U) 
                                                   + 
                                                   (((0x20U 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data)
                                                      ? 0U
                                                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_beats_beats)) 
                                                    + 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                          >> 3U)))
                                                      ? 
                                                     ((2U 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                               >> 9U))) 
                                                          >> 5U)) 
                                                      | (5U 
                                                         >= 
                                                         (0xfU 
                                                          & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                             >> 9U))))
                                                      : 0U)))))))
                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___first_count_T_1)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e = 0U;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 7U)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 7U))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0xcU)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0xcU))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_1)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_1)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x11U)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0x11U))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_2)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_2)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x16U)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0x16U))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_3)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_3)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
            = (0xfffffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready)
                            ? ((7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                                      & (((IData)(1U) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                                         >> 5U))) ? 
                               ((0x14U < (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x1bU)))
                                 ? 0xfffffU : (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                    >> 0x1bU))) 
                                               >> 1U))
                                : 0U) : ((0x100000U 
                                          & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_4)
                                          ? 0xfffffU
                                          : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_4)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__maybe_full)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__empty)
                ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_ready)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__d_last_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__d_last_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__d_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__d_last_counter));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__maybe_full = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__deq__DOT___do_enq_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__maybe_full 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__deq__DOT___do_enq_T;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__empty)
                ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq_io_deq_ready)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT___T 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT___T_1 
        = (1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT___T_2 
        = (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_pwrite 
        = (((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
            | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state))) 
           | (5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_penable 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
            | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state))) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__bundleOut_0_penable_REG));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb_auto_out_psel 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi42apb__DOT__state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__wrap 
        = (0x10U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__enq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT___value_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT___value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst
           [0U] : 1U);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
           | (0xfffffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
                             << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last_counter)) 
           | (0U == ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_first)
            ? (3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rresp))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_denied_r));
    if ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rlast 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_last_io_deq_bits_MPORT_data;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_last_io_deq_bits_MPORT_data;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rlast 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___GEN_16;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT___GEN_16;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a_last_counter)) 
           | (0U == ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__rdata_REG 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__in_arready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr
        [vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
           | (0xfffffffeU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free 
                             << 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___T_2)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                    ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last)
                             ? 0U : 2U)) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___T_3)
                                             ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last)
                                                 ? 0U
                                                 : 2U)
                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_9)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr
        [vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1];
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_last_counter)) 
           | (0U == ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__locked) 
            & (7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__b_delay))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_holds_d));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x1cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x1bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x1bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x1aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x1aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x19U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x19U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x18U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x18U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo_lo))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x3cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x3cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x3bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x3bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x3aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x3aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x39U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x39U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x38U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x38U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi_lo))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_a_T) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_a_T) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_d_T) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signbit_d_T) 
                                         << 2U)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d 
        = (0x1fU & (((8U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                      ? ((0x1eU & (((IData)(1U) << 
                                    (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 9U))) 
                                   >> 2U)) | (2U >= 
                                              (0xfU 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 9U))))
                      : 0U) + ((4U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 3U))) 
                               | (5U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__w_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bvalid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__empty)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__r_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)) 
            & (7U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__b_delay))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_holds_d));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_lo 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x1fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x1fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x1dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x1dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x1cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x1cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x1bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x1bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x1aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x1aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x19U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x19U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x18U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x18U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_lo_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_lo_lo))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_hi 
        = ((0x80000000U & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                            >> ((2U & ((IData)((vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                >> 0x3fU)) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3fU))))) 
                           << 0x1fU)) | ((0x40000000U 
                                          & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                              >> ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3eU))))) 
                                             << 0x1eU)) 
                                         | ((0x20000000U 
                                             & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                 >> 
                                                 ((2U 
                                                   & ((IData)(
                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                               >> 0x3dU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                >> 0x3dU))))) 
                                                << 0x1dU)) 
                                            | ((0x10000000U 
                                                & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x3cU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x3cU))))) 
                                                   << 0x1cU)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                       >> 
                                                       ((2U 
                                                         & ((IData)(
                                                                    (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                     >> 0x3bU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                      >> 0x3bU))))) 
                                                      << 0x1bU)) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x3aU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x3aU))))) 
                                                         << 0x1aU)) 
                                                     | ((0x2000000U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x39U)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x39U))))) 
                                                            << 0x19U)) 
                                                        | ((0x1000000U 
                                                            & (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x38U)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x38U))))) 
                                                               << 0x18U)) 
                                                           | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_hi_hi_lo) 
                                                               << 0x10U) 
                                                              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__logic_out_hi_lo))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_a_T_2 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signbit_a_T) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signbit_a_T) 
                                         << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_d_T_2 
        = ((0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signbit_d_T) 
                     << 1U)) | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signbit_d_T) 
                                         << 2U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_2)
                ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
                    ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)
                             ? 0U : 2U)) : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___T_3)
                                             ? ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)
                                                 ? 0U
                                                 : 2U)
                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_9)));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first)
                      ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_auto_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d 
        = (0x1fU & (((8U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                      ? ((0x1eU & (((IData)(1U) << 
                                    (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                           >> 9U))) 
                                   >> 2U)) | (2U >= 
                                              (0xfU 
                                               & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                  >> 9U))))
                      : 0U) + ((4U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                             >> 3U))) 
                               | (5U == (7U & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U))))));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__d_first_counter = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___d_first_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__d_first_counter 
            = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__d_first)
                         ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_opcode))
                             ? (~ (0xfffffU & (((IData)(0xffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_auto_in_d_bits_size)) 
                                               >> 3U)))
                             : 0U) : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__d_first_counter1)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__beatsLeft))
            ? (2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__state_0));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a_last_counter)) 
           | (0U == ((4U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode
                      [0U]) ? 0U : (0xfU & (~ (0x7ffU 
                                               & (((IData)(0x3fU) 
                                                   << 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                                   [0U]) 
                                                  >> 2U)))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__divertprobes));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_count_T_1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_count) 
                    - (IData)(1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__state 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_2)
                ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___T_3)
                         ? 2U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_11)));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free) 
                       << 1U)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state = 0U;
    } else if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___q_last_T) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_2)
                ? 1U : ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___T_3)
                         ? 2U : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_11)));
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    VL_EXTEND_WI(95,32, __Vtemp3991, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift);
    VL_EXTEND_WI(95,32, __Vtemp3992, vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp3993, __Vtemp3992, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
        = (__Vtemp3991[0U] | __Vtemp3993[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
        = (__Vtemp3991[1U] | __Vtemp3993[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U] 
        = (0x7fffffffU & (__Vtemp3991[2U] | __Vtemp3993[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free) 
                       << 1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
           | (0xfeU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free) 
                       << 1U)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((7U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_7 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((6U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_6 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((5U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_5 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((4U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_4 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_3 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_2 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_1 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_T_1) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index))) {
            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__mem_0 
                = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram
                [0U];
        }
    }
    VL_EXTEND_WI(95,32, __Vtemp3997, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__shift);
    VL_EXTEND_WI(95,32, __Vtemp3998, vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp3999, __Vtemp3998, 
                  ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
        = (__Vtemp3997[0U] | __Vtemp3999[0U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[1U] 
        = (__Vtemp3997[1U] | __Vtemp3999[1U]);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[2U] 
        = (0x7fffffffU & (__Vtemp3997[2U] | __Vtemp3999[2U]));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_last_beats_a 
        = (0x1fU & ((IData)(2U) + (((0x20U & vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= 
                                                (0xfU 
                                                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                    >> 9U))))) 
                                   + ((1U == (7U & 
                                              (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                               >> 3U)))
                                       ? ((2U & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                      >> 9U))) 
                                                 >> 5U)) 
                                          | (5U >= 
                                             (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                                 >> 9U))))
                                       : 0U))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__bad 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
           | (3U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__addr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__busy)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__r_addr
            : vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT___wrapMask_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__len 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__busy)
            ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__r_len)
            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_len));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_size
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid 
            = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__wbeats_latched)) 
               & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
            = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_id
               [0U] & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1__DOT__ram_len
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag_auto_out_awvalid 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT___in_awready_T) 
               & 1U);
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_len = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4frag_auto_out_awvalid = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT___GEN_64 
        = (((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__latched));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_burst
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id 
            = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id
               [0U] & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_len
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_echo_extra_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst = 1U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_len = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
            [0U];
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id 
            = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id
               [0U] & 1U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len
            [0U];
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_echo_extra_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst = 1U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__empty 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__rs2ReadAddr 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__rs2ReadEnable)
            ? (0x1fU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r 
                        >> 0x14U)) : 0U);
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__instTypeE_r 
        = (((IData)((0x30200073U == (0xfff0707fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
            << 0xbU) | (((IData)((0x73U == (0xfff0707fU 
                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                         << 0xaU) | (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRWI) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRSI)) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__CSRRCI)) 
                                      << 9U) | (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__csr) 
                                                 << 8U) 
                                                | (((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                    << 7U) 
                                                   | (((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                       << 6U) 
                                                      | (((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                          << 5U) 
                                                         | (((IData)(
                                                                     (0x67U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                             << 4U) 
                                                            | (((0x63U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                << 3U) 
                                                               | ((((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                    | (0x1bU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                   << 2U) 
                                                                  | ((((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                       | (0x3bU 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
                                                                      << 1U) 
                                                                     | ((0x1bU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r)) 
                                                                        | (0x3bU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))))))))))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__rs1ReadEnable 
        = (((((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Rtype) 
              | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__Itype)) 
             | (0x23U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
            | (0x63U == (0x7fU & vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_if_stage__DOT__instD_dff__DOT__qout_r))) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_210407_rvcpu__DOT__u_ysyx_210407_id_stage__DOT__csr));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__empty)
                ? ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__axi4xbar_auto_out_0_rready)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T))
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2 
        = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3;
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_261));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_d_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_261));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_261));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
           | ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_bits_opcode)) 
           & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract__DOT__state)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
           | ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_count)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__q_last_beats_a))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_d_corrupt 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp_io_deq_bits_MPORT_data)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___GEN_261));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_7 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_5 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_5 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_7 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_5 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_5 
                        >> 8U)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_18 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_16 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_16 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_29 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_27 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_27 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_40 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_38 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_38 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_51 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_49 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_49 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_18 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_16 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_16 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_29 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_27 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_27 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_40 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_38 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_38 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_51 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_49 
           | (0xfffU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_49 
                        >> 8U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
           | ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
              & (0U == (0x1fU & ((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1))))));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
           | ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_last_count)) 
              & (0U == (0x1fU & ((IData)(2U) + (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___q_last_beats_c_T_1))))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__maybe_full));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_39 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4_auto_in_d_bits_size;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_45 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d)
                ? 1U : 0U);
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_36 
            = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d)
                ? (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_source_io_deq_bits_MPORT_data)
                : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_io_deq_bits_MPORT_data));
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_39 = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_45 = 0U;
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___T_36 = 0U;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_burst
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)
            ? vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst
           [0U] : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
           | (0xfffffffcU & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_d_corrupt 
        = ((0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rresp)) 
           | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__da_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a__DOT__maybe_full) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__a_last)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__idle));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__in_arready 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__full)) 
                 | (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__srams__DOT__r_full))));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_5 
        = (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
           | (0xfffffffcU & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_2 
                             << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_enq;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full 
            = vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_enq;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full) 
            & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_last)) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__idle));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied 
            = (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_last 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_rlast)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__r_wins) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_source;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_echo_extra_id
                 [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value]
                  : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                      ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_echo_extra_id
                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
                      : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_echo_extra_id
                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                          : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                              ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_echo_extra_id
                             [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                              : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_echo_extra_id
                                 [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                                  : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                      ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_echo_extra_id
                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                                      : ((9U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_echo_extra_id
                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                          : ((8U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                              ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_echo_extra_id
                                             [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                              : ((7U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                  ? 
                                                 vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_echo_extra_id
                                                 [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_echo_extra_id
                                                  [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_echo_extra_id
                                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_extra_id
                                                    [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_extra_id
                                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_extra_id
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_extra_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                        : 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_extra_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value]))))))))))))))) 
                << 4U) | ((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                           ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_id
                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value]
                           : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                               ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_id
                              [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
                               : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                   ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_id
                                  [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                                   : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                       ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_id
                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                                       : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                           ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_id
                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                                           : ((0xaU 
                                               == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                               ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_id
                                              [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                                               : ((9U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_id
                                                  [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                                   : 
                                                  ((8U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_id
                                                   [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_id
                                                    [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_id
                                                     [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_id
                                                      [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_id
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_id
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_id
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                           : 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value]))))))))))))))));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__locked;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_261;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint_auto_in_recho_tl_state_size;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4deint__DOT__locked;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_source;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_extra_id
                 [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_extra_id
                         [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_extra_id
                                 [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_extra_id
                                         [0U] : ((0xbU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                  ? 
                                                 vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_extra_id
                                                 [0U]
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_extra_id
                                                  [0U]
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_extra_id
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_extra_id
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT____Vxrand3))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT____Vxrand3))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_extra_id
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT____Vxrand3))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_extra_id
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT____Vxrand3))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_extra_id
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT____Vxrand3))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT____Vxrand3))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT____Vxrand3))))))))))))))))) 
                << 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_denied 
            = (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_bits_size 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_1_auto_in_becho_tl_state_size;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_1_auto_in_d_valid 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
           | ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d))));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_size));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___GEN_261;
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_size));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied 
            = (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bresp));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_last 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins)) 
                 | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_rlast)));
    if (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__r_wins) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_source;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id
                 [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_extra_id
                         [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_extra_id
                                 [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_extra_id
                                         [0U] : ((0xbU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                  ? 
                                                 vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id
                                                 [0U]
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id
                                                  [0U]
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT____Vxrand3))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT____Vxrand3))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT____Vxrand3))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT____Vxrand3))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT____Vxrand3))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT____Vxrand3))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT____Vxrand3))))))))))))))))) 
                << 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid 
            = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_denied 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT___GEN_261;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_recho_tl_state_size));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_valid 
            = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__empty)));
    } else {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_source;
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id
                 [0U] : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id
                         [0U] : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                  ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id
                                 [0U] : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                          ? vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_extra_id
                                         [0U] : ((0xbU 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                  ? 
                                                 vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_extra_id
                                                 [0U]
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? 
                                                  vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_extra_id
                                                  [0U]
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? 
                                                   vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_extra_id
                                                   [0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? 
                                                    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_extra_id
                                                    [0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? 
                                                     vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_extra_id
                                                     [0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? 
                                                      ((0x10U 
                                                        >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value))
                                                        ? 
                                                       vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_extra_id
                                                       [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__deq_ptr_value]
                                                        : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT____Vxrand3))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       ((0x10U 
                                                         >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value))
                                                         ? 
                                                        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_extra_id
                                                        [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__deq_ptr_value]
                                                         : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT____Vxrand3))
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        ((0x10U 
                                                          >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value))
                                                          ? 
                                                         vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_extra_id
                                                         [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__deq_ptr_value]
                                                          : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT____Vxrand3))
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         ((0x10U 
                                                           >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value))
                                                           ? 
                                                          vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_extra_id
                                                          [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__deq_ptr_value]
                                                           : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT____Vxrand3))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          ((0x10U 
                                                            >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value))
                                                            ? 
                                                           vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_extra_id
                                                           [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__deq_ptr_value]
                                                            : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT____Vxrand3))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT____Vxrand3))
                                                            : 
                                                           ((0x10U 
                                                             >= (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value))
                                                             ? 
                                                            vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_extra_id
                                                            [vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__deq_ptr_value]
                                                             : (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT____Vxrand3))))))))))))))))) 
                << 4U) | (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bvalid));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_denied 
            = (0U != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bresp));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_bits_size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__axi4yank_auto_in_becho_tl_state_size));
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__tl2axi4_auto_in_d_valid 
            = (1U & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__mem__DOT__axi4frag_auto_in_bvalid));
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_a_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_a_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_a_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_d_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_d_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT___signext_d_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics_auto_out_a_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
           | ((0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_count)) 
              & (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last_beats_d))));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics_auto_out_a_bits_corrupt 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                 & (vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                    >> 0x10U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter1 
        = (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_e_bits_sink 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                 & (vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                    >> 0x10U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__c__DOT__do_enq;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__monitor__DOT__a_first_counter));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full = 0U;
    } else if (((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__do_enq) 
                != (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__do_deq))) {
        vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full 
            = vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__err__DOT__a__DOT__do_enq;
    }
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter1 
        = (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter1 
        = (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter) 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter) 
                   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_2) 
                       << 2U)));
    vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
           | (0xfcU & ((IData)(vlTOPp->TestHarness__DOT__ldut__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_2) 
                       << 2U)));
}
